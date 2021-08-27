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

// Function Scanner_Probe.Scanner_Probe_C.UpdateScannerMaterial
struct AScanner_Probe_C_UpdateScannerMaterial_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.GetMidRangeLightState
struct AScanner_Probe_C_GetMidRangeLightState_Params
{
	float                                              DistancePercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LightIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EProximityLightState                               BlinkState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EProximityLightState                               LightState;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scanner_Probe.Scanner_Probe_C.SpawnPingEffect
struct AScanner_Probe_C_SpawnPingEffect_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.OnBlinkChanged
struct AScanner_Probe_C_OnBlinkChanged_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.UpdateLightsOn
struct AScanner_Probe_C_UpdateLightsOn_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.GetIsLightOn
struct AScanner_Probe_C_GetIsLightOn_Params
{
	EProximityLightState                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scanner_Probe.Scanner_Probe_C.SetLightStates
struct AScanner_Probe_C_SetLightStates_Params
{
	EProximityLightState                               LightOneState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EProximityLightState                               LightTwoState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EProximityLightState                               LightThreeState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scanner_Probe.Scanner_Probe_C.SetLightsOn
struct AScanner_Probe_C_SetLightsOn_Params
{
	bool                                               LightOneOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LightTwoOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LightThreeOn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scanner_Probe.Scanner_Probe_C.UpdateLightStates
struct AScanner_Probe_C_UpdateLightStates_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.GetBodySlotLegacy
struct AScanner_Probe_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scanner_Probe.Scanner_Probe_C.UserConstructionScript
struct AScanner_Probe_C_UserConstructionScript_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AScanner_Probe_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Scanner_Probe.Scanner_Probe_C.ReceiveHit
struct AScanner_Probe_C_ReceiveHit_Params
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

// Function Scanner_Probe.Scanner_Probe_C.PickedUpFromWorld
struct AScanner_Probe_C_PickedUpFromWorld_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.DroppedInWorld
struct AScanner_Probe_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Scanner_Probe.Scanner_Probe_C.ReceiveBeginPlay
struct AScanner_Probe_C_ReceiveBeginPlay_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.Ping
struct AScanner_Probe_C_Ping_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.ScanFailed
struct AScanner_Probe_C_ScanFailed_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.OnStateChanged
struct AScanner_Probe_C_OnStateChanged_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AScanner_Probe_C_BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Scanner_Probe.Scanner_Probe_C.ReceiveEndPlay
struct AScanner_Probe_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scanner_Probe.Scanner_Probe_C.ExecuteUbergraph_Scanner_Probe
struct AScanner_Probe_C_ExecuteUbergraph_Scanner_Probe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
