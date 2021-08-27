
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

// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreTileBase_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnAddedToFocusPath");

	UWBP_StoreTileBase_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreTileBase_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnRemovedFromFocusPath");

	UWBP_StoreTileBase_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTileBase.WBP_StoreTileBase_C.ExecuteUbergraph_WBP_StoreTileBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreTileBase_C::ExecuteUbergraph_WBP_StoreTileBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTileBase.WBP_StoreTileBase_C.ExecuteUbergraph_WBP_StoreTileBase");

	UWBP_StoreTileBase_C_ExecuteUbergraph_WBP_StoreTileBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreTileBase_C::OnTileReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileReleased__DelegateSignature");

	UWBP_StoreTileBase_C_OnTileReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTilePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreTileBase_C::OnTilePressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTilePressed__DelegateSignature");

	UWBP_StoreTileBase_C_OnTilePressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileRemovedFromFocusPath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreTileBase_C::OnTileRemovedFromFocusPath__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileRemovedFromFocusPath__DelegateSignature");

	UWBP_StoreTileBase_C_OnTileRemovedFromFocusPath__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileAddedToFocusPath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreTileBase_C::OnTileAddedToFocusPath__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreTileBase.WBP_StoreTileBase_C.OnTileAddedToFocusPath__DelegateSignature");

	UWBP_StoreTileBase_C_OnTileAddedToFocusPath__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
