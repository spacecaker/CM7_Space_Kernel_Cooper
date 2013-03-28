#!/bin/bash

# Ketut P. Kumajaya ketut.kumajaya @ forum.xda-developers.com, Jan 1 2011

chmod -R +x tools
mkdir -p unpack
rm -rf unpack/*
tools/unpackbootimg -i $1 -o unpack
mkdir -p unpack/$1-ramdisk
cd unpack/$1-ramdisk
gzip -dc ../$1-ramdisk.gz | cpio -i
cd ../../
rm unpack/$1-ramdisk.gz
