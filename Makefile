.PHONY: clean All

All:
	@echo "----------Building project:[ Enums - Debug ]----------"
	@cd "Enums" && "$(MAKE)" -f  "Enums.mk"
clean:
	@echo "----------Cleaning project:[ Enums - Debug ]----------"
	@cd "Enums" && "$(MAKE)" -f  "Enums.mk" clean
