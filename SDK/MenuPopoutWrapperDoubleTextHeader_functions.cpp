
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

// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetUnboundedDimensionOfSubPane
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UMenuPopoutWrapperDoubleTextHeader_C::GetUnboundedDimensionOfSubPane()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetUnboundedDimensionOfSubPane");

	UMenuPopoutWrapperDoubleTextHeader_C_GetUnboundedDimensionOfSubPane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetPopoutPanelWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPanelWidget* UMenuPopoutWrapperDoubleTextHeader_C::GetPopoutPanelWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetPopoutPanelWrapper");

	UMenuPopoutWrapperDoubleTextHeader_C_GetPopoutPanelWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetPopoutOutermostContainer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPanelWidget* UMenuPopoutWrapperDoubleTextHeader_C::GetPopoutOutermostContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetPopoutOutermostContainer");

	UMenuPopoutWrapperDoubleTextHeader_C_GetPopoutOutermostContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.UpdateTextWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuPopoutWrapperDoubleTextHeader_C::UpdateTextWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.UpdateTextWidgets");

	UMenuPopoutWrapperDoubleTextHeader_C_UpdateTextWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMenuPopoutWrapperDoubleTextHeader_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.LayoutWidget");

	UMenuPopoutWrapperDoubleTextHeader_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetPopoutContentsWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPanelWidget* UMenuPopoutWrapperDoubleTextHeader_C::GetPopoutContentsWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.GetPopoutContentsWrapper");

	UMenuPopoutWrapperDoubleTextHeader_C_GetPopoutContentsWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.OnFocusIndexChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewFocusIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuPopoutWrapperDoubleTextHeader_C::OnFocusIndexChanged(int NewFocusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.OnFocusIndexChanged");

	UMenuPopoutWrapperDoubleTextHeader_C_OnFocusIndexChanged_Params params;
	params.NewFocusIndex = NewFocusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.ExecuteUbergraph_MenuPopoutWrapperDoubleTextHeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuPopoutWrapperDoubleTextHeader_C::ExecuteUbergraph_MenuPopoutWrapperDoubleTextHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPopoutWrapperDoubleTextHeader.MenuPopoutWrapperDoubleTextHeader_C.ExecuteUbergraph_MenuPopoutWrapperDoubleTextHeader");

	UMenuPopoutWrapperDoubleTextHeader_C_ExecuteUbergraph_MenuPopoutWrapperDoubleTextHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
