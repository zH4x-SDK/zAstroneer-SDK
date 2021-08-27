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

// Function Staging_T2.Staging_T2_C.SetupOutroCinematicBindings
struct AStaging_T2_C_SetupOutroCinematicBindings_Params
{
	class ALevelSequenceActor*                         SequenceActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Staging_T2.Staging_T2_C.DisplayWatermark
struct AStaging_T2_C_DisplayWatermark_Params
{
	class UClass*                                      DisplayWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDisplay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Staging_T2.Staging_T2_C.Raycast Drill Location
struct AStaging_T2_C_Raycast_Drill_Location_Params
{
};

// Function Staging_T2.Staging_T2_C.Set Character Start
struct AStaging_T2_C_Set_Character_Start_Params
{
	class APlayerController*                           Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Staging_T2.Staging_T2_C.Raycast Rover Location
struct AStaging_T2_C_Raycast_Rover_Location_Params
{
};

// Function Staging_T2.Staging_T2_C.Raycast Shuttle Location
struct AStaging_T2_C_Raycast_Shuttle_Location_Params
{
};

// Function Staging_T2.Staging_T2_C.InpActEvt_Alt_Zero_K2Node_InputKeyEvent_1
struct AStaging_T2_C_InpActEvt_Alt_Zero_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Staging_T2.Staging_T2_C.ReceiveBeginPlay
struct AStaging_T2_C_ReceiveBeginPlay_Params
{
};

// Function Staging_T2.Staging_T2_C.OnPlayerJoin_Event_1
struct AStaging_T2_C_OnPlayerJoin_Event_1_Params
{
	class APlayerController*                           NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Staging_T2.Staging_T2_C.IntroMaster_ResetPlanets
struct AStaging_T2_C_IntroMaster_ResetPlanets_Params
{
};

// Function Staging_T2.Staging_T2_C.PlayGateMovie
struct AStaging_T2_C_PlayGateMovie_Params
{
};

// Function Staging_T2.Staging_T2_C.PlayAnomolyMovie
struct AStaging_T2_C_PlayAnomolyMovie_Params
{
};

// Function Staging_T2.Staging_T2_C.PlayComputerMovie
struct AStaging_T2_C_PlayComputerMovie_Params
{
};

// Function Staging_T2.Staging_T2_C.Tutorial_PlaySFX
struct AStaging_T2_C_Tutorial_PlaySFX_Params
{
};

// Function Staging_T2.Staging_T2_C.ExecuteUbergraph_Staging_T2
struct AStaging_T2_C_ExecuteUbergraph_Staging_T2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
