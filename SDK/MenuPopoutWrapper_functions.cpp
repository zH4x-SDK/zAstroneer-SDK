
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

// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetUnboundedDimensionOfSubPane
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UMenuPopoutWrapper_C::GetUnboundedDimensionOfSubPane()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetUnboundedDimensionOfSubPane");

	UMenuPopoutWrapper_C_GetUnboundedDimensionOfSubPane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutPanelWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPanelWidget* UMenuPopoutWrapper_C::GetPopoutPanelWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutPanelWrapper");

	UMenuPopoutWrapper_C_GetPopoutPanelWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutOutermostContainer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPanelWidget* UMenuPopoutWrapper_C::GetPopoutOutermostContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutOutermostContainer");

	UMenuPopoutWrapper_C_GetPopoutOutermostContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapper.MenuPopoutWrapper_C.UpdateTextWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuPopoutWrapper_C::UpdateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.UpdateTextWidgets");

	UMenuPopoutWrapper_C_UpdateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPopoutWrapper.MenuPopoutWrapper_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMenuPopoutWrapper_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.LayoutWidget");

	UMenuPopoutWrapper_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutContentsWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPanelWidget* UMenuPopoutWrapper_C::GetPopoutContentsWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.GetPopoutContentsWrapper");

	UMenuPopoutWrapper_C_GetPopoutContentsWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapper.MenuPopoutWrapper_C.OnFocusIndexChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewFocusIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuPopoutWrapper_C::OnFocusIndexChanged(int NewFocusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.OnFocusIndexChanged");

	UMenuPopoutWrapper_C_OnFocusIndexChanged_Params params;
	params.NewFocusIndex = NewFocusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPopoutWrapper.MenuPopoutWrapper_C.ExecuteUbergraph_MenuPopoutWrapper
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuPopoutWrapper_C::ExecuteUbergraph_MenuPopoutWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapper.MenuPopoutWrapper_C.ExecuteUbergraph_MenuPopoutWrapper");

	UMenuPopoutWrapper_C_ExecuteUbergraph_MenuPopoutWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
