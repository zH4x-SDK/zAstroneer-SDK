
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

// Function PowerBar_Tiered_Dual_11.PowerBar_Tiered_Dual_10_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerBar_Tiered_Dual_10_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_Dual_11.PowerBar_Tiered_Dual_10_C.UserConstructionScript");

	APowerBar_Tiered_Dual_10_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Tiered_Dual_11.PowerBar_Tiered_Dual_10_C.Set View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBar_Tiered_Dual_10_C::Set_View(float Alpha, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_Dual_11.PowerBar_Tiered_Dual_10_C.Set View");

	APowerBar_Tiered_Dual_10_C_Set_View_Params params;
	params.Alpha = Alpha;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Tiered_Dual_11.PowerBar_Tiered_Dual_10_C.ExecuteUbergraph_PowerBar_Tiered_Dual_11
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBar_Tiered_Dual_10_C::ExecuteUbergraph_PowerBar_Tiered_Dual_11(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_Dual_11.PowerBar_Tiered_Dual_10_C.ExecuteUbergraph_PowerBar_Tiered_Dual_11");

	APowerBar_Tiered_Dual_10_C_ExecuteUbergraph_PowerBar_Tiered_Dual_11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
