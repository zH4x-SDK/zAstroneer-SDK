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

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnGameplayStarted
struct AExoSatalliteIntro_C_OnGameplayStarted_Params
{
	bool                                               StartedInSavedGame;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.StartNewGame
struct AExoSatalliteIntro_C_StartNewGame_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetTitleMenuCustomizationState
struct AExoSatalliteIntro_C_SetTitleMenuCustomizationState_Params
{
	ETitleMenuCustomizationPreviewState                NewCustomizationState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetLandingLocations
struct AExoSatalliteIntro_C_SetLandingLocations_Params
{
	class ALanding_Locations_C*                        LandingLocations;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.PrepareStartingLocation
struct AExoSatalliteIntro_C_PrepareStartingLocation_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.SetupStartingLocation
struct AExoSatalliteIntro_C_SetupStartingLocation_Params
{
	class ALanding_Locations_C*                        Starting_Location;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.GetClientInitialSpawnLocation
struct AExoSatalliteIntro_C_GetClientInitialSpawnLocation_Params
{
	class APlayController*                             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LocationComponent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnClientLaunch
struct AExoSatalliteIntro_C_OnClientLaunch_Params
{
	class APlayController*                             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnLocalPlayerLaunch
struct AExoSatalliteIntro_C_OnLocalPlayerLaunch_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.PlayTutorialIntroCinematic
struct AExoSatalliteIntro_C_PlayTutorialIntroCinematic_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.LaunchDropship
struct AExoSatalliteIntro_C_LaunchDropship_Params
{
	class APlayController*                             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Drop_Target;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RelaunchOnExit;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.UserConstructionScript
struct AExoSatalliteIntro_C_UserConstructionScript_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ReceiveBeginPlay
struct AExoSatalliteIntro_C_ReceiveBeginPlay_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnNewGameSetupComplete
struct AExoSatalliteIntro_C_OnNewGameSetupComplete_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnTutorialIntroCinematicComplete
struct AExoSatalliteIntro_C_OnTutorialIntroCinematicComplete_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnTutorialStart
struct AExoSatalliteIntro_C_OnTutorialStart_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnClientSelected
struct AExoSatalliteIntro_C_OnClientSelected_Params
{
	class APlayController*                             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationCanceled
struct AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationCanceled_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationStarted
struct AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationStarted_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ApplyTargetMenuCustomizationState
struct AExoSatalliteIntro_C_ApplyTargetMenuCustomizationState_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.AnimateCharacterPreviewLight
struct AExoSatalliteIntro_C_AnimateCharacterPreviewLight_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationFinalizationCanceled
struct AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationFinalizationCanceled_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.HandleTitleScreenCharacterCustomizationFinalizationStarted
struct AExoSatalliteIntro_C_HandleTitleScreenCharacterCustomizationFinalizationStarted_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ReceiveDestroyed
struct AExoSatalliteIntro_C_ReceiveDestroyed_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.OnRealDropshipSpawned
struct AExoSatalliteIntro_C_OnRealDropshipSpawned_Params
{
};

// Function ExoSatalliteIntro.ExoSatalliteIntro_C.ExecuteUbergraph_ExoSatalliteIntro
struct AExoSatalliteIntro_C_ExecuteUbergraph_ExoSatalliteIntro_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
