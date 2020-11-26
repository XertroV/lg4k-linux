MODULE_NAME	= cx511h.ko
PWD		= $(shell pwd)
KERNEL_VERSION	= $(shell uname -r)
DIST_PATH	= /lib/modules/$(KERNEL_VERSION)/kernel/drivers/media/video
DEPMOD		= /sbin/depmod


install:
	@echo install $(MODULE_NAME) module 
	@test -d $(DIST_PATH) || mkdir -p $(DIST_PATH)
	@cp $(PWD)/$(MODULE_NAME) $(DIST_PATH)/
	$(DEPMOD) -a

uninstall:
	@echo uninstall $(MODULE_NAME) module
	rm -f $(DIST_PATH)/$(MODULE_NAME)
	$(DEPMOD) -a



