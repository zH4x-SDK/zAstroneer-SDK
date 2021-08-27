
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

// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.UpdateUseContext");

	APrinter_Breadboards_Vehicles_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ManageUseSuppression
// (Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::ManageUseSuppression()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ManageUseSuppression");

	APrinter_Breadboards_Vehicles_C_ManageUseSuppression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.GetAlignedPlatformCableSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSlotReference>  PlatformCableSlots             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FSlotReference          AlignedCableSlot               (Parm, OutParm)

void APrinter_Breadboards_Vehicles_C::GetAlignedPlatformCableSlot(TArray<struct FSlotReference>* PlatformCableSlots, struct FSlotReference* AlignedCableSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.GetAlignedPlatformCableSlot");

	APrinter_Breadboards_Vehicles_C_GetAlignedPlatformCableSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformCableSlots != nullptr)
		*PlatformCableSlots = params.PlatformCableSlots;
	if (AlignedCableSlot != nullptr)
		*AlignedCableSlot = params.AlignedCableSlot;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.SetupAnimBP
// (Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::SetupAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.SetupAnimBP");

	APrinter_Breadboards_Vehicles_C_SetupAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.Get Power Slot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlotReference          Slot                           (Parm, OutParm)

void APrinter_Breadboards_Vehicles_C::Get_Power_Slot(struct FSlotReference* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.Get Power Slot");

	APrinter_Breadboards_Vehicles_C_Get_Power_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.Check Printer Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::Check_Printer_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.Check Printer Slot");

	APrinter_Breadboards_Vehicles_C_Check_Printer_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.UserConstructionScript");

	APrinter_Breadboards_Vehicles_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APrinter_Breadboards_Vehicles_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	APrinter_Breadboards_Vehicles_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ReceiveBeginPlay");

	APrinter_Breadboards_Vehicles_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_Vehicles_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature");

	APrinter_Breadboards_Vehicles_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_Vehicles_C::BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature");

	APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::BndEvt__Printer_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.MULTI End View
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::MULTI_End_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.MULTI End View");

	APrinter_Breadboards_Vehicles_C_MULTI_End_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_Vehicles_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.PlacedInSlot");

	APrinter_Breadboards_Vehicles_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APrinter_Breadboards_Vehicles_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.DroppedInWorld");

	APrinter_Breadboards_Vehicles_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.PickedUpFromWorld");

	APrinter_Breadboards_Vehicles_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_Vehicles_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ReceiveTick");

	APrinter_Breadboards_Vehicles_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__BreadboardPrinter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::BndEvt__BreadboardPrinter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__BreadboardPrinter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	APrinter_Breadboards_Vehicles_C_BndEvt__BreadboardPrinter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.MULTI ToggleAudioLoop
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoopEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_Vehicles_C::MULTI_ToggleAudioLoop(bool LoopEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.MULTI ToggleAudioLoop");

	APrinter_Breadboards_Vehicles_C_MULTI_ToggleAudioLoop_Params params;
	params.LoopEnabled = LoopEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	APrinter_Breadboards_Vehicles_C_BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.HandleSetPrintingView
// (BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_Vehicles_C::HandleSetPrintingView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.HandleSetPrintingView");

	APrinter_Breadboards_Vehicles_C_HandleSetPrintingView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ExecuteUbergraph_Printer_Breadboards_Vehicles
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_Vehicles_C::ExecuteUbergraph_Printer_Breadboards_Vehicles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C.ExecuteUbergraph_Printer_Breadboards_Vehicles");

	APrinter_Breadboards_Vehicles_C_ExecuteUbergraph_Printer_Breadboards_Vehicles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
