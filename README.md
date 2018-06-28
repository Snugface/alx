This really sucks. But it's real easy to make and install:

You'll need

Packages: linux & linux-header WITH MATCHING VERSIONS

Then get into the directory with your alx sources and do:
make -C /usr/lib/modules/$(uname -r)/build/ M=$(pwd) modules
make -C /usr/lib/modules/$(uname -r)/build/ M=$(pwd) modules_install
cp alx.ko /lib/modules/$(uname -r)/kernel/drivers/net/ethernet/atheros/alx/alx.ko
sudo rmmod alx
sudo insmod /lib/modules/$(uname -r)/kernel/drivers/net/ethernet/atheros/alx/alx.ko
sudo depmod

Tun and done!

