//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================

#ifndef __AC_COMPRESS_H
#define __AC_COMPRESS_H

#include "core/types.h"
#include "util/wgt2allg.h" // color (allegro RGB)

namespace AGS { namespace Common { class Stream; class Bitmap; } }
using namespace AGS; // FIXME later

void csavecompressed(Common::Stream *out, const unsigned char * tobesaved, const color pala[256]);
void cpackbitl(unsigned char *line, int size, Common::Stream *out);
void cpackbitl16(unsigned short *line, int size, Common::Stream *out);
void cpackbitl32(unsigned int *line, int size, Common::Stream *out);
int  cunpackbitl(unsigned char *line, int size, Common::Stream *in);
int  cunpackbitl16(unsigned short *line, int size, Common::Stream *in);
int  cunpackbitl32(unsigned int *line, int size, Common::Stream *in);

//=============================================================================

void save_lzw(Common::Stream *out, const Common::Bitmap *bmpp, const color *pall);
void load_lzw(Common::Stream *in, Common::Bitmap **bmm, int dst_bpp, color *pall);
void savecompressed_allegro(Common::Stream *out, const Common::Bitmap *bmpp, const color *pall);
void loadcompressed_allegro(Common::Stream *in, Common::Bitmap **bimpp, color *pall);

#endif // __AC_COMPRESS_H
