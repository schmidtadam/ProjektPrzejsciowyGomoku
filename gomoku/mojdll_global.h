#ifndef MOJDLL_GLOBAL_H
#define MOJDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MOJDLL_LIBRARY)
#  define MOJDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MOJDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MOJDLL_GLOBAL_H
