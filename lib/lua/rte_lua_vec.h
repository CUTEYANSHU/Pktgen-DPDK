/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2018 Intel Corporation.
 */
/* Created by Keith Wiles @ intel.com */

#ifndef _RTE_LUA_VEC_H_
#define _RTE_LUAVEC_H_

#include <stdint.h>
#include <netinet/in.h>

#include <rte_log.h>

#define lua_c
#include <lua.h>
#include <lauxlib.h>

#include <rte_lua.h>
#include <rte_lua_stdio.h>
#include <rte_lua_utils.h>

#ifdef __cplusplus
extern "C" {
#endif

#define LUA_VEC_LIBNAME         "vec"

int luaopen_vec(lua_State *L);

#ifdef __cplusplus
}
#endif

#endif /* _RTE_LUA_VEC_H_ */