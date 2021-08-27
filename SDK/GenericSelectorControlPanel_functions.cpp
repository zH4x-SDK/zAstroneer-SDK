
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

// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.GetIsUnpowered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericSelectorControlPanel_C::GetIsUnpowered()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.GetIsUnpowered");

	AGenericSelectorControlPanel_C_GetIsUnpowered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetCanUseArrowButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewCanUseArrowButtons          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::SetCanUseArrowButtons(bool NewCanUseArrowButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetCanUseArrowButtons");

	AGenericSelectorControlPanel_C_SetCanUseArrowButtons_Params params;
	params.NewCanUseArrowButtons = NewCanUseArrowButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetupDisplayPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::SetupDisplayPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetupDisplayPanel");

	AGenericSelectorControlPanel_C_SetupDisplayPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateAnimBP
// (Public, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::UpdateAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateAnimBP");

	AGenericSelectorControlPanel_C_UpdateAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetOperationActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewOperationActive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::SetOperationActive(bool NewOperationActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetOperationActive");

	AGenericSelectorControlPanel_C_SetOperationActive_Params params;
	params.NewOperationActive = NewOperationActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetCanUseBigButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewCanActivate                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::SetCanUseBigButton(bool NewCanActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetCanUseBigButton");

	AGenericSelectorControlPanel_C_SetCanUseBigButton_Params params;
	params.NewCanActivate = NewCanActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.RefreshControlPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::RefreshControlPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.RefreshControlPanel");

	AGenericSelectorControlPanel_C_RefreshControlPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetupControlledReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPowerComponent*         ControlledPowerComponent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::SetupControlledReferences(class UPowerComponent* ControlledPowerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetupControlledReferences");

	AGenericSelectorControlPanel_C_SetupControlledReferences_Params params;
	params.ControlledPowerComponent = ControlledPowerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnStateChangedInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::OnStateChangedInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnStateChangedInternal");

	AGenericSelectorControlPanel_C_OnStateChangedInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.GetButtonIconIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            IconIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::GetButtonIconIndex(int* IconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.GetButtonIconIndex");

	AGenericSelectorControlPanel_C_GetButtonIconIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconIndex != nullptr)
		*IconIndex = params.IconIndex;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateScreenInfo
// (Public, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::UpdateScreenInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateScreenInfo");

	AGenericSelectorControlPanel_C_UpdateScreenInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetScreenVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::SetScreenVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.SetScreenVisibility");

	AGenericSelectorControlPanel_C_SetScreenVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.PressBigButton
// (Public, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::PressBigButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.PressBigButton");

	AGenericSelectorControlPanel_C_PressBigButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnCancelBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericSelectorControlPanel_C::OnCancelBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnCancelBP");

	AGenericSelectorControlPanel_C_OnCancelBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnConfirmBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGenericSelectorControlPanel_C::OnConfirmBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnConfirmBP");

	AGenericSelectorControlPanel_C_OnConfirmBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::UpdateLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateLights");

	AGenericSelectorControlPanel_C_UpdateLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UserConstructionScript");

	AGenericSelectorControlPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnNavigateLeftBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::OnNavigateLeftBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnNavigateLeftBP");

	AGenericSelectorControlPanel_C_OnNavigateLeftBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnControlledActorSet
// (Event, Protected, BlueprintEvent)

void AGenericSelectorControlPanel_C::OnControlledActorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnControlledActorSet");

	AGenericSelectorControlPanel_C_OnControlledActorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnNavigateRightBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::OnNavigateRightBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnNavigateRightBP");

	AGenericSelectorControlPanel_C_OnNavigateRightBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReleaseRightButton
// (BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::ReleaseRightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReleaseRightButton");

	AGenericSelectorControlPanel_C_ReleaseRightButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReleaseLeftButton
// (BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::ReleaseLeftButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReleaseLeftButton");

	AGenericSelectorControlPanel_C_ReleaseLeftButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AGenericSelectorControlPanel_C::BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AGenericSelectorControlPanel_C::BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGenericSelectorControlPanel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ReceiveBeginPlay");

	AGenericSelectorControlPanel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnPanelMontageEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::OnPanelMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnPanelMontageEnded");

	AGenericSelectorControlPanel_C_OnPanelMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnControlledActorUseStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::OnControlledActorUseStateChanged(bool IsUsable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnControlledActorUseStateChanged");

	AGenericSelectorControlPanel_C_OnControlledActorUseStateChanged_Params params;
	params.IsUsable = IsUsable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AGenericSelectorControlPanel_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	AGenericSelectorControlPanel_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnPowerAvailableChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PowerAvailable                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::OnPowerAvailableChanged(bool PowerAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.OnPowerAvailableChanged");

	AGenericSelectorControlPanel_C_OnPowerAvailableChanged_Params params;
	params.PowerAvailable = PowerAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerNavigateRight
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::ServerNavigateRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerNavigateRight");

	AGenericSelectorControlPanel_C_ServerNavigateRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerNavigateLeft
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::ServerNavigateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerNavigateLeft");

	AGenericSelectorControlPanel_C_ServerNavigateLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerBigButtonClicked
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         ClickingPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::ServerBigButtonClicked(class APlayController* ClickingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ServerBigButtonClicked");

	AGenericSelectorControlPanel_C_ServerBigButtonClicked_Params params;
	params.ClickingPlayer = ClickingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ExecuteUbergraph_GenericSelectorControlPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::ExecuteUbergraph_GenericSelectorControlPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ExecuteUbergraph_GenericSelectorControlPanel");

	AGenericSelectorControlPanel_C_ExecuteUbergraph_GenericSelectorControlPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ActivateOrCancelOperationByPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayController*         ClickingPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::ActivateOrCancelOperationByPlayer__DelegateSignature(class APlayController* ClickingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ActivateOrCancelOperationByPlayer__DelegateSignature");

	AGenericSelectorControlPanel_C_ActivateOrCancelOperationByPlayer__DelegateSignature_Params params;
	params.ClickingPlayer = ClickingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CrackedStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AControlPanel*           ControlPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCracked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::CrackedStateChanged__DelegateSignature(class AControlPanel* ControlPanel, bool IsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CrackedStateChanged__DelegateSignature");

	AGenericSelectorControlPanel_C_CrackedStateChanged__DelegateSignature_Params params;
	params.ControlPanel = ControlPanel;
	params.IsCracked = IsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ActivateOrCancelOperation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::ActivateOrCancelOperation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.ActivateOrCancelOperation__DelegateSignature");

	AGenericSelectorControlPanel_C_ActivateOrCancelOperation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateControlPanelScreenInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             ScreenWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericSelectorControlPanel_C::UpdateControlPanelScreenInfo__DelegateSignature(class UUserWidget* ScreenWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.UpdateControlPanelScreenInfo__DelegateSignature");

	AGenericSelectorControlPanel_C_UpdateControlPanelScreenInfo__DelegateSignature_Params params;
	params.ScreenWidget = ScreenWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CycleSelectionRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::CycleSelectionRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CycleSelectionRight__DelegateSignature");

	AGenericSelectorControlPanel_C_CycleSelectionRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CycleSelectionLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGenericSelectorControlPanel_C::CycleSelectionLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSelectorControlPanel.GenericSelectorControlPanel_C.CycleSelectionLeft__DelegateSignature");

	AGenericSelectorControlPanel_C_CycleSelectionLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
