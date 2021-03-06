/*
 * Copyright (c) 1996, 2003 VIA Networking Technologies, Inc.
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *
 * File: wpa2.h
 *
 * Purpose: Defines the macros, types, and functions for dealing
 *          with WPA2 informations.
 *
 * Author: Yiching Chen
 *
 * Date: Oct. 4, 2004
 *
 */

#ifndef __WPA2_H__
#define __WPA2_H__

#include "ttype.h"
#include "80211mgr.h"
#include "80211hdr.h"
#include "bssdb.h"

/*---------------------  Export Definitions -------------------------*/
#define MAX_PMKID_CACHE         16

typedef struct tagsPMKIDInfo {
    BYTE    abyBSSID[6];
    BYTE    abyPMKID[16];
} PMKIDInfo, *PPMKIDInfo;

typedef struct tagSPMKIDCache {
    ULONG       BSSIDInfoCount;
    PMKIDInfo   BSSIDInfo[MAX_PMKID_CACHE];
} SPMKIDCache, *PSPMKIDCache;


/*---------------------  Export Classes  ----------------------------*/

/*---------------------  Export Variables  --------------------------*/

/*---------------------  Export Types  ------------------------------*/

/*---------------------  Export Functions  --------------------------*/

VOID
WPA2_ClearRSN (
    IN PKnownBSS        pBSSNode
    );

VOID
WPA2vParseRSN (
    IN PKnownBSS        pBSSNode,
    IN PWLAN_IE_RSN     pRSN
    );

UINT
WPA2uSetIEs(
    IN PVOID pMgmtHandle,
    OUT PWLAN_IE_RSN pRSNIEs
    );

#endif // __WPA2_H__
