.PHONY: clean All

All:
	@echo "----------Building project:[ Modularization - Debug ]----------"
	@cd "Modularization" && "$(MAKE)" -f  "Modularization.mk"
clean:
	@echo "----------Cleaning project:[ Modularization - Debug ]----------"
	@cd "Modularization" && "$(MAKE)" -f  "Modularization.mk" clean
