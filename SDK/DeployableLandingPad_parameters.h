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

// Function DeployableLandingPad.DeployableLandingPad_C.SetIndicatorMaterial
struct ADeployableLandingPad_C_SetIndicatorMaterial_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.SetDeployedState
struct ADeployableLandingPad_C_SetDeployedState_Params
{
	bool                                               Deploy;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeployableLandingPad.DeployableLandingPad_C.OnRep_Deployed
struct ADeployableLandingPad_C_OnRep_Deployed_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.SERVER_UpdateUseSuppression
struct ADeployableLandingPad_C_SERVER_UpdateUseSuppression_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.UpdateUseContext
struct ADeployableLandingPad_C_UpdateUseContext_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.OnRep_LandingPadCanDeploy
struct ADeployableLandingPad_C_OnRep_LandingPadCanDeploy_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.SetAllLandingLightsOn
struct ADeployableLandingPad_C_SetAllLandingLightsOn_Params
{
	bool                                               AreLightsOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeployableLandingPad.DeployableLandingPad_C.MotionStateChanged
struct ADeployableLandingPad_C_MotionStateChanged_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.GetBodySlotLegacy
struct ADeployableLandingPad_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeployableLandingPad.DeployableLandingPad_C.UserConstructionScript
struct ADeployableLandingPad_C_UserConstructionScript_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__FinishedFunc
struct ADeployableLandingPad_C_LandingLightsAnim__FinishedFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__UpdateFunc
struct ADeployableLandingPad_C_LandingLightsAnim__UpdateFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOff__EventFunc
struct ADeployableLandingPad_C_LandingLightsAnim__LightsOff__EventFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn5__EventFunc
struct ADeployableLandingPad_C_LandingLightsAnim__LightsOn5__EventFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn4__EventFunc
struct ADeployableLandingPad_C_LandingLightsAnim__LightsOn4__EventFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn3__EventFunc
struct ADeployableLandingPad_C_LandingLightsAnim__LightsOn3__EventFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn2__EventFunc
struct ADeployableLandingPad_C_LandingLightsAnim__LightsOn2__EventFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.LandingLightsAnim__LightsOn1__EventFunc
struct ADeployableLandingPad_C_LandingLightsAnim__LightsOn1__EventFunc_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ADeployableLandingPad_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DeployableLandingPad.DeployableLandingPad_C.ReceiveBeginPlay
struct ADeployableLandingPad_C_ReceiveBeginPlay_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.BndEvt__DeployRetract_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ADeployableLandingPad_C_BndEvt__DeployRetract_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.BndEvt__DeployRetract_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ADeployableLandingPad_C_BndEvt__DeployRetract_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.ReceiveTick
struct ADeployableLandingPad_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeployableLandingPad.DeployableLandingPad_C.ItemSetOnPad
struct ADeployableLandingPad_C_ItemSetOnPad_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeployableLandingPad.DeployableLandingPad_C.ItemRemovedFromPad
struct ADeployableLandingPad_C_ItemRemovedFromPad_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeployableLandingPad.DeployableLandingPad_C.DroppedInWorld
struct ADeployableLandingPad_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DeployableLandingPad.DeployableLandingPad_C.PickedUpFromWorld
struct ADeployableLandingPad_C_PickedUpFromWorld_Params
{
};

// Function DeployableLandingPad.DeployableLandingPad_C.ReceiveHit
struct ADeployableLandingPad_C_ReceiveHit_Params
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

// Function DeployableLandingPad.DeployableLandingPad_C.ExecuteUbergraph_DeployableLandingPad
struct ADeployableLandingPad_C_ExecuteUbergraph_DeployableLandingPad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
