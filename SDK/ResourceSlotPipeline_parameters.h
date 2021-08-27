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

// Function ResourceSlotPipeline.ResourceSlotPipeline_C.AcceptsItem
struct AResourceSlotPipeline_C_AcceptsItem_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResourceSlotPipeline.ResourceSlotPipeline_C.UserConstructionScript
struct AResourceSlotPipeline_C_UserConstructionScript_Params
{
};

// Function ResourceSlotPipeline.ResourceSlotPipeline_C.OnConnectionBuilt
struct AResourceSlotPipeline_C_OnConnectionBuilt_Params
{
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceSlotPipeline.ResourceSlotPipeline_C.OnConnectionDestroyed
struct AResourceSlotPipeline_C_OnConnectionDestroyed_Params
{
	class UChildSlotComponent*                         Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceSlotPipeline.ResourceSlotPipeline_C.ExecuteUbergraph_ResourceSlotPipeline
struct AResourceSlotPipeline_C_ExecuteUbergraph_ResourceSlotPipeline_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
