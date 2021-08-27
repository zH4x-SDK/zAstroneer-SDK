
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

// Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.OnRedeemFinished_9CBD6194420A145851C30B8FEBE05E30
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         NewItems                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Succeeded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorMsg                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void URedeemCodePopoutContents_C::OnRedeemFinished_9CBD6194420A145851C30B8FEBE05E30(TArray<struct FString> NewItems, bool Succeeded, const struct FString& ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.OnRedeemFinished_9CBD6194420A145851C30B8FEBE05E30");

	URedeemCodePopoutContents_C_OnRedeemFinished_9CBD6194420A145851C30B8FEBE05E30_Params params;
	params.NewItems = NewItems;
	params.Succeeded = Succeeded;
	params.ErrorMsg = ErrorMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodePopoutContents_C::BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature");

	URedeemCodePopoutContents_C_BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodePopoutContents_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature");

	URedeemCodePopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.BndEvt__CodeNameEntry_K2Node_ComponentBoundEvent_111_OnFocusItemGenericInteraction__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodePopoutContents_C::BndEvt__CodeNameEntry_K2Node_ComponentBoundEvent_111_OnFocusItemGenericInteraction__DelegateSignature(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.BndEvt__CodeNameEntry_K2Node_ComponentBoundEvent_111_OnFocusItemGenericInteraction__DelegateSignature");

	URedeemCodePopoutContents_C_BndEvt__CodeNameEntry_K2Node_ComponentBoundEvent_111_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.MousePosition = MousePosition;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.ExecuteUbergraph_RedeemCodePopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodePopoutContents_C::ExecuteUbergraph_RedeemCodePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.ExecuteUbergraph_RedeemCodePopoutContents");

	URedeemCodePopoutContents_C_ExecuteUbergraph_RedeemCodePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.DedicatedServerAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URedeemCodePopoutContents_C::DedicatedServerAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodePopoutContents.RedeemCodePopoutContents_C.DedicatedServerAdded__DelegateSignature");

	URedeemCodePopoutContents_C_DedicatedServerAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
