
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

// Function GameMenuTabBar.GameMenuTabBar_C.GetHeightOfTabBar
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameMenuTabBar_C::GetHeightOfTabBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBar.GameMenuTabBar_C.GetHeightOfTabBar");

	UGameMenuTabBar_C_GetHeightOfTabBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuTabBar.GameMenuTabBar_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuTabBar_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBar.GameMenuTabBar_C.LayoutWidget");

	UGameMenuTabBar_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuTabBar.GameMenuTabBar_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuTabBar_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBar.GameMenuTabBar_C.SetupStylingData");

	UGameMenuTabBar_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBar.GameMenuTabBar_C.ExecuteUbergraph_GameMenuTabBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBar_C::ExecuteUbergraph_GameMenuTabBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBar.GameMenuTabBar_C.ExecuteUbergraph_GameMenuTabBar");

	UGameMenuTabBar_C_ExecuteUbergraph_GameMenuTabBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
