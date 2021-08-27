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

// Function SplitterControlPanel.SplitterControlPanel_C.SetupVisualsForClosedState
struct ASplitterControlPanel_C_SetupVisualsForClosedState_Params
{
};

// Function SplitterControlPanel.SplitterControlPanel_C.AttemptToPlaySliderTickSound
struct ASplitterControlPanel_C_AttemptToPlaySliderTickSound_Params
{
	int                                                SliderIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SplitterControlPanel.SplitterControlPanel_C.CalculateLinkedSliderIndex
struct ASplitterControlPanel_C_CalculateLinkedSliderIndex_Params
{
};

// Function SplitterControlPanel.SplitterControlPanel_C.IsCableConnected
struct ASplitterControlPanel_C_IsCableConnected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Connected;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SplitterControlPanel.SplitterControlPanel_C.UpdateCableConnectionState
struct ASplitterControlPanel_C_UpdateCableConnectionState_Params
{
	struct FStreamingPowerSplitterReplicationData      RepData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.SetInteractingSliderIndices
struct ASplitterControlPanel_C_SetInteractingSliderIndices_Params
{
	int                                                SliderIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SplitterControlPanel.SplitterControlPanel_C.UpdateSliderInteractionBlockedState
struct ASplitterControlPanel_C_UpdateSliderInteractionBlockedState_Params
{
	struct FStreamingPowerSplitterReplicationData      RepData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.UpdateWithSplitterReplicationData
struct ASplitterControlPanel_C_UpdateWithSplitterReplicationData_Params
{
	struct FStreamingPowerSplitterReplicationData      RepData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.UpdatePanelLights
struct ASplitterControlPanel_C_UpdatePanelLights_Params
{
	struct FStreamingPowerSplitterReplicationData      RepData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.ProcessPanelSliderInput
struct ASplitterControlPanel_C_ProcessPanelSliderInput_Params
{
};

// Function SplitterControlPanel.SplitterControlPanel_C.UpdatePowerDisplayScreens
struct ASplitterControlPanel_C_UpdatePowerDisplayScreens_Params
{
	struct FStreamingPowerSplitterReplicationData      RepData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.SetLinkedSliderPosition
struct ASplitterControlPanel_C_SetLinkedSliderPosition_Params
{
	int                                                SliderIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SplitterControlPanel.SplitterControlPanel_C.UpdateCableMaterials
struct ASplitterControlPanel_C_UpdateCableMaterials_Params
{
	struct FStreamingPowerSplitterReplicationData      RepData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.GetSliderPosition
struct ASplitterControlPanel_C_GetSliderPosition_Params
{
	int                                                CableIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderPosition;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SplitterControlPanel.SplitterControlPanel_C.GetCursorProjectedOntoSliderWrapperPlane
struct ASplitterControlPanel_C_GetCursorProjectedOntoSliderWrapperPlane_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               HitSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SplitterControlPanel.SplitterControlPanel_C.UserConstructionScript
struct ASplitterControlPanel_C_UserConstructionScript_Params
{
};

// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider1_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
struct ASplitterControlPanel_C_BndEvt__SliderCollider1_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider2_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature
struct ASplitterControlPanel_C_BndEvt__SliderCollider2_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider3_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature
struct ASplitterControlPanel_C_BndEvt__SliderCollider3_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature
struct ASplitterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SplitterControlPanel.SplitterControlPanel_C.RPCUpdateSplittersPowerSplitRatios
struct ASplitterControlPanel_C_RPCUpdateSplittersPowerSplitRatios_Params
{
	TArray<float>                                      SplitRatios;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SplitterControlPanel.SplitterControlPanel_C.ProcessSplitterControlPanelInput
struct ASplitterControlPanel_C_ProcessSplitterControlPanelInput_Params
{
};

// Function SplitterControlPanel.SplitterControlPanel_C.ReceiveBeginPlay
struct ASplitterControlPanel_C_ReceiveBeginPlay_Params
{
};

// Function SplitterControlPanel.SplitterControlPanel_C.ExecuteUbergraph_SplitterControlPanel
struct ASplitterControlPanel_C_ExecuteUbergraph_SplitterControlPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
