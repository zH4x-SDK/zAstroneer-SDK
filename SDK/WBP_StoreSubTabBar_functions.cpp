
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

// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.GetActiveTabString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TabString                      (Parm, OutParm, ZeroConstructor)

void UWBP_StoreSubTabBar_C::GetActiveTabString(struct FString* TabString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.GetActiveTabString");

	UWBP_StoreSubTabBar_C_GetActiveTabString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TabString != nullptr)
		*TabString = params.TabString;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnFakeKeyDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreSubTabBar_C::OnFakeKeyDown(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnFakeKeyDown");

	UWBP_StoreSubTabBar_C_OnFakeKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.PopulateTabs
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StoreSubTabBar_C::PopulateTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.PopulateTabs");

	UWBP_StoreSubTabBar_C_PopulateTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.PreConstruct");

	UWBP_StoreSubTabBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreSubTabBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.Construct");

	UWBP_StoreSubTabBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnInputDeviceChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabBar_C::OnInputDeviceChanged_Event_1(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnInputDeviceChanged_Event_1");

	UWBP_StoreSubTabBar_C_OnInputDeviceChanged_Event_1_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnTabCategorySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             SelectedWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabBar_C::OnTabCategorySelected(class UUserWidget* SelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnTabCategorySelected");

	UWBP_StoreSubTabBar_C_OnTabCategorySelected_Params params;
	params.SelectedWidget = SelectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.ExecuteUbergraph_WBP_StoreSubTabBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSubTabBar_C::ExecuteUbergraph_WBP_StoreSubTabBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.ExecuteUbergraph_WBP_StoreSubTabBar");

	UWBP_StoreSubTabBar_C_ExecuteUbergraph_WBP_StoreSubTabBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnTabIndexChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ActiveIndexString              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_StoreSubTabBar_C::OnTabIndexChanged__DelegateSignature(const struct FString& ActiveIndexString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnTabIndexChanged__DelegateSignature");

	UWBP_StoreSubTabBar_C_OnTabIndexChanged__DelegateSignature_Params params;
	params.ActiveIndexString = ActiveIndexString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnGamepadInputWhileFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreSubTabBar_C::OnGamepadInputWhileFocused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSubTabBar.WBP_StoreSubTabBar_C.OnGamepadInputWhileFocused__DelegateSignature");

	UWBP_StoreSubTabBar_C_OnGamepadInputWhileFocused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
