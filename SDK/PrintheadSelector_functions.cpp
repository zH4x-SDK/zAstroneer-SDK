
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

// Function PrintheadSelector.PrintheadSelector_C.SpoofNavRightPress
// (Public, BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::SpoofNavRightPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.SpoofNavRightPress");

	APrintheadSelector_C_SpoofNavRightPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.SpoofNavLeftPress
// (Public, BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::SpoofNavLeftPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.SpoofNavLeftPress");

	APrintheadSelector_C_SpoofNavLeftPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.SpoofPrintPress
// (Public, BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::SpoofPrintPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.SpoofPrintPress");

	APrintheadSelector_C_SpoofPrintPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.Confirm
// (Public, BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.Confirm");

	APrintheadSelector_C_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.NavigateRight
// (Public, BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::NavigateRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.NavigateRight");

	APrintheadSelector_C_NavigateRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.NavigateLeft
// (Public, BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::NavigateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.NavigateLeft");

	APrintheadSelector_C_NavigateLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.UpdateStatusText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrinterComponent*       Printer                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrintheadSelector_C::UpdateStatusText(class UPrinterComponent* Printer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.UpdateStatusText");

	APrintheadSelector_C_UpdateStatusText_Params params;
	params.Printer = Printer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.ShowButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrintheadSelector_C::ShowButtons(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.ShowButtons");

	APrintheadSelector_C_ShowButtons_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.Set Printing View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrinterComponent*       Printer                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrintheadSelector_C::Set_Printing_View(class UPrinterComponent* Printer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.Set Printing View");

	APrintheadSelector_C_Set_Printing_View_Params params;
	params.Printer = Printer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.UserConstructionScript");

	APrintheadSelector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrintheadSelector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.ReceiveBeginPlay");

	APrintheadSelector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.Bind Printer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrinterComponent*       Printer                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrintheadSelector_C::Bind_Printer(class UPrinterComponent* Printer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.Bind Printer");

	APrintheadSelector_C_Bind_Printer_Params params;
	params.Printer = Printer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.OnSetIndicatorView_Event_1
// (BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::OnSetIndicatorView_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.OnSetIndicatorView_Event_1");

	APrintheadSelector_C_OnSetIndicatorView_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.OnSetIndicatorView_Event_2
// (BlueprintCallable, BlueprintEvent)

void APrintheadSelector_C::OnSetIndicatorView_Event_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.OnSetIndicatorView_Event_2");

	APrintheadSelector_C_OnSetIndicatorView_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_LeftButton_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void APrintheadSelector_C::BndEvt__ControlPanelButtonChildActor_LeftButton_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_LeftButton_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	APrintheadSelector_C_BndEvt__ControlPanelButtonChildActor_LeftButton_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_RightButton_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void APrintheadSelector_C::BndEvt__ControlPanelButtonChildActor_RightButton_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_RightButton_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	APrintheadSelector_C_BndEvt__ControlPanelButtonChildActor_RightButton_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_PrintButton_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void APrintheadSelector_C::BndEvt__ControlPanelButtonChildActor_PrintButton_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.BndEvt__ControlPanelButtonChildActor_PrintButton_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	APrintheadSelector_C_BndEvt__ControlPanelButtonChildActor_PrintButton_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrintheadSelector.PrintheadSelector_C.ExecuteUbergraph_PrintheadSelector
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrintheadSelector_C::ExecuteUbergraph_PrintheadSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrintheadSelector.PrintheadSelector_C.ExecuteUbergraph_PrintheadSelector");

	APrintheadSelector_C_ExecuteUbergraph_PrintheadSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
