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

// Function Storage_Tall_T3_T2x8_BP.Storage_Tall_T3_T2x8_BP_C.GetBodySlotLegacy
struct AStorage_Tall_T3_T2x8_BP_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Storage_Tall_T3_T2x8_BP.Storage_Tall_T3_T2x8_BP_C.UserConstructionScript
struct AStorage_Tall_T3_T2x8_BP_C_UserConstructionScript_Params
{
};

// Function Storage_Tall_T3_T2x8_BP.Storage_Tall_T3_T2x8_BP_C.ReceiveHit
struct AStorage_Tall_T3_T2x8_BP_C_ReceiveHit_Params
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

// Function Storage_Tall_T3_T2x8_BP.Storage_Tall_T3_T2x8_BP_C.PickedUpFromWorld
struct AStorage_Tall_T3_T2x8_BP_C_PickedUpFromWorld_Params
{
};

// Function Storage_Tall_T3_T2x8_BP.Storage_Tall_T3_T2x8_BP_C.DroppedInWorld
struct AStorage_Tall_T3_T2x8_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Storage_Tall_T3_T2x8_BP.Storage_Tall_T3_T2x8_BP_C.ReceiveBeginPlay
struct AStorage_Tall_T3_T2x8_BP_C_ReceiveBeginPlay_Params
{
};

// Function Storage_Tall_T3_T2x8_BP.Storage_Tall_T3_T2x8_BP_C.ExecuteUbergraph_Storage_Tall_T3_T2x8_BP
struct AStorage_Tall_T3_T2x8_BP_C_ExecuteUbergraph_Storage_Tall_T3_T2x8_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
