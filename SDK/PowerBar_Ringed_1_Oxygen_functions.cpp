
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

// Function PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerBar_Ringed_1_Oxygen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C.UserConstructionScript");

	APowerBar_Ringed_1_Oxygen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C.Set View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBar_Ringed_1_Oxygen_C::Set_View(float Alpha, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C.Set View");

	APowerBar_Ringed_1_Oxygen_C_Set_View_Params params;
	params.Alpha = Alpha;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C.ExecuteUbergraph_PowerBar_Ringed_1_Oxygen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBar_Ringed_1_Oxygen_C::ExecuteUbergraph_PowerBar_Ringed_1_Oxygen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C.ExecuteUbergraph_PowerBar_Ringed_1_Oxygen");

	APowerBar_Ringed_1_Oxygen_C_ExecuteUbergraph_PowerBar_Ringed_1_Oxygen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
