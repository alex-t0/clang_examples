.PHONY: clean All

All:
	@echo "----------Building project:[ Templates - Debug ]----------"
	@cd "Templates" && "$(MAKE)" -f  "Templates.mk"
clean:
	@echo "----------Cleaning project:[ Templates - Debug ]----------"
	@cd "Templates" && "$(MAKE)" -f  "Templates.mk" clean
