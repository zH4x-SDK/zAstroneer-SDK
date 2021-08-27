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

// Function Object_Ball_Beach_LargeA_BP.Object_Ball_Beach_LargeA_BP_C.GetBodySlotLegacy
struct AObject_Ball_Beach_LargeA_BP_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Object_Ball_Beach_LargeA_BP.Object_Ball_Beach_LargeA_BP_C.UserConstructionScript
struct AObject_Ball_Beach_LargeA_BP_C_UserConstructionScript_Params
{
};

// Function Object_Ball_Beach_LargeA_BP.Object_Ball_Beach_LargeA_BP_C.ReceiveBeginPlay
struct AObject_Ball_Beach_LargeA_BP_C_ReceiveBeginPlay_Params
{
};

// Function Object_Ball_Beach_LargeA_BP.Object_Ball_Beach_LargeA_BP_C.DroppedInWorld
struct AObject_Ball_Beach_LargeA_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Object_Ball_Beach_LargeA_BP.Object_Ball_Beach_LargeA_BP_C.PickedUpFromWorld
struct AObject_Ball_Beach_LargeA_BP_C_PickedUpFromWorld_Params
{
};

// Function Object_Ball_Beach_LargeA_BP.Object_Ball_Beach_LargeA_BP_C.ReceiveHit
struct AObject_Ball_Beach_LargeA_BP_C_ReceiveHit_Params
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

// Function Object_Ball_Beach_LargeA_BP.Object_Ball_Beach_LargeA_BP_C.ExecuteUbergraph_Object_Ball_Beach_LargeA_BP
struct AObject_Ball_Beach_LargeA_BP_C_ExecuteUbergraph_Object_Ball_Beach_LargeA_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
