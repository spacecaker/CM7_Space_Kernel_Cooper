cmd_arch/arm/mach-msm/idle-v6.o := ../../CodeSourcery/CodeSourcery/bin/arm-none-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.idle-v6.o.d  -nostdinc -isystem /home/robin/CodeSourcery/CodeSourcery/bin/../lib/gcc/arm-none-eabi/4.6.1/include -I/home/robin/Kernel/kernel/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -include asm/unified.h -mfpu=vfp -mtune=arm1136jf-s       -c -o arch/arm/mach-msm/idle-v6.o arch/arm/mach-msm/idle-v6.S

deps_arch/arm/mach-msm/idle-v6.o := \
  arch/arm/mach-msm/idle-v6.S \
    $(wildcard include/config/arch/msm7x27.h) \
    $(wildcard include/config/oprofile.h) \
  /home/robin/Kernel/kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/robin/Kernel/kernel/arch/arm/include/asm/linkage.h \
  /home/robin/Kernel/kernel/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
  /home/robin/Kernel/kernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/robin/Kernel/kernel/arch/arm/include/asm/hwcap.h \

arch/arm/mach-msm/idle-v6.o: $(deps_arch/arm/mach-msm/idle-v6.o)

$(deps_arch/arm/mach-msm/idle-v6.o):
