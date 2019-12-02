#ifndef _RISCV_MACHINE_TYPES_H
#define _RISCV_MACHINE_TYPES_H

#include <machine/_default_types.h>

#define __machine_dev_t_defined
typedef unsigned long long __dev_t;

#define __machine_uid_t_defined
typedef unsigned int __uid_t;

#define __machine_gid_t_defined
typedef unsigned int __gid_t;
#define __machine_off_t_defined
typedef long long _off_t;

#define __machine_fpos_t_defined
typedef unsigned long long _fpos_t;

#define __machine_time_t_defined
typedef unsigned long long time_t;

#define __machine_ino_t_defined
typedef unsigned long long __ino_t;

#define __machine_nlink_t_defined
typedef unsigned int __nlink_t;

#define __machine_ssize_t_defined
typedef long signed int _ssize_t;

#endif
