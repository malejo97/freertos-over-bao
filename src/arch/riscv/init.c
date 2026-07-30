#include <irq.h>

void arch_init(){
    irqc_init();

    unsigned long hart_id = get_cpuid();
    if (hart_id == boot_hart) {
        imsic_target_valid |= (1UL << hart_id);
    }
}
