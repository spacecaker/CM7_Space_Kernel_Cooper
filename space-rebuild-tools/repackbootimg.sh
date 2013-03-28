#!/bin/bash

# Ketut P. Kumajaya ketut.kumajaya @ forum.xda-developers.com, Jan 1 2011

chmod -R +x tools
cmd="mkbootfs"
if [ "$2" = "-cfroot" ]; then
  cmd="mkbootfs-cfroot"
fi
./$cmd unpack/$1-ramdisk | gzip -1 > unpack/$1-ramdisk.gz
./mkbootimg --kernel unpack/$1-zImage --ramdisk unpack/$1-ramdisk.gz -o $1-repack --base `cat unpack/$1-base`
#rm unpack/$1-ramdisk.gz
