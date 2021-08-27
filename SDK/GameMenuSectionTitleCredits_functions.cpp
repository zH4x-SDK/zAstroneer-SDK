
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

// Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuSectionTitleCredits_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.GetMenuFocusWidgetSize");

	UGameMenuSectionTitleCredits_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuSectionTitleCredits_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.LayoutWidget");

	UGameMenuSectionTitleCredits_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuSectionTitleCredits_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.SetupStylingData");

	UGameMenuSectionTitleCredits_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.ExecuteUbergraph_GameMenuSectionTitleCredits
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSectionTitleCredits_C::ExecuteUbergraph_GameMenuSectionTitleCredits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitleCredits.GameMenuSectionTitleCredits_C.ExecuteUbergraph_GameMenuSectionTitleCredits");

	UGameMenuSectionTitleCredits_C_ExecuteUbergraph_GameMenuSectionTitleCredits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
