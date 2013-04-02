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

/* in kHz */
#define BOOST_CPU_FREQ_MIN	1300000
#define CAP_CPU_FREQ_MAX	475000
#define SUSPEND_CPU_FREQ_MAX	CAP_CPU_FREQ_MAX
#define SUSPEND_CPU_NUM_MAX	2
#define CPU_FREQ_BOOST		BOOST_CPU_FREQ_MIN
#define CPU_FREQ_MAX		BOOST_CPU_FREQ_MIN
#define CPU_FREQ_MAX_0		BOOST_CPU_FREQ_MIN
#define T3_LP_MAX_FREQ		CAP_CPU_FREQ_MAX
#define T3_CPU_MIN_FREQ     	51000

#define MIN_CPU_MV 725
#define MAX_CPU_MV 1300
#define MIN_CORE_MV 900
#define MAX_CORE_MV 1400

extern unsigned int tegra_pmqos_boost_freq;
extern unsigned int tegra_pmqos_cap_freq;
extern unsigned int tegra_pmqos_cpu_freq_limits[];
extern unsigned int miss_freq_set;
extern unsigned int tegra_cpu_freq_max(unsigned int cpu);
extern unsigned int tegra_get_suspend_boost_freq(void);
