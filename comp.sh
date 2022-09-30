riscv64-unknown-elf-gcc -g -mcmodel=medany -ffreestanding -O2 -Wl,--gc-sections \
    -nostartfiles -nostdlib -nodefaultlibs \
    -Wl,-T,riscv64-virt.ld crt0.s test.c
