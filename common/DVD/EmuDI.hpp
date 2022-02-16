// EmuDI.hpp - Shared types for the emulated DI RM
//   Written by Palapeli
//
// Copyright (C) 2022 Team Saoirse
// SPDX-License-Identifier: MIT

#pragma once

#include <System/Types.h>

namespace EmuDI
{

struct DVDPatch {
    u32 disc_offset;
    u32 disc_length;

    /* file info */
    u64 start_cluster;
    u64 cur_cluster;
    u32 file_offset;
    u32 drv;
};

} // namespace DIP