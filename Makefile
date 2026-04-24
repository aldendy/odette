.PHONY: clean All

All:
	@echo "----------Building project:[ odette - Debug ]----------"
	@"$(MAKE)" -f  "odette.mk"
clean:
	@echo "----------Cleaning project:[ odette - Debug ]----------"
	@"$(MAKE)" -f  "odette.mk" clean
