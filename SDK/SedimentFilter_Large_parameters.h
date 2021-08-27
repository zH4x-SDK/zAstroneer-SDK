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

// Function SedimentFilter_Large.SedimentFilter_Large_C.UpgradeModule
struct ASedimentFilter_Large_C_UpgradeModule_Params
{
};

// Function SedimentFilter_Large.SedimentFilter_Large_C.GetBodySlotLegacy
struct ASedimentFilter_Large_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SedimentFilter_Large.SedimentFilter_Large_C.UserConstructionScript
struct ASedimentFilter_Large_C_UserConstructionScript_Params
{
};

// Function SedimentFilter_Large.SedimentFilter_Large_C.ReceiveBeginPlay
struct ASedimentFilter_Large_C_ReceiveBeginPlay_Params
{
};

// Function SedimentFilter_Large.SedimentFilter_Large_C.ReceiveEndPlay
struct ASedimentFilter_Large_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SedimentFilter_Large.SedimentFilter_Large_C.ExecuteUbergraph_SedimentFilter_Large
struct ASedimentFilter_Large_C_ExecuteUbergraph_SedimentFilter_Large_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
