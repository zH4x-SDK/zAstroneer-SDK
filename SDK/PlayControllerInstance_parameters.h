#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PlayControllerInstance.PlayControllerInstance_C.ToggleCreativeModeDeformMenu
struct APlayControllerInstance_C_ToggleCreativeModeDeformMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.IsCreativeModeDeformMenuActive
struct APlayControllerInstance_C_IsCreativeModeDeformMenuActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.GetTerrainTool
struct APlayControllerInstance_C_GetTerrainTool_Params
{
	class ASmallDeform_C*                              SmallDeform;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.SetCreativeMenuEnabled
struct APlayControllerInstance_C_SetCreativeMenuEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.FadeInFadeScreen
struct APlayControllerInstance_C_FadeInFadeScreen_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.DestroyFadeScreen
struct APlayControllerInstance_C_DestroyFadeScreen_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.CreateFadeScreen
struct APlayControllerInstance_C_CreateFadeScreen_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.OnHideHelpMenu
struct APlayControllerInstance_C_OnHideHelpMenu_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.DoDropshipSpawn
struct APlayControllerInstance_C_DoDropshipSpawn_Params
{
	class USceneComponent*                             DropTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  StartTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               RelaunchOnExit;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPlanetSelection;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADropship_C*                                 SpawnedDropship;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.CLIENT Sound FX
struct APlayControllerInstance_C_CLIENT_Sound_FX_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.Set Hardware Cursor
struct APlayControllerInstance_C_Set_Hardware_Cursor_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.Set Cursor 
struct APlayControllerInstance_C_Set_Cursor__Params
{
	bool                                               show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.Set Audio Listener
struct APlayControllerInstance_C_Set_Audio_Listener_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.UserConstructionScript
struct APlayControllerInstance_C_UserConstructionScript_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Comma_K2Node_InputKeyEvent_5
struct APlayControllerInstance_C_InpActEvt_Comma_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Period_K2Node_InputKeyEvent_4
struct APlayControllerInstance_C_InpActEvt_Period_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Slash_K2Node_InputKeyEvent_3
struct APlayControllerInstance_C_InpActEvt_Slash_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_HelpMenu_K2Node_InputActionEvent_3
struct APlayControllerInstance_C_InpActEvt_HelpMenu_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_HelpMenuGamepad_K2Node_InputActionEvent_2
struct APlayControllerInstance_C_InpActEvt_HelpMenuGamepad_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_Shift_F12_K2Node_InputKeyEvent_2
struct APlayControllerInstance_C_InpActEvt_Shift_F12_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_TerrainTool_K2Node_InputActionEvent_1
struct APlayControllerInstance_C_InpActEvt_TerrainTool_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_1
struct APlayControllerInstance_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayControllerInstance.PlayControllerInstance_C.ReceiveTick
struct APlayControllerInstance_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.ReceiveBeginPlay
struct APlayControllerInstance_C_ReceiveBeginPlay_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.SERVER Tertiary Use
struct APlayControllerInstance_C_SERVER_Tertiary_Use_Params
{
	class UStorageChassisComponent*                    Chassis;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.MULTI Sound FX
struct APlayControllerInstance_C_MULTI_Sound_FX_Params
{
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             FX;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.SERVER_SetFreePower
struct APlayControllerInstance_C_SERVER_SetFreePower_Params
{
	bool                                               FreePower;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.SERVER_UnlockAllResearchDebug
struct APlayControllerInstance_C_SERVER_UnlockAllResearchDebug_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.PlayerDied
struct APlayControllerInstance_C_PlayerDied_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.PlayerRespawned
struct APlayControllerInstance_C_PlayerRespawned_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.CustomEvent_1
struct APlayControllerInstance_C_CustomEvent_1_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.OnDeformToolEquippedStateChanged_Event_1
struct APlayControllerInstance_C_OnDeformToolEquippedStateChanged_Event_1_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.HandleDeformToolMenuCloseRequested
struct APlayControllerInstance_C_HandleDeformToolMenuCloseRequested_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.HandleGameplayStarted
struct APlayControllerInstance_C_HandleGameplayStarted_Params
{
	bool                                               StartedInExistingSavedGame;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.OnAutoLaunchedCreativeTutorialClosed
struct APlayControllerInstance_C_OnAutoLaunchedCreativeTutorialClosed_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.OnCreativeModeEnabledChanged
struct APlayControllerInstance_C_OnCreativeModeEnabledChanged_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayControllerInstance.PlayControllerInstance_C.AutoShowCreativeModeTutorial
struct APlayControllerInstance_C_AutoShowCreativeModeTutorial_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.RestoreAudioListener
struct APlayControllerInstance_C_RestoreAudioListener_Params
{
};

// Function PlayControllerInstance.PlayControllerInstance_C.ExecuteUbergraph_PlayControllerInstance
struct APlayControllerInstance_C_ExecuteUbergraph_PlayControllerInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
