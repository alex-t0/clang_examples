.PHONY: clean All

All:
	@echo "----------Building project:[ SmartPointers - Debug ]----------"
	@cd "SmartPointers" && "$(MAKE)" -f  "SmartPointers.mk"
clean:
	@echo "----------Cleaning project:[ SmartPointers - Debug ]----------"
	@cd "SmartPointers" && "$(MAKE)" -f  "SmartPointers.mk" clean
