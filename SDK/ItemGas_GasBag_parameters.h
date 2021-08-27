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

// Function ItemGas_GasBag.ItemGas_GasBag_C.UserConstructionScript
struct AItemGas_GasBag_C_UserConstructionScript_Params
{
};

// Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveBeginPlay
struct AItemGas_GasBag_C_ReceiveBeginPlay_Params
{
};

// Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveTick
struct AItemGas_GasBag_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveEndPlay
struct AItemGas_GasBag_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemGas_GasBag.ItemGas_GasBag_C.MULTI Play Damage Effects
struct AItemGas_GasBag_C_MULTI_Play_Damage_Effects_Params
{
};

// Function ItemGas_GasBag.ItemGas_GasBag_C.ExecuteUbergraph_ItemGas_GasBag
struct AItemGas_GasBag_C_ExecuteUbergraph_ItemGas_GasBag_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
