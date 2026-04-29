# obj-m += proc.o
# all:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

# clean:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean

obj-m := proc.o

 KDIR := /lib/modules/$(shell uname -r)/build
 SRC  := $(shell pwd)
 OUT  := $(SRC)/build

 all:
	mkdir -p $(OUT)
	cp $(SRC)/proc.c $(OUT)/
	echo "obj-m := proc.o" > $(OUT)/Makefile
	$(MAKE) -C $(KDIR) M=$(OUT) modules

 clean:
	$(MAKE) -C $(KDIR) M=$(OUT) clean
	rm -rf $(OUT)