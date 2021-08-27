
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

// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UManageDedicatedServerPopout_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.LayoutWidget");

	UManageDedicatedServerPopout_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageDedicatedServerPopout_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature");

	UManageDedicatedServerPopout_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageDedicatedServerPopout_C::BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UManageDedicatedServerPopout_C_BndEvt__JoinServer_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_388_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageDedicatedServerPopout_C::BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_388_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_388_OnFocusItemGenericInteraction__DelegateSignature");

	UManageDedicatedServerPopout_C_BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_388_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__DeleteFromFavorites_K2Node_ComponentBoundEvent_444_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageDedicatedServerPopout_C::BndEvt__DeleteFromFavorites_K2Node_ComponentBoundEvent_444_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__DeleteFromFavorites_K2Node_ComponentBoundEvent_444_OnFocusItemGenericInteraction__DelegateSignature");

	UManageDedicatedServerPopout_C_BndEvt__DeleteFromFavorites_K2Node_ComponentBoundEvent_444_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UManageDedicatedServerPopout_C::BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature");

	UManageDedicatedServerPopout_C_BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UManageDedicatedServerPopout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.Construct");

	UManageDedicatedServerPopout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntryDoubleText_Edit_C* TextEditWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   newText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UManageDedicatedServerPopout_C::BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature");

	UManageDedicatedServerPopout_C_BndEvt__PasswordEntry2_K2Node_ComponentBoundEvent_1_OnTextEntryCompleted__DelegateSignature_Params params;
	params.TextEditWidget = TextEditWidget;
	params.newText = newText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageDedicatedServerPopout_C::CustomEvent_1(bool success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.CustomEvent_1");

	UManageDedicatedServerPopout_C_CustomEvent_1_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.ExecuteUbergraph_ManageDedicatedServerPopout
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UManageDedicatedServerPopout_C::ExecuteUbergraph_ManageDedicatedServerPopout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.ExecuteUbergraph_ManageDedicatedServerPopout");

	UManageDedicatedServerPopout_C_ExecuteUbergraph_ManageDedicatedServerPopout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.DedicatedServerUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UManageDedicatedServerPopout_C::DedicatedServerUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManageDedicatedServerPopout.ManageDedicatedServerPopout_C.DedicatedServerUpdated__DelegateSignature");

	UManageDedicatedServerPopout_C_DedicatedServerUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
