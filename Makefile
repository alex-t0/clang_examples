.PHONY: clean All

All:
	@echo "----------Building project:[ Exceptions - Debug ]----------"
	@cd "Exceptions" && "$(MAKE)" -f  "Exceptions.mk"
clean:
	@echo "----------Cleaning project:[ Exceptions - Debug ]----------"
	@cd "Exceptions" && "$(MAKE)" -f  "Exceptions.mk" clean
