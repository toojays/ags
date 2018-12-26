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

#include "ac/global_viewport.h"
#include "ac/draw.h"
#include "debug/debug_log.h"

void SetViewport(int offsx, int offsy) {
    offsx = multiply_up_coordinate(offsx);
    offsy = multiply_up_coordinate(offsy);
    play.LockRoomCameraAt(offsx, offsy);
}
void ReleaseViewport() {
    play.ReleaseRoomCamera();
}
int GetViewportX () {
    return divide_down_coordinate(play.GetRoomCamera().Left);
}
int GetViewportY () {
    return divide_down_coordinate(play.GetRoomCamera().Top);
}
