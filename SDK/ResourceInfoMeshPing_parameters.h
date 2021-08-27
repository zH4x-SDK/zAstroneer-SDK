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

// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.Ping
struct AResourceInfoMeshPing_C_Ping_Params
{
};

// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.UserConstructionScript
struct AResourceInfoMeshPing_C_UserConstructionScript_Params
{
};

// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ReceiveBeginPlay
struct AResourceInfoMeshPing_C_ReceiveBeginPlay_Params
{
};

// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ReceiveTick
struct AResourceInfoMeshPing_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceInfoMeshPing.ResourceInfoMeshPing_C.ExecuteUbergraph_ResourceInfoMeshPing
struct AResourceInfoMeshPing_C_ExecuteUbergraph_ResourceInfoMeshPing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
