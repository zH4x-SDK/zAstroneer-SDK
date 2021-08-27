
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

// Function PrinterControlPanel.PrinterControlPanel_C.SetupControlledReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrinterComponent*       ControlledPrinterComponent     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBreadboardPrinterComponent* ControlledBreadboardPrinterComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPowerComponent*         ControlledPowerComponent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::SetupControlledReferences(class UPrinterComponent* ControlledPrinterComponent, class UBreadboardPrinterComponent* ControlledBreadboardPrinterComponent, class UPowerComponent* ControlledPowerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.SetupControlledReferences");

	APrinterControlPanel_C_SetupControlledReferences_Params params;
	params.ControlledPrinterComponent = ControlledPrinterComponent;
	params.ControlledBreadboardPrinterComponent = ControlledBreadboardPrinterComponent;
	params.ControlledPowerComponent = ControlledPowerComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterStateChangedInternal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::OnPrinterStateChangedInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterStateChangedInternal");

	APrinterControlPanel_C_OnPrinterStateChangedInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.GetButtonIconIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            IconIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::GetButtonIconIndex(int* IconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.GetButtonIconIndex");

	APrinterControlPanel_C_GetButtonIconIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconIndex != nullptr)
		*IconIndex = params.IconIndex;
}


// Function PrinterControlPanel.PrinterControlPanel_C.UpdateScreenInfo
// (Public, BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::UpdateScreenInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.UpdateScreenInfo");

	APrinterControlPanel_C_UpdateScreenInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.SetScreenVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::SetScreenVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.SetScreenVisibility");

	APrinterControlPanel_C_SetScreenVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.CanPrinterPrint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CanPrint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::CanPrinterPrint(bool* CanPrint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.CanPrinterPrint");

	APrinterControlPanel_C_CanPrinterPrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPrint != nullptr)
		*CanPrint = params.CanPrint;
}


// Function PrinterControlPanel.PrinterControlPanel_C.IsPrinterPrinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsPrinting                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::IsPrinterPrinting(bool* IsPrinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.IsPrinterPrinting");

	APrinterControlPanel_C_IsPrinterPrinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPrinting != nullptr)
		*IsPrinting = params.IsPrinting;
}


// Function PrinterControlPanel.PrinterControlPanel_C.PressBigButton
// (Public, BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::PressBigButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.PressBigButton");

	APrinterControlPanel_C_PressBigButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnCancelBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrinterControlPanel_C::OnCancelBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnCancelBP");

	APrinterControlPanel_C_OnCancelBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnConfirmBP
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APrinterControlPanel_C::OnConfirmBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnConfirmBP");

	APrinterControlPanel_C_OnConfirmBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrinterControlPanel.PrinterControlPanel_C.UpdateLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::UpdateLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.UpdateLights");

	APrinterControlPanel_C_UpdateLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.UserConstructionScript");

	APrinterControlPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnNavigateLeftBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::OnNavigateLeftBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnNavigateLeftBP");

	APrinterControlPanel_C_OnNavigateLeftBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnControlledActorSet
// (Event, Protected, BlueprintEvent)

void APrinterControlPanel_C::OnControlledActorSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnControlledActorSet");

	APrinterControlPanel_C_OnControlledActorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnNavigateRightBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerController*       Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::OnNavigateRightBP(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnNavigateRightBP");

	APrinterControlPanel_C_OnNavigateRightBP_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.ReleaseRightButton
// (BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::ReleaseRightButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.ReleaseRightButton");

	APrinterControlPanel_C_ReleaseRightButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.ReleaseLeftButton
// (BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::ReleaseLeftButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.ReleaseLeftButton");

	APrinterControlPanel_C_ReleaseLeftButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APrinterControlPanel_C::BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCrackableActorComponent* CrackableActorComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCracked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature");

	APrinterControlPanel_C_BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature_Params params;
	params.CrackableActorComponent = CrackableActorComponent;
	params.bIsCracked = bIsCracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APrinterControlPanel_C::BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrinterControlPanel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.ReceiveBeginPlay");

	APrinterControlPanel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnPanelMontageEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::OnPanelMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnPanelMontageEnded");

	APrinterControlPanel_C_OnPanelMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterStateChanged
// (BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::OnPrinterStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterStateChanged");

	APrinterControlPanel_C_OnPrinterStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.ServerStartOrCancelPrint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APrinterControlPanel_C::ServerStartOrCancelPrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.ServerStartOrCancelPrint");

	APrinterControlPanel_C_ServerStartOrCancelPrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterPowerAvailableChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAvailablePower              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::OnPrinterPowerAvailableChanged(bool HasAvailablePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnPrinterPowerAvailableChanged");

	APrinterControlPanel_C_OnPrinterPowerAvailableChanged_Params params;
	params.HasAvailablePower = HasAvailablePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.OnControlledActorUseStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::OnControlledActorUseStateChanged(bool IsUsable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.OnControlledActorUseStateChanged");

	APrinterControlPanel_C_OnControlledActorUseStateChanged_Params params;
	params.IsUsable = IsUsable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APrinterControlPanel_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	APrinterControlPanel_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrinterControlPanel.PrinterControlPanel_C.ExecuteUbergraph_PrinterControlPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinterControlPanel_C::ExecuteUbergraph_PrinterControlPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanel.PrinterControlPanel_C.ExecuteUbergraph_PrinterControlPanel");

	APrinterControlPanel_C_ExecuteUbergraph_PrinterControlPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
