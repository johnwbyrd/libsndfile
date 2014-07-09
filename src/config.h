/* config.h stub */

#define OS_IS_WIN32 1
#define CPU_IS_BIG_ENDIAN 1
#define CPU_IS_LITTLE_ENDIAN 0
#define inline __inline
#define PACKAGE "libsndfile"
#define PACKAGE_NAME "libsndfile"
#define PACKAGE_VERSION "0"
#define VERSION "0"
#define CPU_CLIPS_POSITIVE 0
#define CPU_CLIPS_NEGATIVE 0
#define __func__ __FUNCTION__
#define snprintf _snprintf
#define M_PI 3.1415926535f
#define USE_WINDOWS_API 1
#define HAVE_DECL_S_IRGRP 1
#define ssize_t int
#define SIZEOF_SF_COUNT_T 4
/* Values for the second argument to access.
These may be OR'd together.  */
#define R_OK    4       /* Test for read permission.  */
#define W_OK    2       /* Test for write permission.  */
#define X_OK    2       /* execute permission - unsupported in windows*/
#define F_OK    0       /* Test for existence.  */
#define access _access
#include <io.h>
#define HAVE_GMTIME 1
