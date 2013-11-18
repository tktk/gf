﻿#ifndef GF_STRING_UTF8_H
#define GF_STRING_UTF8_H

typedef struct GfUtf8 GfUtf8;

#include "gf/string/string.h"
#include "gf/string/utf16.h"
#include "gf/string/utf32.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXPORT GfUtf8 * gfUtf8New(
);

GFEXPORT GfUtf8 * gfUtf8Clone(
    const GfUtf8 *
);

GFEXPORT GfUtf8 * gfUtf8NewFromCharPtr(
    const GfUtf8Char *
);

GFEXPORT GfUtf8 * gfUtf8NewFromCharPtrWithLength(
    const GfUtf8Char *
    , GfSize
);

GFEXPORT GfUtf8 * gfUtf8NewFromString(
    const GfString *
);

GFEXPORT GfUtf8 * gfUtf8NewFromStringCharPtr(
    const GfStringChar *
);

GFEXPORT GfUtf8 * gfUtf8NewFromStringCharPtrWithLength(
    const GfStringChar *
    , GfSize
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf16(
    const GfUtf16 *
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf16CharPtr(
    const GfUtf16Char *
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf16CharPtrWithLength(
    const GfUtf16Char *
    , GfSize
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf32(
    const GfUtf32 *
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf32CharPtr(
    const GfUtf32Char *
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf32CharPtrWithLength(
    const GfUtf32Char *
    , GfSize
);

GFEXPORT void gfUtf8Free(
    GfUtf8 *
);

GFEXPORT const GfUtf8Char * gfUtf8GetPtr(
    const GfUtf8 *
);

GFEXPORT GfSize gfUtf8GetLength(
    const GfUtf8 *
);

GFEXPORT GfBool gfUtf8Assign(
    GfUtf8 *
    , const GfUtf8 *
);

GFEXPORT GfBool gfUtf8AssignFromCharPtr(
    GfUtf8 *
    , const GfUtf8Char *
);

GFEXPORT GfBool gfUtf8AssignFromCharPtrWithLength(
    GfUtf8 *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfUtf8AssignFromString(
    GfUtf8 *
    , const GfString *
);

GFEXPORT GfBool gfUtf8AssignFromStringCharPtr(
    GfUtf8 *
    , const GfStringChar *
);

GFEXPORT GfBool gfUtf8AssignFromStringCharPtrWithLength(
    GfUtf8 *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf8AssignFromUtf16(
    GfUtf8 *
    , const GfUtf16 *
);

GFEXPORT GfBool gfUtf8AssignFromUtf16CharPtr(
    GfUtf8 *
    , const GfUtf16Char *
);

GFEXPORT GfBool gfUtf8AssignFromUtf16CharPtrWithLength(
    GfUtf8 *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfBool gfUtf8AssignFromUtf32(
    GfUtf8 *
    , const GfUtf32 *
);

GFEXPORT GfBool gfUtf8AssignFromUtf32CharPtr(
    GfUtf8 *
    , const GfUtf32Char *
);

GFEXPORT GfBool gfUtf8AssignFromUtf32CharPtrWithLength(
    GfUtf8 *
    , const GfUtf32Char *
    , GfSize
);

#endif  // GF_STRING_UTF8_H
