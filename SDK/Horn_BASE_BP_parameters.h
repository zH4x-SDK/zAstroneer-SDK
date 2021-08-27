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

// Function Horn_BASE_BP.Horn_BASE_BP_C.UpdateMaterialPulse
struct AHorn_BASE_BP_C_UpdateMaterialPulse_Params
{
	float                                              PulseStrength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.GetBodySlotLegacy
struct AHorn_BASE_BP_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.UserConstructionScript
struct AHorn_BASE_BP_C_UserConstructionScript_Params
{
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.ReceiveBeginPlay
struct AHorn_BASE_BP_C_ReceiveBeginPlay_Params
{
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AHorn_BASE_BP_C_BndEvt__Horn_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AHorn_BASE_BP_C_BndEvt__Horn_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.BndEvt__Horn_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct AHorn_BASE_BP_C_BndEvt__Horn_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.PickedUpFromWorld
struct AHorn_BASE_BP_C_PickedUpFromWorld_Params
{
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.DroppedInWorld
struct AHorn_BASE_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.ReceiveHit
struct AHorn_BASE_BP_C_ReceiveHit_Params
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

// Function Horn_BASE_BP.Horn_BASE_BP_C.ExecuteUbergraph_Horn_BASE_BP
struct AHorn_BASE_BP_C_ExecuteUbergraph_Horn_BASE_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.OnStopPulseAnim__DelegateSignature
struct AHorn_BASE_BP_C_OnStopPulseAnim__DelegateSignature_Params
{
};

// Function Horn_BASE_BP.Horn_BASE_BP_C.OnStartPulseAnim__DelegateSignature
struct AHorn_BASE_BP_C_OnStartPulseAnim__DelegateSignature_Params
{
	bool                                               Looping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
