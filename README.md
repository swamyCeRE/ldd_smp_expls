#To connect the multipass (multipass is a vartuval env)
multipass shell

#password
p


#Hello world sample program commands
#build .ko 
make all

#clean
make clean

#load the  module or .ko
sudo insmod ldd.ko


#remove the module or .ko file
sudo rmmod ldd.ko

#console message command
sudo dmesg

#to know the info about module 
modinfo ldd.ko