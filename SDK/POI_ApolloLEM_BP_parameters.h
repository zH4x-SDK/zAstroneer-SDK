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

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.UserConstructionScript
struct APOI_ApolloLEM_BP_C_UserConstructionScript_Params
{
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.FlashStandbyLights__FinishedFunc
struct APOI_ApolloLEM_BP_C_FlashStandbyLights__FinishedFunc_Params
{
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.FlashStandbyLights__UpdateFunc
struct APOI_ApolloLEM_BP_C_FlashStandbyLights__UpdateFunc_Params
{
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct APOI_ApolloLEM_BP_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveBeginPlay
struct APOI_ApolloLEM_BP_C_ReceiveBeginPlay_Params
{
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.Visual Photo Delay Timer
struct APOI_ApolloLEM_BP_C_Visual_Photo_Delay_Timer_Params
{
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.Remove Use Suppression
struct APOI_ApolloLEM_BP_C_Remove_Use_Suppression_Params
{
	class UAstroAction*                                EndedAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveHit
struct APOI_ApolloLEM_BP_C_ReceiveHit_Params
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

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.BndEvt__AudioLoopRadius_Small_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APOI_ApolloLEM_BP_C_BndEvt__AudioLoopRadius_Small_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.BndEvt__AudioLoopRadius_Large_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct APOI_ApolloLEM_BP_C_BndEvt__AudioLoopRadius_Large_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveEndPlay
struct APOI_ApolloLEM_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ExecuteUbergraph_POI_ApolloLEM_BP
struct APOI_ApolloLEM_BP_C_ExecuteUbergraph_POI_ApolloLEM_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
