.PHONY: clean All

All:
	@echo "----------Building project:[ AutoKeyword - Debug ]----------"
	@cd "AutoKeyword" && "$(MAKE)" -f  "AutoKeyword.mk"
clean:
	@echo "----------Cleaning project:[ AutoKeyword - Debug ]----------"
	@cd "AutoKeyword" && "$(MAKE)" -f  "AutoKeyword.mk" clean
