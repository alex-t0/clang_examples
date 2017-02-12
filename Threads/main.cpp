#include <iostream>
#include <thread>
#include <mutex>
#include <time.h>
#include <stdlib.h>

void thread_func()
{
	for (int i = 0; i < 10000; i++)
		i = ++i - 1;
}

std::mutex m;
int shared_data;

void safe_func()
{
	{
		std::unique_lock<std::mutex> lock{m};
		shared_data++;
	}
	int local_copy = shared_data;
	std::cout << "Running for " << local_copy << std::endl;
	int delay = rand() % 10;
	std::this_thread::sleep_for(std::chrono::seconds(delay));
	std::cout << "Finishing run for " << local_copy << std::endl;
}

int main(int argc, char **argv)
{
	int test = 5;
	
	std::cout << "test++ + ++test = " << test++ + ++test << std::endl;
	
	srand(time(0));
	
	std::thread threads[10];
	
	for (int i = 0; i < 10; i++)
		threads[i] = std::thread{ safe_func };
	
	for (int i = 0; i < 10; i++)
		threads[i].join();
	
	return 0;
}
