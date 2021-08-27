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

// Function ResearchStation_Large.ResearchStation_Large_C.UpgradeToNewResearchModule
struct AResearchStation_Large_C_UpgradeToNewResearchModule_Params
{
};

// Function ResearchStation_Large.ResearchStation_Large_C.GetBodySlotLegacy
struct AResearchStation_Large_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResearchStation_Large.ResearchStation_Large_C.UserConstructionScript
struct AResearchStation_Large_C_UserConstructionScript_Params
{
};

// Function ResearchStation_Large.ResearchStation_Large_C.ReceiveBeginPlay
struct AResearchStation_Large_C_ReceiveBeginPlay_Params
{
};

// Function ResearchStation_Large.ResearchStation_Large_C.ReceiveEndPlay
struct AResearchStation_Large_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResearchStation_Large.ResearchStation_Large_C.ExecuteUbergraph_ResearchStation_Large
struct AResearchStation_Large_C_ExecuteUbergraph_ResearchStation_Large_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
