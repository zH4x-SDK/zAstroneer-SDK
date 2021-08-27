
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

// Function PackagedItemTester.PackagedItemTester_C.UpdateDisplayText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItemTester_C::UpdateDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.UpdateDisplayText");

	APackagedItemTester_C_UpdateDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItemTester_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.UserConstructionScript");

	APackagedItemTester_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APackagedItemTester_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.ReceiveBeginPlay");

	APackagedItemTester_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
// (BlueprintEvent)

void APackagedItemTester_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature");

	APackagedItemTester_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.BndEvt__prev button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature
// (BlueprintEvent)

void APackagedItemTester_C::BndEvt__prev_button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.BndEvt__prev button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature");

	APackagedItemTester_C_BndEvt__prev_button_K2Node_ComponentBoundEvent_0_ComponentOnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.BndEvt__next button_K2Node_ComponentBoundEvent_1_ComponentOnButtonClicked__DelegateSignature
// (BlueprintEvent)

void APackagedItemTester_C::BndEvt__next_button_K2Node_ComponentBoundEvent_1_ComponentOnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.BndEvt__next button_K2Node_ComponentBoundEvent_1_ComponentOnButtonClicked__DelegateSignature");

	APackagedItemTester_C_BndEvt__next_button_K2Node_ComponentBoundEvent_1_ComponentOnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItemTester_C::OnSetItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.OnSetItem");

	APackagedItemTester_C_OnSetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.OnReleaseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItemTester_C::OnReleaseItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.OnReleaseItem");

	APackagedItemTester_C_OnReleaseItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItemTester.PackagedItemTester_C.ExecuteUbergraph_PackagedItemTester
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItemTester_C::ExecuteUbergraph_PackagedItemTester(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItemTester.PackagedItemTester_C.ExecuteUbergraph_PackagedItemTester");

	APackagedItemTester_C_ExecuteUbergraph_PackagedItemTester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
