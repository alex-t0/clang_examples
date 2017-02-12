.PHONY: clean All

All:
	@echo "----------Building project:[ LvalueRvalue - Debug ]----------"
	@cd "LvalueRvalue" && "$(MAKE)" -f  "LvalueRvalue.mk"
clean:
	@echo "----------Cleaning project:[ LvalueRvalue - Debug ]----------"
	@cd "LvalueRvalue" && "$(MAKE)" -f  "LvalueRvalue.mk" clean
