# obj-m = ldd.o
# all:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

# clean:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean

#---------------------------------------------------------

obj-m := ldd.o

 KDIR := /lib/modules/$(shell uname -r)/build
 SRC  := $(shell pwd)
 OUT  := $(SRC)/build

 all:
	mkdir -p $(OUT)
	cp $(SRC)/ldd.c $(OUT)/
	echo "obj-m := ldd.o" > $(OUT)/Makefile
	$(MAKE) -C $(KDIR) M=$(OUT) modules

 clean:
	$(MAKE) -C $(KDIR) M=$(OUT) clean
	rm -rf $(OUT)
