/*
 * Configuration for Xilinx ZynqMP emulation platforms
 *
 * (C) Copyright 2014 - 2015 Xilinx, Inc.
 * Michal Simek <michal.simek@xilinx.com>
 * Siva Durga Prasad Paladugu <sivadur@xilinx.com>
 *
 * Based on Configuration for Versatile Express
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQMP_EP_H
#define __CONFIG_ZYNQMP_EP_H

#define CONFIG_ZYNQ_SDHCI_MAX_FREQ	1000000 //52000000

// sondc1 edited here

#define CONFIG_ZYNQ_SDHCI_MIN_FREQ	(CONFIG_ZYNQ_SDHCI_MAX_FREQ >> 9)
#define CONFIG_ZYNQ_EEPROM

#define COUNTER_FREQUENCY	4000000

#include <configs/xilinx_zynqmp.h>

#endif /* __CONFIG_ZYNQMP_EP_H */
