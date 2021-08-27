
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

// Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuSectionDividerCredits_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.GetMenuFocusWidgetSize");

	UGameMenuSectionDividerCredits_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuSectionDividerCredits_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.LayoutWidget");

	UGameMenuSectionDividerCredits_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuSectionDividerCredits_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.SetupStylingData");

	UGameMenuSectionDividerCredits_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.ExecuteUbergraph_GameMenuSectionDividerCredits
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSectionDividerCredits_C::ExecuteUbergraph_GameMenuSectionDividerCredits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionDividerCredits.GameMenuSectionDividerCredits_C.ExecuteUbergraph_GameMenuSectionDividerCredits");

	UGameMenuSectionDividerCredits_C_ExecuteUbergraph_GameMenuSectionDividerCredits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
