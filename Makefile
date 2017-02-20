.PHONY: clean All

All:
	@echo "----------Building project:[ Programming - Debug ]----------"
	@cd "Programming" && "$(MAKE)" -f  "Programming.mk"
clean:
	@echo "----------Cleaning project:[ Programming - Debug ]----------"
	@cd "Programming" && "$(MAKE)" -f  "Programming.mk" clean
