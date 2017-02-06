.PHONY: clean All

All:
	@echo "----------Building project:[ Abstractions - Debug ]----------"
	@cd "Abstractions" && "$(MAKE)" -f  "Abstractions.mk"
clean:
	@echo "----------Cleaning project:[ Abstractions - Debug ]----------"
	@cd "Abstractions" && "$(MAKE)" -f  "Abstractions.mk" clean
