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

// Function Small_Wind.Small_Wind_C.GetBodySlotLegacy
struct ASmall_Wind_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Small_Wind.Small_Wind_C.UserConstructionScript
struct ASmall_Wind_C_UserConstructionScript_Params
{
};

// Function Small_Wind.Small_Wind_C.ReceiveBeginPlay
struct ASmall_Wind_C_ReceiveBeginPlay_Params
{
};

// Function Small_Wind.Small_Wind_C.ReceiveHit
struct ASmall_Wind_C_ReceiveHit_Params
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

// Function Small_Wind.Small_Wind_C.DroppedInWorld
struct ASmall_Wind_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Small_Wind.Small_Wind_C.PickedUpFromWorld
struct ASmall_Wind_C_PickedUpFromWorld_Params
{
};

// Function Small_Wind.Small_Wind_C.ReceiveEndPlay
struct ASmall_Wind_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Small_Wind.Small_Wind_C.OnPickedUpFromWorld_Event_1
struct ASmall_Wind_C_OnPickedUpFromWorld_Event_1_Params
{
	bool                                               PhysicalMovement;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Small_Wind.Small_Wind_C.CustomEvent_1
struct ASmall_Wind_C_CustomEvent_1_Params
{
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Small_Wind.Small_Wind_C.CustomEvent_2
struct ASmall_Wind_C_CustomEvent_2_Params
{
};

// Function Small_Wind.Small_Wind_C.CustomEvent_3
struct ASmall_Wind_C_CustomEvent_3_Params
{
};

// Function Small_Wind.Small_Wind_C.BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_0_OnWindPowerAnimationDataChanged__DelegateSignature
struct ASmall_Wind_C_BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_0_OnWindPowerAnimationDataChanged__DelegateSignature_Params
{
	struct FVector                                     WindNormal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              WindSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Small_Wind.Small_Wind_C.UnblockRotationAnim
struct ASmall_Wind_C_UnblockRotationAnim_Params
{
};

// Function Small_Wind.Small_Wind_C.UpdateWindPowerAnim
struct ASmall_Wind_C_UpdateWindPowerAnim_Params
{
};

// Function Small_Wind.Small_Wind_C.CustomEvent_4
struct ASmall_Wind_C_CustomEvent_4_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Small_Wind.Small_Wind_C.ExecuteUbergraph_Small_Wind
struct ASmall_Wind_C_ExecuteUbergraph_Small_Wind_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
