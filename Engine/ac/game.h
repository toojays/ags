
//=============================================================================
//
//
//
//=============================================================================
#ifndef __AGS_EE_AC__GAME_H
#define __AGS_EE_AC__GAME_H

//=============================================================================
// Audio
//=============================================================================
#define VOL_CHANGEEXISTING   1678
#define VOL_SETFUTUREDEFAULT 1679
#define VOL_BOTH             1680

void Game_StopAudio(int audioType);
int  Game_IsAudioPlaying(int audioType);
void Game_SetAudioTypeSpeechVolumeDrop(int audioType, int volumeDrop);
void Game_SetAudioTypeVolume(int audioType, int volume, int changeType);

int Game_GetMODPattern();

//=============================================================================
// Dialogs
//=============================================================================
int Game_GetDialogCount();


#endif // __AGS_EE_AC__GAME_H