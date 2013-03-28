Samsung Galaxy Ace: Unpack and repack boot.img, editing boot logo
Ketut P. Kumajaya ketut.kumajaya @ xda-developers.com, Jan 1 2011

Unpack:
$ mkdir -p unpack
$ tools/unpackbootimg -i boot.img -o unpack

Extracting boot.img-ramdisk.gz
$ mkdir -p unpack/ramdisk
$ cd unpack/ramdisk
$ gzip -dc ../boot.img-ramdisk.gz | cpio -i
$ cd ../../

Packing a new ramdisk:
$ tools/mkbootfs unpack/ramdisk | gzip -1 > unpack/boot.img-ramdisk.gz

Packing a new CF-Root ramdisk:
$ tools/mkbootfs-cfroot unpack/ramdisk | gzip -1 > unpack/boot.img-ramdisk.gz

Create a new boot.img:
$ mkbootimg --kernel unpack/boot.img-zImage --ramdisk unpack/boot.img-ramdisk.gz -o boot-repack.img --base `cat unpack/boot.img-base`

Convert rle to png:
$ tools/from565 -rle < COOPER.rle > COOPER.raw
$ convert -size 320x480 -depth 8 rgb:COOPER.raw COOPER.png

Convert png to rle:
$ convert -depth 8 COOPER.png rgb:COOPER.raw
$ tools/to565 -rle < COOPER.raw > COOPER.rle

Using unpackbootimg.sh and repackbootimg.sh
- Copy original boot.img to the root of blackhawk-tools
- Type "./unpackbootimg.sh boot.img" command to unpack boot.img
- Make ramdisk modification and/or replace boot.img-zImage
- Type "./repackbootimg.sh boot.img" command (or "./repackbootimg.sh boot.img -cfroot" for CF-Root)
  to repack boot.img, the result is boot.img-repack
- Type "tools/adb install app/CWMManager.apk" to install CWMManager to device
- Type "tools/adb push boot.img-repack /sdcard/zImage" to copy boot.img to device SD card as a zImage file
- Flash the zImage file using CWMManager - Flash kernel
