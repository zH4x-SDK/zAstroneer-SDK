
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

// Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_T3x2_P4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.UserConstructionScript");

	APlatform_Standard_T4x1_T3x2_P4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.SetupPrimarySlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_T3x2_P4_C::SetupPrimarySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.SetupPrimarySlots");

	APlatform_Standard_T4x1_T3x2_P4_C_SetupPrimarySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.SetupSecondarySlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_T3x2_P4_C::SetupSecondarySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.SetupSecondarySlots");

	APlatform_Standard_T4x1_T3x2_P4_C_SetupSecondarySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_T3x2_P4_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.SetupCableSlots");

	APlatform_Standard_T4x1_T3x2_P4_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.ExecuteUbergraph_Platform_Standard_T4x1_T3x2_P4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlatform_Standard_T4x1_T3x2_P4_C::ExecuteUbergraph_Platform_Standard_T4x1_T3x2_P4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_T3x2_P4.Platform_Standard_T4x1_T3x2_P4_C.ExecuteUbergraph_Platform_Standard_T4x1_T3x2_P4");

	APlatform_Standard_T4x1_T3x2_P4_C_ExecuteUbergraph_Platform_Standard_T4x1_T3x2_P4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
