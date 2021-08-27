
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

// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.SERVER_CheckAwardClientAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OperationRequestSuceeded       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       OperationInstigator            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::SERVER_CheckAwardClientAchievement(bool OperationRequestSuceeded, class APlayerController* OperationInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.SERVER_CheckAwardClientAchievement");

	AResearchModuleControlPanel_C_SERVER_CheckAwardClientAchievement_Params params;
	params.OperationRequestSuceeded = OperationRequestSuceeded;
	params.OperationInstigator = OperationInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.GetResearchComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ResearchComponentFound         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FResearchComponent      ResearchComponent              (Parm, OutParm)

void AResearchModuleControlPanel_C::GetResearchComponent(bool* ResearchComponentFound, struct FResearchComponent* ResearchComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.GetResearchComponent");

	AResearchModuleControlPanel_C_GetResearchComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResearchComponentFound != nullptr)
		*ResearchComponentFound = params.ResearchComponentFound;
	if (ResearchComponent != nullptr)
		*ResearchComponent = params.ResearchComponent;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.SetResearchSubjectData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResearchSubjectReplicationData ResearchSubjectData            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AResearchModuleControlPanel_C::SetResearchSubjectData(struct FResearchSubjectReplicationData* ResearchSubjectData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.SetResearchSubjectData");

	AResearchModuleControlPanel_C_SetResearchSubjectData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResearchSubjectData != nullptr)
		*ResearchSubjectData = params.ResearchSubjectData;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.UpdateLightAndButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AResearchModuleControlPanel_C::UpdateLightAndButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.UpdateLightAndButton");

	AResearchModuleControlPanel_C_UpdateLightAndButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.TogglePowerGraphDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           cracked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::TogglePowerGraphDisplay(bool cracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.TogglePowerGraphDisplay");

	AResearchModuleControlPanel_C_TogglePowerGraphDisplay_Params params;
	params.cracked = cracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.DoCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::DoCancel(class APlayerController* Controller, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.DoCancel");

	AResearchModuleControlPanel_C_DoCancel_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnCancelBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AResearchModuleControlPanel_C::OnCancelBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnCancelBP");

	AResearchModuleControlPanel_C_OnCancelBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.DoConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::DoConfirm(class APlayerController* Controller, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.DoConfirm");

	AResearchModuleControlPanel_C_DoConfirm_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnConfirmBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AResearchModuleControlPanel_C::OnConfirmBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnConfirmBP");

	AResearchModuleControlPanel_C_OnConfirmBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ResearchOperationAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanPerformOperation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::ResearchOperationAvailable(bool* CanPerformOperation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ResearchOperationAvailable");

	AResearchModuleControlPanel_C_ResearchOperationAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPerformOperation != nullptr)
		*CanPerformOperation = params.CanPerformOperation;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.CloseButtonCover
// (Public, BlueprintCallable, BlueprintEvent)

void AResearchModuleControlPanel_C::CloseButtonCover()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.CloseButtonCover");

	AResearchModuleControlPanel_C_CloseButtonCover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResearchModuleControlPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.UserConstructionScript");

	AResearchModuleControlPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__FinishedFunc
// (BlueprintEvent)

void AResearchModuleControlPanel_C::LightFlashing__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__FinishedFunc");

	AResearchModuleControlPanel_C_LightFlashing__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__UpdateFunc
// (BlueprintEvent)

void AResearchModuleControlPanel_C::LightFlashing__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__UpdateFunc");

	AResearchModuleControlPanel_C_LightFlashing__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__ToggleLight__EventFunc
// (BlueprintEvent)

void AResearchModuleControlPanel_C::LightFlashing__ToggleLight__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.LightFlashing__ToggleLight__EventFunc");

	AResearchModuleControlPanel_C_LightFlashing__ToggleLight__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.InpActEvt_Confirm_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AResearchModuleControlPanel_C::InpActEvt_Confirm_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.InpActEvt_Confirm_K2Node_InputActionEvent_1");

	AResearchModuleControlPanel_C_InpActEvt_Confirm_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature");

	AResearchModuleControlPanel_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature");

	AResearchModuleControlPanel_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AResearchModuleControlPanel_C::BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	AResearchModuleControlPanel_C_BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.CoverOpenClickUnhandled
// (BlueprintCallable, BlueprintEvent)

void AResearchModuleControlPanel_C::CoverOpenClickUnhandled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.CoverOpenClickUnhandled");

	AResearchModuleControlPanel_C_CoverOpenClickUnhandled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ReceiveActorOnClicked
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AResearchModuleControlPanel_C::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ReceiveActorOnClicked");

	AResearchModuleControlPanel_C_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature");

	AResearchModuleControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AResearchModuleControlPanel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ReceiveBeginPlay");

	AResearchModuleControlPanel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ServerRequestStartOrInterruptResearch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::ServerRequestStartOrInterruptResearch(class APlayController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ServerRequestStartOrInterruptResearch");

	AResearchModuleControlPanel_C_ServerRequestStartOrInterruptResearch_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnMontageEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnMontageEnded");

	AResearchModuleControlPanel_C_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnResearchReplicationDataChanged
// (BlueprintCallable, BlueprintEvent)

void AResearchModuleControlPanel_C::OnResearchReplicationDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnResearchReplicationDataChanged");

	AResearchModuleControlPanel_C_OnResearchReplicationDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnControlledActorSet
// (Event, Protected, BlueprintEvent)

void AResearchModuleControlPanel_C::OnControlledActorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.OnControlledActorSet");

	AResearchModuleControlPanel_C_OnControlledActorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.Panel Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AResearchModuleControlPanel_C::Panel_Clicked(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.Panel Clicked");

	AResearchModuleControlPanel_C_Panel_Clicked_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ExecuteUbergraph_ResearchModuleControlPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResearchModuleControlPanel_C::ExecuteUbergraph_ResearchModuleControlPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchModuleControlPanel.ResearchModuleControlPanel_C.ExecuteUbergraph_ResearchModuleControlPanel");

	AResearchModuleControlPanel_C_ExecuteUbergraph_ResearchModuleControlPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
