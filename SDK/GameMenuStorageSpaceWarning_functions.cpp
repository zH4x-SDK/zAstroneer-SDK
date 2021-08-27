
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

// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuStorageSpaceWarning_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.UpdateText");

	UGameMenuStorageSpaceWarning_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.GetMenuFocusWidgetSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuStorageSpaceWarning_C::GetMenuFocusWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.GetMenuFocusWidgetSize");

	UGameMenuStorageSpaceWarning_C_GetMenuFocusWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuStorageSpaceWarning_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.LayoutWidget");

	UGameMenuStorageSpaceWarning_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuStorageSpaceWarning_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.SetupStylingData");

	UGameMenuStorageSpaceWarning_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.ExecuteUbergraph_GameMenuStorageSpaceWarning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuStorageSpaceWarning_C::ExecuteUbergraph_GameMenuStorageSpaceWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuStorageSpaceWarning.GameMenuStorageSpaceWarning_C.ExecuteUbergraph_GameMenuStorageSpaceWarning");

	UGameMenuStorageSpaceWarning_C_ExecuteUbergraph_GameMenuStorageSpaceWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
