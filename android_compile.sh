TCHAIN=/BUILD/CM10/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-
TCHAIN=/BUILD/X42/prebuilts/gcc/linux-x86/arm/arm-eabi-4.6/bin/arm-eabi-

make ARCH=arm clean
make ARCH=arm CROSS_COMPILE=$TCHAIN ap33_android_defconfig
date '+%Y%m%d%H' > .version

make ARCH=arm CROSS_COMPILE=$TCHAIN -j4

make ARCH=arm CROSS_COMPILE=$TCHAIN -C drivers/net/wireless/compat-wireless_R5.SP2.03 KLIB=`pwd` KLIB_BUILD=`pwd` clean -j2
make ARCH=arm CROSS_COMPILE=$TCHAIN -C drivers/net/wireless/compat-wireless_R5.SP2.03 KLIB=`pwd` KLIB_BUILD=`pwd` -j2


