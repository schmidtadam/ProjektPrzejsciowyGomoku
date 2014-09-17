#ifndef MOJDLL3_GLOBAL_H
#define MOJDLL3_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MOJDLL3_LIBRARY)
#  define MOJDLL3SHARED_EXPORT Q_DECL_EXPORT
#else
#  define MOJDLL3SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif
