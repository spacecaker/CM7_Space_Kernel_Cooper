cmd_arch/arm/boot/compressed/ashldi3.o := /home/robin/toolchain/bin/arm-none-eabi-gcc -Wp,-MD,arch/arm/boot/compressed/.ashldi3.o.d  -nostdinc -isystem /home/robin/toolchain/bin/../lib/gcc/arm-none-eabi/4.6.1/include -I/home/robin/android/kernel_compiling/kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -include asm/unified.h -mfpu=vfp -mtune=arm1136jf-s     -Wa,-march=all   -c -o arch/arm/boot/compressed/ashldi3.o arch/arm/boot/compressed/ashldi3.S

deps_arch/arm/boot/compressed/ashldi3.o := \
  arch/arm/boot/compressed/ashldi3.S \
  /home/robin/android/kernel_compiling/kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/robin/android/kernel_compiling/kernel/arch/arm/include/asm/linkage.h \

arch/arm/boot/compressed/ashldi3.o: $(deps_arch/arm/boot/compressed/ashldi3.o)

$(deps_arch/arm/boot/compressed/ashldi3.o):
