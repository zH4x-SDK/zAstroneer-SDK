
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

// Function GameMenuSectionDivider.GameMenuSectionDivider_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuSectionDivider_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDivider.GameMenuSectionDivider_C.GetMenuFocusWidgetSize");

	UGameMenuSectionDivider_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionDivider.GameMenuSectionDivider_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuSectionDivider_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDivider.GameMenuSectionDivider_C.LayoutWidget");

	UGameMenuSectionDivider_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionDivider.GameMenuSectionDivider_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuSectionDivider_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDivider.GameMenuSectionDivider_C.SetupStylingData");

	UGameMenuSectionDivider_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSectionDivider.GameMenuSectionDivider_C.ExecuteUbergraph_GameMenuSectionDivider
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSectionDivider_C::ExecuteUbergraph_GameMenuSectionDivider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDivider.GameMenuSectionDivider_C.ExecuteUbergraph_GameMenuSectionDivider");

	UGameMenuSectionDivider_C_ExecuteUbergraph_GameMenuSectionDivider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
