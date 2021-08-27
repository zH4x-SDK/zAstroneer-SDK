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

// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.UserConstructionScript
struct AAstro_Gates_GameMode_Instance_C_UserConstructionScript_Params
{
};

// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.ReceiveBeginPlay
struct AAstro_Gates_GameMode_Instance_C_ReceiveBeginPlay_Params
{
};

// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.OnLifecycleStateChange
struct AAstro_Gates_GameMode_Instance_C_OnLifecycleStateChange_Params
{
	EGameLifecycleState                                OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EGameLifecycleState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C.ExecuteUbergraph_Astro_Gates_GameMode_Instance
struct AAstro_Gates_GameMode_Instance_C_ExecuteUbergraph_Astro_Gates_GameMode_Instance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
