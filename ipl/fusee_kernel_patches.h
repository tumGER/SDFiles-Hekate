#ifndef FUSEE_KERNEL_PATCHES_H
#define FUSEE_KERNEL_PATCHES_H

#include "gfx.h"

void package2_patch_kernel(gfx_con_t* gfx_con, const char* pkg1_id, void *kernel, size_t kernel_size);

#endif