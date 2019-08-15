This really sucks. But it's real easy to make and install:

You'll need

Packages: linux & linux-header WITH MATCHING VERSIONS

Then get into the directory with your alx sources and do:
```
make -C /usr/lib/modules/$(uname -r)/build/ M=$(pwd) modules
make -C /usr/lib/modules/$(uname -r)/build/ M=$(pwd) modules_install
cp alx.ko /lib/modules/$(uname -r)/kernel/drivers/net/ethernet/atheros/alx/alx.ko
sudo rmmod alx
sudo insmod /lib/modules/$(uname -r)/kernel/drivers/net/ethernet/atheros/alx/alx.ko
sudo depmod

```
Tun and done!


The above sources were taken from kernel version 4.12 and slightly modified for newer kernel

They appear to work fine on 5.0.0 as well

And here is the faulty commit:

https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/commit/drivers/net/ethernet/atheros/alx?id=bc2bebe8de8ed4ba6482c9cc370b0dd72ffe8cd2

The above sources were obtained by manually modifying 4.12 alx driver with the above commit.

Oh, and this is all GPL-3 licensed. See the "LICENSE" for more detail
