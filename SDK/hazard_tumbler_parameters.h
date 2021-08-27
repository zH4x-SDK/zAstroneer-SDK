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

// Function hazard_tumbler.hazard_tumbler_C.DropItem
struct Ahazard_tumbler_C_DropItem_Params
{
	struct FTransform                                  Spawn_Transform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function hazard_tumbler.hazard_tumbler_C.ConstrainObject
struct Ahazard_tumbler_C_ConstrainObject_Params
{
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_tumbler.hazard_tumbler_C.ReleaseItems
struct Ahazard_tumbler_C_ReleaseItems_Params
{
};

// Function hazard_tumbler.hazard_tumbler_C.AttachTo
struct Ahazard_tumbler_C_AttachTo_Params
{
	class APhysicalItem*                               Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_tumbler.hazard_tumbler_C.SetDirection
struct Ahazard_tumbler_C_SetDirection_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function hazard_tumbler.hazard_tumbler_C.Destroy
struct Ahazard_tumbler_C_Destroy_Params
{
};

// Function hazard_tumbler.hazard_tumbler_C.Move
struct Ahazard_tumbler_C_Move_Params
{
};

// Function hazard_tumbler.hazard_tumbler_C.UserConstructionScript
struct Ahazard_tumbler_C_UserConstructionScript_Params
{
};

// Function hazard_tumbler.hazard_tumbler_C.ReceiveTick
struct Ahazard_tumbler_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_tumbler.hazard_tumbler_C.ReceiveHit
struct Ahazard_tumbler_C_ReceiveHit_Params
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

// Function hazard_tumbler.hazard_tumbler_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature
struct Ahazard_tumbler_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function hazard_tumbler.hazard_tumbler_C.OnSpawn
struct Ahazard_tumbler_C_OnSpawn_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_tumbler.hazard_tumbler_C.ExecuteUbergraph_hazard_tumbler
struct Ahazard_tumbler_C_ExecuteUbergraph_hazard_tumbler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
