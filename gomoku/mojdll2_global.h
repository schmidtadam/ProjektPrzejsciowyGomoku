#ifndef MOJDLL2_GLOBAL_H
#define MOJDLL2_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MOJDLL2_LIBRARY)
#  define MOJDLL2SHARED_EXPORT Q_DECL_EXPORT
#else
#  define MOJDLL2SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MOJDLL2_GLOBAL_H
