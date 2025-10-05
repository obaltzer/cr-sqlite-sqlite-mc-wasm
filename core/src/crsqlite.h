#ifndef CRSQLITE_H
#define CRSQLITE_H

#ifdef SQLITE3MC_AMALGAMATION
#include "sqlite3mc_amalgamation.h"
#else
#include "sqlite3ext.h"
#endif
SQLITE_EXTENSION_INIT3

#include <stdint.h>

#ifndef UNIT_TEST
#define STATIC static
#else
#define STATIC
#endif

#endif
