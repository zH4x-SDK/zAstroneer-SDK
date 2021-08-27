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

// Function hazard_caveworm_01.hazard_caveworm_01_C.HandleOnDeformationEvent
struct Ahazard_caveworm_01_C_HandleOnDeformationEvent_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.UpdateCable
struct Ahazard_caveworm_01_C_UpdateCable_Params
{
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.SquishAnim
struct Ahazard_caveworm_01_C_SquishAnim_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.DropItem
struct Ahazard_caveworm_01_C_DropItem_Params
{
	struct FTransform                                  SpawnTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class APhysicalItem*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.InitTongue
struct Ahazard_caveworm_01_C_InitTongue_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.GetTongueClearance
struct Ahazard_caveworm_01_C_GetTongueClearance_Params
{
	float                                              Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.ReleaseObject
struct Ahazard_caveworm_01_C_ReleaseObject_Params
{
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.UserConstructionScript
struct Ahazard_caveworm_01_C_UserConstructionScript_Params
{
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveBeginPlay
struct Ahazard_caveworm_01_C_ReceiveBeginPlay_Params
{
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveTick
struct Ahazard_caveworm_01_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature
struct Ahazard_caveworm_01_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature_Params
{
	struct FDeformationParams                          DeformationParams;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_303_ComponentHitSignature__DelegateSignature
struct Ahazard_caveworm_01_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_303_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__MeshCollider_K2Node_ComponentBoundEvent_330_ComponentHitSignature__DelegateSignature
struct Ahazard_caveworm_01_C_BndEvt__MeshCollider_K2Node_ComponentBoundEvent_330_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__GrabTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct Ahazard_caveworm_01_C_BndEvt__GrabTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.DoExtendTongue
struct Ahazard_caveworm_01_C_DoExtendTongue_Params
{
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.Die
struct Ahazard_caveworm_01_C_Die_Params
{
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.RetractTongue
struct Ahazard_caveworm_01_C_RetractTongue_Params
{
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveEndPlay
struct Ahazard_caveworm_01_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hazard_caveworm_01.hazard_caveworm_01_C.ExecuteUbergraph_hazard_caveworm_01
struct Ahazard_caveworm_01_C_ExecuteUbergraph_hazard_caveworm_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
