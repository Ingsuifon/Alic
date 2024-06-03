//
// Created by Borelset on 2023/6/29.
//

#ifndef SIMBASEDREORDER_VARINT_H
#define SIMBASEDREORDER_VARINT_H

// Copyright 2020 Joshua J Baker. All rights reserved.

#ifndef VARINT_H
#define VARINT_H

#include <stdint.h>
#include <stddef.h>

int varint_read_u(const void *data, size_t len, uint64_t *x);
int varint_read_i(const void *data, size_t len, int64_t *x);

int varint_write_u(void *data, uint64_t x);
int varint_write_i(void *data, int64_t x);

#endif

#endif //SIMBASEDREORDER_VARINT_H
