make ARCH=arm clean
make ARCH=arm CROSS_COMPILE=$TCHAIN -C drivers/net/wireless/compat-wireless_R5.SP2.03 KLIB=`pwd` KLIB_BUILD=`pwd` clean


