/*
 * WayOS IVM-60 RT3883 + RTL8367RB
 * U-Boot 3.5.2.0 | NOR 8MB
 */
#ifndef __BOARD_H__
#define __BOARD_H__

#define RT3883

#define BOARD_NAME          "IVM60"
#define BOARD_VENDOR        "WayOS"
#define BOARD_MODEL         "IVM60"

#define FLASH_SIZE          8
#define FLASH_BLOCK_SIZE    65536

/*
 * 8M NOR 分区布局（适配你当前U-Boot）
 * uboot:     0x000000 ~ 0x030000 (192KB)
 * uboot-env: 0x030000 ~ 0x040000 (64KB)
 * kernel:    0x040000 ~ 0x240000 (2MB)
 * rootfs:    0x240000 ~ 0x7F0000 (5.75MB)
 * art:       0x7F0000 ~ 0x800000 (64KB)
 */
#define BOOT_PART_OFFSET    0x000000
#define BOOT_PART_SIZE      0x030000

#define ENV_PART_OFFSET     0x030000
#define ENV_PART_SIZE       0x010000

#define KERNEL_PART_OFFSET  0x040000
#define KERNEL_PART_SIZE    0x200000

#define ROOTFS_PART_OFFSET  0x240000
#define ROOTFS_PART_SIZE    0x5B0000

#define ART_PART_OFFSET     0x7F0000
#define ART_PART_SIZE       0x010000

#define MAX_INLINE_PART     4

/* 硬件GPIO定义，和U-Boot打印完全匹配 */
#define RTL8367_RESET_GPIO  24
#define SMI_MDIO_GPIO       20
#define SMI_MDC_GPIO        21

/* 网口映射 RTL8367RB */
#define PORT_WAN            4
#define PORT_LAN1           0
#define PORT_LAN2           1
#define PORT_LAN3           2
#define PORT_LAN4           3

/* 无WiFi，关闭无线 */
#undef HAVE_RF
#undef HAVE_WIFI

#endif
