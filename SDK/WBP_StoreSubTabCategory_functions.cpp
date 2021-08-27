
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

// Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.SetSelectedState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabCategory_C::SetSelectedState(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.SetSelectedState");

	UWBP_StoreSubTabCategory_C_SetSelectedState_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabCategory_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.PreConstruct");

	UWBP_StoreSubTabCategory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreSubTabCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreSubTabCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreSubTabCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreSubTabCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreSubTabCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_StoreSubTabCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.ExecuteUbergraph_WBP_StoreSubTabCategory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabCategory_C::ExecuteUbergraph_WBP_StoreSubTabCategory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.ExecuteUbergraph_WBP_StoreSubTabCategory");

	UWBP_StoreSubTabCategory_C_ExecuteUbergraph_WBP_StoreSubTabCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.OnTabCategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             SelectedWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabCategory_C::OnTabCategorySelected__DelegateSignature(class UUserWidget* SelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabCategory.WBP_StoreSubTabCategory_C.OnTabCategorySelected__DelegateSignature");

	UWBP_StoreSubTabCategory_C_OnTabCategorySelected__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
