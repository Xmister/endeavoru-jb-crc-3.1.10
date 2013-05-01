/*
 * arch/arm/mach-tegra/tegra_pmqos.h
 *
 * Copyright (C) 2012 Paul Reioux (aka Faux123)
 *
 * Author:
 *	faux123 <reioux@gmail.com>
 *
 * History:
 *      -original version (Paul Reioux)
 *      -cleaned since oc was reworked (Dennis Rassmann)
 *      -added comment for T3_VARIANT_BOOST (Dennis Rassmann)
 *      -adapted for grouper (Dennis Rassmann)
 *      -removed distinction between 0boost and xboost
 *      -minimized version
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

extern unsigned int tegra_pmqos_cpu_freq_limits[];
extern unsigned int tegra_pmqos_cpu_freq_limits_min[];
extern unsigned int tegra_cpu_freq_max(unsigned int cpu);
extern unsigned int tegra_get_suspend_boost_freq(void);
extern unsigned int tegra_lpmode_freq_max(void);
extern void tegra_lpmode_freq_max_changed(void);

/* in kHz */
#define T3_CPU_FREQ_MAX_0		1300000
#define T3_CPU_FREQ_MAX			1300000
#define T3_CPU_FREQ_MAX_OC		1500000
/* any caps will be respected */
#define T3_CPU_FREQ_BOOST		1300000
#define T3_CPU_MIN_FREQ     	51000
#define T3_SUSPEND_FREQ     	475000
#define T3_GMODE_MIN_FREQ     	340000

/* Voltages */
#define VDD_CPU_MIN				700
#define VDD_CPU_MAX				1250
#define VDD_CORE_MIN			950
#define VDD_CORE_MAX			1350

// used for governors ideal or idle freq
#define GOV_IDLE_FREQ     		T3_SUSPEND_FREQ

// sysfs to change available
#define SUSPEND_CPU_NUM_MAX		2

// drivers/usb/gadget/f_mtp.c
#define MTP_CPU_FREQ_MIN 1150000
#define MTP_ONLINE_CPUS_MIN 2

// sound/soc/codecs/tlv320aic3008.c - sysfs to change available
#define AUD_CPU_FREQ_MIN 102000

// drivers/usb/gadget/android.c
#define USB_TP_CPU_FREQ_MIN T3_SUSPEND_FREQ

// drivers/usb/gadget/tegra_udc.c
#define TEGRA_GADGET_CPU_FREQ_MIN T3_SUSPEND_FREQ

// drivers/tty/serial/tegra_hsuart.c - not automatic must be enabled via sysfs
#define TI_A2DP_CPU_FREQ_MIN 102000

// tegra_hsuart_brcm.c - not automatic must be enabled via sysfs
// sysfs to change available
// We don't need this on endeavor
#define A2DP_CPU_FREQ_MIN 204000
#define OPP_CPU_FREQ_MIN 475000

// wl_android.c
// We don't need this on endeavor
#define WIFI_CPU_FREQ_MIN 1150000
#define WIFI_ONLINE_CPUS_MIN 2

// drivers/net/usb/usbnet.c
#define USBNET_CPU_FREQ_MIN T3_SUSPEND_FREQ
#define USBNET_ONLINE_CPUS_MIN 2

