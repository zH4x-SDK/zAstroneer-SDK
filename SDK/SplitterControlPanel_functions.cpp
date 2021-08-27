
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SplitterControlPanel.SplitterControlPanel_C.SetupVisualsForClosedState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASplitterControlPanel_C::SetupVisualsForClosedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.SetupVisualsForClosedState");

	ASplitterControlPanel_C_SetupVisualsForClosedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.AttemptToPlaySliderTickSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SliderIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::AttemptToPlaySliderTickSound(int SliderIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.AttemptToPlaySliderTickSound");

	ASplitterControlPanel_C_AttemptToPlaySliderTickSound_Params params;
	params.SliderIndex = SliderIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.CalculateLinkedSliderIndex
// (Public, BlueprintCallable, BlueprintEvent)

void ASplitterControlPanel_C::CalculateLinkedSliderIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.CalculateLinkedSliderIndex");

	ASplitterControlPanel_C_CalculateLinkedSliderIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.IsCableConnected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Connected                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::IsCableConnected(int Index, bool* Connected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.IsCableConnected");

	ASplitterControlPanel_C_IsCableConnected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Connected != nullptr)
		*Connected = params.Connected;
}


// Function SplitterControlPanel.SplitterControlPanel_C.UpdateCableConnectionState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStreamingPowerSplitterReplicationData RepData                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASplitterControlPanel_C::UpdateCableConnectionState(struct FStreamingPowerSplitterReplicationData* RepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.UpdateCableConnectionState");

	ASplitterControlPanel_C_UpdateCableConnectionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RepData != nullptr)
		*RepData = params.RepData;
}


// Function SplitterControlPanel.SplitterControlPanel_C.SetInteractingSliderIndices
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SliderIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::SetInteractingSliderIndices(int SliderIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.SetInteractingSliderIndices");

	ASplitterControlPanel_C_SetInteractingSliderIndices_Params params;
	params.SliderIndex = SliderIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.UpdateSliderInteractionBlockedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStreamingPowerSplitterReplicationData RepData                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASplitterControlPanel_C::UpdateSliderInteractionBlockedState(struct FStreamingPowerSplitterReplicationData* RepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.UpdateSliderInteractionBlockedState");

	ASplitterControlPanel_C_UpdateSliderInteractionBlockedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RepData != nullptr)
		*RepData = params.RepData;
}


// Function SplitterControlPanel.SplitterControlPanel_C.UpdateWithSplitterReplicationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStreamingPowerSplitterReplicationData RepData                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ASplitterControlPanel_C::UpdateWithSplitterReplicationData(const struct FStreamingPowerSplitterReplicationData& RepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.UpdateWithSplitterReplicationData");

	ASplitterControlPanel_C_UpdateWithSplitterReplicationData_Params params;
	params.RepData = RepData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.UpdatePanelLights
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStreamingPowerSplitterReplicationData RepData                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASplitterControlPanel_C::UpdatePanelLights(struct FStreamingPowerSplitterReplicationData* RepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.UpdatePanelLights");

	ASplitterControlPanel_C_UpdatePanelLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RepData != nullptr)
		*RepData = params.RepData;
}


// Function SplitterControlPanel.SplitterControlPanel_C.ProcessPanelSliderInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASplitterControlPanel_C::ProcessPanelSliderInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.ProcessPanelSliderInput");

	ASplitterControlPanel_C_ProcessPanelSliderInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.UpdatePowerDisplayScreens
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStreamingPowerSplitterReplicationData RepData                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASplitterControlPanel_C::UpdatePowerDisplayScreens(struct FStreamingPowerSplitterReplicationData* RepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.UpdatePowerDisplayScreens");

	ASplitterControlPanel_C_UpdatePowerDisplayScreens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RepData != nullptr)
		*RepData = params.RepData;
}


// Function SplitterControlPanel.SplitterControlPanel_C.SetLinkedSliderPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SliderIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::SetLinkedSliderPosition(int SliderIndex, float Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.SetLinkedSliderPosition");

	ASplitterControlPanel_C_SetLinkedSliderPosition_Params params;
	params.SliderIndex = SliderIndex;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.UpdateCableMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStreamingPowerSplitterReplicationData RepData                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASplitterControlPanel_C::UpdateCableMaterials(struct FStreamingPowerSplitterReplicationData* RepData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.UpdateCableMaterials");

	ASplitterControlPanel_C_UpdateCableMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RepData != nullptr)
		*RepData = params.RepData;
}


// Function SplitterControlPanel.SplitterControlPanel_C.GetSliderPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CableIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::GetSliderPosition(int CableIndex, float* SliderPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.GetSliderPosition");

	ASplitterControlPanel_C_GetSliderPosition_Params params;
	params.CableIndex = CableIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderPosition != nullptr)
		*SliderPosition = params.SliderPosition;
}


// Function SplitterControlPanel.SplitterControlPanel_C.GetCursorProjectedOntoSliderWrapperPlane
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// bool                           HitSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::GetCursorProjectedOntoSliderWrapperPlane(struct FVector* Location, bool* HitSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.GetCursorProjectedOntoSliderWrapperPlane");

	ASplitterControlPanel_C_GetCursorProjectedOntoSliderWrapperPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (HitSuccess != nullptr)
		*HitSuccess = params.HitSuccess;
}


// Function SplitterControlPanel.SplitterControlPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASplitterControlPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.UserConstructionScript");

	ASplitterControlPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider1_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASplitterControlPanel_C::BndEvt__SliderCollider1_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider1_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ASplitterControlPanel_C_BndEvt__SliderCollider1_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider2_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASplitterControlPanel_C::BndEvt__SliderCollider2_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider2_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature");

	ASplitterControlPanel_C_BndEvt__SliderCollider2_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider3_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASplitterControlPanel_C::BndEvt__SliderCollider3_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__SliderCollider3_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature");

	ASplitterControlPanel_C_BndEvt__SliderCollider3_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature");

	ASplitterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.RPCUpdateSplittersPowerSplitRatios
// (Net, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  SplitRatios                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASplitterControlPanel_C::RPCUpdateSplittersPowerSplitRatios(TArray<float> SplitRatios)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.RPCUpdateSplittersPowerSplitRatios");

	ASplitterControlPanel_C_RPCUpdateSplittersPowerSplitRatios_Params params;
	params.SplitRatios = SplitRatios;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.ProcessSplitterControlPanelInput
// (Event, Protected, BlueprintEvent)

void ASplitterControlPanel_C::ProcessSplitterControlPanelInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.ProcessSplitterControlPanelInput");

	ASplitterControlPanel_C_ProcessSplitterControlPanelInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASplitterControlPanel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.ReceiveBeginPlay");

	ASplitterControlPanel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplitterControlPanel.SplitterControlPanel_C.ExecuteUbergraph_SplitterControlPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASplitterControlPanel_C::ExecuteUbergraph_SplitterControlPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplitterControlPanel.SplitterControlPanel_C.ExecuteUbergraph_SplitterControlPanel");

	ASplitterControlPanel_C_ExecuteUbergraph_SplitterControlPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
