/* Copyright (c) 2010, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef _VIDEO_720P_RESOURCE_TRACKER_API_H_
#define _VIDEO_720P_RESOURCE_TRACKER_API_H_

#include "vcd_core.h"

struct res_trk_firmware_addr {
	u8 *base_addr;
	phys_addr_t device_addr;
	u32 buf_size;
};
void res_trk_init(struct device *device, u32 irq);
u32 res_trk_power_up(void);
u32 res_trk_power_down(void);
u32 res_trk_enable_clocks(void);
u32 res_trk_disable_clocks(void);
u32 res_trk_get_max_perf_level(u32 *pn_max_perf_lvl);
u32 res_trk_set_perf_level(u32 req_perf_lvl, u32 *pn_set_perf_lvl,
	struct vcd_dev_ctxt *dev_ctxt);
u32 res_trk_get_curr_perf_level(u32 *pn_perf_lvl);
u32 res_trk_download_firmware(void);
u32 res_trk_get_core_type(void);
u32 res_trk_get_firmware_addr(struct res_trk_firmware_addr *firm_addr);

#endif
