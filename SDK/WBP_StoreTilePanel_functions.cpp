
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

// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_StoreTilePanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnFocusReceived");

	UWBP_StoreTilePanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.PopulateItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAstroMicroTxnCombinedItem> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 categoryKeyString              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_StoreTilePanel_C::PopulateItems(const struct FString& categoryKeyString, TArray<struct FAstroMicroTxnCombinedItem>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.PopulateItems");

	UWBP_StoreTilePanel_C_PopulateItems_Params params;
	params.categoryKeyString = categoryKeyString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreTilePanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.Construct");

	UWBP_StoreTilePanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreTilePanel_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnAddedToFocusPath");

	UWBP_StoreTilePanel_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnChildAddedToFocusPath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreTilePanel_C::OnChildAddedToFocusPath(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnChildAddedToFocusPath");

	UWBP_StoreTilePanel_C_OnChildAddedToFocusPath_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnChildRemovedFromFocusPath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreTilePanel_C::OnChildRemovedFromFocusPath(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnChildRemovedFromFocusPath");

	UWBP_StoreTilePanel_C_OnChildRemovedFromFocusPath_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreTilePanel_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnRemovedFromFocusPath");

	UWBP_StoreTilePanel_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.TilePressed
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreTilePanel_C::TilePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.TilePressed");

	UWBP_StoreTilePanel_C_TilePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.TileReleased
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreTilePanel_C::TileReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.TileReleased");

	UWBP_StoreTilePanel_C_TileReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.ExecuteUbergraph_WBP_StoreTilePanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreTilePanel_C::ExecuteUbergraph_WBP_StoreTilePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.ExecuteUbergraph_WBP_StoreTilePanel");

	UWBP_StoreTilePanel_C_ExecuteUbergraph_WBP_StoreTilePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTileAddedToFocusPath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreTilePanel_C::OnTileAddedToFocusPath__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTileAddedToFocusPath__DelegateSignature");

	UWBP_StoreTilePanel_C_OnTileAddedToFocusPath__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTileReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreTilePanel_C::OnTileReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTileReleased__DelegateSignature");

	UWBP_StoreTilePanel_C_OnTileReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTilePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreTilePanel_C::OnTilePressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTilePanel.WBP_StoreTilePanel_C.OnTilePressed__DelegateSignature");

	UWBP_StoreTilePanel_C_OnTilePressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
