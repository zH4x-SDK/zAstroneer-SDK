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

// Function MusicActor.MusicActor_C.UserConstructionScript
struct AMusicActor_C_UserConstructionScript_Params
{
};

// Function MusicActor.MusicActor_C.ReceiveBeginPlay
struct AMusicActor_C_ReceiveBeginPlay_Params
{
};

// Function MusicActor.MusicActor_C.ReceiveTick
struct AMusicActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MusicActor.MusicActor_C.ExecuteUbergraph_MusicActor
struct AMusicActor_C_ExecuteUbergraph_MusicActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
