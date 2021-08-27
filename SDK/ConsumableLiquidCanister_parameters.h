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

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UpdateCanisterVisuals_Internal
struct AConsumableLiquidCanister_C_UpdateCanisterVisuals_Internal_Params
{
};

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UserConstructionScript
struct AConsumableLiquidCanister_C_UserConstructionScript_Params
{
};

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.UpdateCanisterVisuals
struct AConsumableLiquidCanister_C_UpdateCanisterVisuals_Params
{
};

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.ReceiveHit
struct AConsumableLiquidCanister_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.DroppedInWorld
struct AConsumableLiquidCanister_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.PickedUpFromWorld
struct AConsumableLiquidCanister_C_PickedUpFromWorld_Params
{
};

// Function ConsumableLiquidCanister.ConsumableLiquidCanister_C.ExecuteUbergraph_ConsumableLiquidCanister
struct AConsumableLiquidCanister_C_ExecuteUbergraph_ConsumableLiquidCanister_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
