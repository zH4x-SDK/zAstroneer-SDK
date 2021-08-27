
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

// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.CheckAwardAchievements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           PrintedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_BASE_C::CheckAwardAchievements(class APhysicalItem* PrintedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.CheckAwardAchievements");

	APrinter_Breadboards_BASE_C_CheckAwardAchievements_Params params;
	params.PrintedItem = PrintedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.AwardAchievements
// (Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::AwardAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.AwardAchievements");

	APrinter_Breadboards_BASE_C_AwardAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.OnRep_AudioLoopActive
// (BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::OnRep_AudioLoopActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.OnRep_AudioLoopActive");

	APrinter_Breadboards_BASE_C_OnRep_AudioLoopActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.SetupPrinterSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::SetupPrinterSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.SetupPrinterSlots");

	APrinter_Breadboards_BASE_C_SetupPrinterSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.SetupAnimBP
// (Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::SetupAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.SetupAnimBP");

	APrinter_Breadboards_BASE_C_SetupAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.UpdateAnim_Printing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Printing                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_BASE_C::UpdateAnim_Printing(bool Printing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.UpdateAnim_Printing");

	APrinter_Breadboards_BASE_C_UpdateAnim_Printing_Params params;
	params.Printing = Printing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.Get Power Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlotReference          Slot                           (Parm, OutParm)

void APrinter_Breadboards_BASE_C::Get_Power_Slot(struct FSlotReference* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.Get Power Slot");

	APrinter_Breadboards_BASE_C_Get_Power_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.Check Printer Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::Check_Printer_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.Check Printer Slot");

	APrinter_Breadboards_BASE_C_Check_Printer_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.UserConstructionScript");

	APrinter_Breadboards_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APrinter_Breadboards_BASE_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	APrinter_Breadboards_BASE_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrinter_Breadboards_BASE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ReceiveBeginPlay");

	APrinter_Breadboards_BASE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_BASE_C::BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature");

	APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.MULTI End View
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::MULTI_End_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.MULTI End View");

	APrinter_Breadboards_BASE_C_MULTI_End_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_BASE_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.PlacedInSlot");

	APrinter_Breadboards_BASE_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APrinter_Breadboards_BASE_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.DroppedInWorld");

	APrinter_Breadboards_BASE_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void APrinter_Breadboards_BASE_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.PickedUpFromWorld");

	APrinter_Breadboards_BASE_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.AnimationStateChanged
// (BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_BASE_C::AnimationStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.AnimationStateChanged");

	APrinter_Breadboards_BASE_C_AnimationStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_BASE_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ReceiveEndPlay");

	APrinter_Breadboards_BASE_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void APrinter_Breadboards_BASE_C::BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void APrinter_Breadboards_BASE_C::BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
// (BlueprintEvent)

void APrinter_Breadboards_BASE_C::BndEvt__Printer_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__Printer_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature");

	APrinter_Breadboards_BASE_C_BndEvt__Printer_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_BASE_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature");

	APrinter_Breadboards_BASE_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ExecuteUbergraph_Printer_Breadboards_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_BASE_C::ExecuteUbergraph_Printer_Breadboards_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_BASE.Printer_Breadboards_BASE_C.ExecuteUbergraph_Printer_Breadboards_BASE");

	APrinter_Breadboards_BASE_C_ExecuteUbergraph_Printer_Breadboards_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
