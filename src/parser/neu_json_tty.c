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

/*
 * DO NOT EDIT THIS FILE MANUALLY!
 * It was automatically generated by `json-autotype`.
 */

#include <stdlib.h>
#include <string.h>

#include "json/json.h"

#include "json/neu_json_tty.h"

int neu_json_encode_get_tty_resp(void *json_object, void *param)
{
    int                      ret  = 0;
    neu_json_get_tty_resp_t *resp = (neu_json_get_tty_resp_t *) param;

    void *                       tty_array = neu_json_array();
    neu_json_get_tty_resp_tty_t *p_tty     = resp->ttys;
    for (int i = 0; i < resp->n_tty; i++) {
        neu_json_elem_t tty_elems[] = { {
            .name      = NULL,
            .t         = NEU_JSON_STR,
            .v.val_str = *p_tty,
        } };
        tty_array = neu_json_encode_array_value(tty_array, tty_elems,
                                                NEU_JSON_ELEM_SIZE(tty_elems));
        p_tty++;
    }

    neu_json_elem_t resp_elems[] = { {
        .name         = "ttys",
        .t            = NEU_JSON_OBJECT,
        .v.val_object = tty_array,
    } };
    ret = neu_json_encode_field(json_object, resp_elems,
                                NEU_JSON_ELEM_SIZE(resp_elems));

    return ret;
}
