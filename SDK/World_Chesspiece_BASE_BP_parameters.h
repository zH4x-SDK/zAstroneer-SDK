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

// Function World_Chesspiece_BASE_BP.World_Chesspiece_BASE_BP_C.UserConstructionScript
struct AWorld_Chesspiece_BASE_BP_C_UserConstructionScript_Params
{
};

// Function World_Chesspiece_BASE_BP.World_Chesspiece_BASE_BP_C.ReceiveBeginPlay
struct AWorld_Chesspiece_BASE_BP_C_ReceiveBeginPlay_Params
{
};

// Function World_Chesspiece_BASE_BP.World_Chesspiece_BASE_BP_C.PickedUpFromWorld
struct AWorld_Chesspiece_BASE_BP_C_PickedUpFromWorld_Params
{
};

// Function World_Chesspiece_BASE_BP.World_Chesspiece_BASE_BP_C.DroppedInWorld
struct AWorld_Chesspiece_BASE_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function World_Chesspiece_BASE_BP.World_Chesspiece_BASE_BP_C.ReceiveHit
struct AWorld_Chesspiece_BASE_BP_C_ReceiveHit_Params
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

// Function World_Chesspiece_BASE_BP.World_Chesspiece_BASE_BP_C.ExecuteUbergraph_World_Chesspiece_BASE_BP
struct AWorld_Chesspiece_BASE_BP_C_ExecuteUbergraph_World_Chesspiece_BASE_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
