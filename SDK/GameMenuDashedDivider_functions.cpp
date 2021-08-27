
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

// Function GameMenuDashedDivider.GameMenuDashedDivider_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuDashedDivider_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDashedDivider.GameMenuDashedDivider_C.GetMenuFocusWidgetSize");

	UGameMenuDashedDivider_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuDashedDivider.GameMenuDashedDivider_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuDashedDivider_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDashedDivider.GameMenuDashedDivider_C.SetupStylingData");

	UGameMenuDashedDivider_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuDashedDivider.GameMenuDashedDivider_C.ExecuteUbergraph_GameMenuDashedDivider
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuDashedDivider_C::ExecuteUbergraph_GameMenuDashedDivider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuDashedDivider.GameMenuDashedDivider_C.ExecuteUbergraph_GameMenuDashedDivider");

	UGameMenuDashedDivider_C_ExecuteUbergraph_GameMenuDashedDivider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
