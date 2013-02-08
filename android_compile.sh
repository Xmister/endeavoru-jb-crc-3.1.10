TCHAIN=/BUILD/X42/prebuilts/gcc/linux-x86/arm/arm-eabi-4.6/bin/arm-eabi-

./android_clean.sh

make ARCH=arm CROSS_COMPILE=$TCHAIN ap33_android_defconfig
date '+%Y%m%d%H' > .version

make ARCH=arm CROSS_COMPILE=$TCHAIN -j4
make ARCH=arm CROSS_COMPILE=$TCHAIN -C drivers/net/wireless/compat-wireless_R5.SP2.03 KLIB=`pwd` KLIB_BUILD=`pwd` -j2


