
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

// Function SupplyControlPanel.SupplyControlPanel_C.OnCancelBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASupplyControlPanel_C::OnCancelBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.OnCancelBP");

	ASupplyControlPanel_C_OnCancelBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SupplyControlPanel.SupplyControlPanel_C.OnConfirmBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASupplyControlPanel_C::OnConfirmBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.OnConfirmBP");

	ASupplyControlPanel_C_OnConfirmBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SupplyControlPanel.SupplyControlPanel_C.DoCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyControlPanel_C::DoCancel(class APlayerController* Controller, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.DoCancel");

	ASupplyControlPanel_C_DoCancel_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function SupplyControlPanel.SupplyControlPanel_C.DoConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASupplyControlPanel_C::DoConfirm(class APlayerController* Controller, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.DoConfirm");

	ASupplyControlPanel_C_DoConfirm_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function SupplyControlPanel.SupplyControlPanel_C.OnRep_HasPerformedFirstDrop
// (BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::OnRep_HasPerformedFirstDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.OnRep_HasPerformedFirstDrop");

	ASupplyControlPanel_C_OnRep_HasPerformedFirstDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.OnRep_SupplyDropInProgress
// (BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::OnRep_SupplyDropInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.OnRep_SupplyDropInProgress");

	ASupplyControlPanel_C_OnRep_SupplyDropInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.PerformSupplyDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::PerformSupplyDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.PerformSupplyDrop");

	ASupplyControlPanel_C_PerformSupplyDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.UpdateLightAndButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::UpdateLightAndButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.UpdateLightAndButton");

	ASupplyControlPanel_C_UpdateLightAndButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.UserConstructionScript");

	ASupplyControlPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__FinishedFunc
// (BlueprintEvent)

void ASupplyControlPanel_C::SupplyDropTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__FinishedFunc");

	ASupplyControlPanel_C_SupplyDropTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__UpdateFunc
// (BlueprintEvent)

void ASupplyControlPanel_C::SupplyDropTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__UpdateFunc");

	ASupplyControlPanel_C_SupplyDropTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate3LandEvt__EventFunc
// (BlueprintEvent)

void ASupplyControlPanel_C::SupplyDropTimeline__Crate3LandEvt__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate3LandEvt__EventFunc");

	ASupplyControlPanel_C_SupplyDropTimeline__Crate3LandEvt__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate2LandEvt__EventFunc
// (BlueprintEvent)

void ASupplyControlPanel_C::SupplyDropTimeline__Crate2LandEvt__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate2LandEvt__EventFunc");

	ASupplyControlPanel_C_SupplyDropTimeline__Crate2LandEvt__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate1LandEvt__EventFunc
// (BlueprintEvent)

void ASupplyControlPanel_C::SupplyDropTimeline__Crate1LandEvt__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.SupplyDropTimeline__Crate1LandEvt__EventFunc");

	ASupplyControlPanel_C_SupplyDropTimeline__Crate1LandEvt__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASupplyControlPanel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.ReceiveBeginPlay");

	ASupplyControlPanel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASupplyControlPanel_C::BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ASupplyControlPanel_C_BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASupplyControlPanel_C::BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature");

	ASupplyControlPanel_C_BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASupplyControlPanel_C::BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature");

	ASupplyControlPanel_C_BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.OnPanelMontageEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASupplyControlPanel_C::OnPanelMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.OnPanelMontageEnded");

	ASupplyControlPanel_C_OnPanelMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDrop
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::DoSupplyDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDrop");

	ASupplyControlPanel_C_DoSupplyDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDropAnimation
// (BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::DoSupplyDropAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDropAnimation");

	ASupplyControlPanel_C_DoSupplyDropAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASupplyControlPanel_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature");

	ASupplyControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.Panel Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ASupplyControlPanel_C::Panel_Clicked(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.Panel Clicked");

	ASupplyControlPanel_C_Panel_Clicked_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDropLandingAudioRPC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ASupplyControlPanel_C::DoSupplyDropLandingAudioRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.DoSupplyDropLandingAudioRPC");

	ASupplyControlPanel_C_DoSupplyDropLandingAudioRPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.OnControlledActorSet
// (Event, Protected, BlueprintEvent)

void ASupplyControlPanel_C::OnControlledActorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.OnControlledActorSet");

	ASupplyControlPanel_C_OnControlledActorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyControlPanel.SupplyControlPanel_C.ExecuteUbergraph_SupplyControlPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASupplyControlPanel_C::ExecuteUbergraph_SupplyControlPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyControlPanel.SupplyControlPanel_C.ExecuteUbergraph_SupplyControlPanel");

	ASupplyControlPanel_C_ExecuteUbergraph_SupplyControlPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
