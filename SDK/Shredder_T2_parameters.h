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

// Function Shredder_T2.Shredder_T2_C.UserConstructionScript
struct AShredder_T2_C_UserConstructionScript_Params
{
};

// Function Shredder_T2.Shredder_T2_C.ReceiveBeginPlay
struct AShredder_T2_C_ReceiveBeginPlay_Params
{
};

// Function Shredder_T2.Shredder_T2_C.UpdateShredderAnimState
struct AShredder_T2_C_UpdateShredderAnimState_Params
{
	TEnumAsByte<EShredderState>                        NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_T2.Shredder_T2_C.UpdateShredderAnimSpeed
struct AShredder_T2_C_UpdateShredderAnimSpeed_Params
{
	float                                              NewPowerLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_T2.Shredder_T2_C.OnAnimationInactive
struct AShredder_T2_C_OnAnimationInactive_Params
{
};

// Function Shredder_T2.Shredder_T2_C.ReceiveHit
struct AShredder_T2_C_ReceiveHit_Params
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

// Function Shredder_T2.Shredder_T2_C.DroppedInWorld
struct AShredder_T2_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Shredder_T2.Shredder_T2_C.PickedUpFromWorld
struct AShredder_T2_C_PickedUpFromWorld_Params
{
};

// Function Shredder_T2.Shredder_T2_C.ExecuteUbergraph_Shredder_T2
struct AShredder_T2_C_ExecuteUbergraph_Shredder_T2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
