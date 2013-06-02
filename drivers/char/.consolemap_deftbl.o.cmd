cmd_drivers/char/consolemap_deftbl.o := ../../CodeSourcery/CodeSourcery/bin/arm-none-eabi-gcc -Wp,-MD,drivers/char/.consolemap_deftbl.o.d  -nostdinc -isystem /home/robin/CodeSourcery/CodeSourcery/bin/../lib/gcc/arm-none-eabi/4.6.1/include -I/home/robin/Kernel/kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Wno-format-security -fno-delete-null-pointer-checks -O3 -marm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -mfpu=vfp -mtune=arm1136jf-s -Uarm -Wframe-larger-than=2048 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(consolemap_deftbl)"  -D"KBUILD_MODNAME=KBUILD_STR(consolemap_deftbl)" -D"DEBUG_HASH=50" -D"DEBUG_HASH2=31" -c -o drivers/char/consolemap_deftbl.o drivers/char/consolemap_deftbl.c

deps_drivers/char/consolemap_deftbl.o := \
  drivers/char/consolemap_deftbl.c \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/robin/Kernel/kernel/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/robin/Kernel/kernel/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/robin/Kernel/kernel/arch/arm/include/asm/posix_types.h \

drivers/char/consolemap_deftbl.o: $(deps_drivers/char/consolemap_deftbl.o)

$(deps_drivers/char/consolemap_deftbl.o):
