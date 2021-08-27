
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

// Function WBP_StoreMenu.WBP_StoreMenu_C.UpdateClientDataUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_StoreMenu_C::UpdateClientDataUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.UpdateClientDataUI");

	UWBP_StoreMenu_C_UpdateClientDataUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.PreviewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroMicroTxnCombinedItem Item                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreMenu_C::PreviewItem(const struct FAstroMicroTxnCombinedItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.PreviewItem");

	UWBP_StoreMenu_C_PreviewItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BuildStoreItemList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FilterTag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FAstroMicroTxnCombinedItem> OutItems                       (Parm, OutParm, ZeroConstructor)

void UWBP_StoreMenu_C::BuildStoreItemList(const struct FString& FilterTag, TArray<struct FAstroMicroTxnCombinedItem>* OutItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BuildStoreItemList");

	UWBP_StoreMenu_C_BuildStoreItemList_Params params;
	params.FilterTag = FilterTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItems != nullptr)
		*OutItems = params.OutItems;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_StoreMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.OnKeyDown");

	UWBP_StoreMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_StoreMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.OnFocusReceived");

	UWBP_StoreMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.PreConstruct");

	UWBP_StoreMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.Construct");

	UWBP_StoreMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreMenu_C::BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__StoreBuyPanel_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreMenu_C::BndEvt__StoreBuyPanel_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__StoreBuyPanel_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__StoreBuyPanel_K2Node_ComponentBoundEvent_0_OnGamepadInputWhileFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_2_OnTabIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 ActiveIndexString              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_StoreMenu_C::BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_2_OnTabIndexChanged__DelegateSignature(const struct FString& ActiveIndexString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_2_OnTabIndexChanged__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__WBP_StoreSubTabBar_K2Node_ComponentBoundEvent_2_OnTabIndexChanged__DelegateSignature_Params params;
	params.ActiveIndexString = ActiveIndexString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BeginHold
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreMenu_C::BeginHold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BeginHold");

	UWBP_StoreMenu_C_BeginHold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.HoldSuccess
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreMenu_C::HoldSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.HoldSuccess");

	UWBP_StoreMenu_C_HoldSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.HoldCancel
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreMenu_C::HoldCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.HoldCancel");

	UWBP_StoreMenu_C_HoldCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreMenu_C::BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreMenu_C::BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__BuyAstrobucksButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreItemPanel_K2Node_ComponentBoundEvent_0_OnTileAddedToFocusPath__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreMenu_C::BndEvt__WBP_StoreItemPanel_K2Node_ComponentBoundEvent_0_OnTileAddedToFocusPath__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.BndEvt__WBP_StoreItemPanel_K2Node_ComponentBoundEvent_0_OnTileAddedToFocusPath__DelegateSignature");

	UWBP_StoreMenu_C_BndEvt__WBP_StoreItemPanel_K2Node_ComponentBoundEvent_0_OnTileAddedToFocusPath__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.OnPlayFabTxnCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreMenu_C::OnPlayFabTxnCompleted(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.OnPlayFabTxnCompleted");

	UWBP_StoreMenu_C_OnPlayFabTxnCompleted_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.OnClientDataRefreshed
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreMenu_C::OnClientDataRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.OnClientDataRefreshed");

	UWBP_StoreMenu_C_OnClientDataRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreMenu.WBP_StoreMenu_C.ExecuteUbergraph_WBP_StoreMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreMenu_C::ExecuteUbergraph_WBP_StoreMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreMenu.WBP_StoreMenu_C.ExecuteUbergraph_WBP_StoreMenu");

	UWBP_StoreMenu_C_ExecuteUbergraph_WBP_StoreMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
