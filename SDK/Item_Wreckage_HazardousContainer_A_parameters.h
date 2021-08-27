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

// Function Item_Wreckage_HazardousContainer_A.Item_Wreckage_HazardousContainer_A_C.UserConstructionScript
struct AItem_Wreckage_HazardousContainer_A_C_UserConstructionScript_Params
{
};

// Function Item_Wreckage_HazardousContainer_A.Item_Wreckage_HazardousContainer_A_C.PickedUpFromWorld
struct AItem_Wreckage_HazardousContainer_A_C_PickedUpFromWorld_Params
{
};

// Function Item_Wreckage_HazardousContainer_A.Item_Wreckage_HazardousContainer_A_C.DroppedInWorld
struct AItem_Wreckage_HazardousContainer_A_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Item_Wreckage_HazardousContainer_A.Item_Wreckage_HazardousContainer_A_C.ReceiveHit
struct AItem_Wreckage_HazardousContainer_A_C_ReceiveHit_Params
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

// Function Item_Wreckage_HazardousContainer_A.Item_Wreckage_HazardousContainer_A_C.ReceiveBeginPlay
struct AItem_Wreckage_HazardousContainer_A_C_ReceiveBeginPlay_Params
{
};

// Function Item_Wreckage_HazardousContainer_A.Item_Wreckage_HazardousContainer_A_C.ReceiveEndPlay
struct AItem_Wreckage_HazardousContainer_A_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_Wreckage_HazardousContainer_A.Item_Wreckage_HazardousContainer_A_C.ExecuteUbergraph_Item_Wreckage_HazardousContainer_A
struct AItem_Wreckage_HazardousContainer_A_C_ExecuteUbergraph_Item_Wreckage_HazardousContainer_A_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
