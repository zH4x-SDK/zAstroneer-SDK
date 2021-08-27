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

// Function PowerBar_Tiered.PowerBar_Tiered_C.Reset Meshes
struct APowerBar_Tiered_C_Reset_Meshes_Params
{
};

// Function PowerBar_Tiered.PowerBar_Tiered_C.Set Ticks
struct APowerBar_Tiered_C_Set_Ticks_Params
{
	int                                                Ticks;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerBar_Tiered.PowerBar_Tiered_C.UserConstructionScript
struct APowerBar_Tiered_C_UserConstructionScript_Params
{
};

// Function PowerBar_Tiered.PowerBar_Tiered_C.ReceiveBeginPlay
struct APowerBar_Tiered_C_ReceiveBeginPlay_Params
{
};

// Function PowerBar_Tiered.PowerBar_Tiered_C.Set View
struct APowerBar_Tiered_C_Set_View_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerBar_Tiered.PowerBar_Tiered_C.ExecuteUbergraph_PowerBar_Tiered
struct APowerBar_Tiered_C_ExecuteUbergraph_PowerBar_Tiered_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
