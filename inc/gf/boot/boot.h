﻿#ifndef GF_BOOT_BOOT_H
#define GF_BOOT_BOOT_H

#include "gf/boot/gameconfig.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"
#include "gf/util/externc.h"

GFEXTERNC_START

GFEXPORT gfInt gfBoot(
    const gfGameConfig *
);

GFEXTERNC_END

#endif  // GF_BOOT_BOOT_H
