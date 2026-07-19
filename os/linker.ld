OUTPUT_FORMAT("pe-i386")

SECTIONS
{
    /* Tell the BIOS to boot us at 0x7C00 */
    . = 0x7C00;

    .text : {
        boot.o(.text)   /* Put assembly entry block first */
        *(.text)
    }

    /* Merge all read-only data, constants, and basic data into one flat block */
    .data : { 
        *(.data) 
        *(.rodata)
        *(.rdata)       /* Explicitly catch Windows read-only data here */
    }

    .bss : { *(.bss) }

    /* Force the magic 512-byte boot signature layout */
    . = 0x7C00 + 510;
    .sig : {
        SHORT(0xAA55);
    }

    /* CRITICAL: Tell Windows to throw away its PE garbage sections */
    /DISCARD/ : {
        *(.reloc)
        *(.note*)
        *(.comment)
    }
}
