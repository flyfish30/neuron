/**
 * NEURON IIoT System for Industry 4.0
 * Copyright (C) 2020-2021 EMQ Technologies Co., Ltd All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 **/

#ifndef _NEU_JSON_API_PARSE_H
#define _NEU_JSON_API_PARSE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define NEU_PARSE_FUNCTION "function"
#define NEU_PARSE_UUID "uuid"
#define NEU_PARSE_ERROR "error"

enum neu_parse_function {
    NEU_PARSE_OP_READ   = 50,
    NEU_PARSE_OP_WRITE  = 51,
    NEU_PARSE_OP_LOGIN  = 10,
    NEU_PARSE_OP_LOGOUT = 11
};

int  neu_parse_decode(char *buf, void **result);
void neu_parse_decode_free(void *result);
int  neu_parse_encode(void *result, char **buf);

#ifdef __cplusplus
}
#endif

#endif