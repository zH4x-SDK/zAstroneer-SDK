
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

// Function GameMenuSectionTitle.GameMenuSectionTitle_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuSectionTitle_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitle.GameMenuSectionTitle_C.GetMenuFocusWidgetSize");

	UGameMenuSectionTitle_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionTitle.GameMenuSectionTitle_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuSectionTitle_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitle.GameMenuSectionTitle_C.LayoutWidget");

	UGameMenuSectionTitle_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuSectionTitle.GameMenuSectionTitle_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuSectionTitle_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitle.GameMenuSectionTitle_C.SetupStylingData");

	UGameMenuSectionTitle_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuSectionTitle.GameMenuSectionTitle_C.ExecuteUbergraph_GameMenuSectionTitle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuSectionTitle_C::ExecuteUbergraph_GameMenuSectionTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuSectionTitle.GameMenuSectionTitle_C.ExecuteUbergraph_GameMenuSectionTitle");

	UGameMenuSectionTitle_C_ExecuteUbergraph_GameMenuSectionTitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
