
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

// Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_P8_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.UserConstructionScript");

	APlatform_Standard_T4x1_P8_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.SetupPrimarySlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_P8_C::SetupPrimarySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.SetupPrimarySlots");

	APlatform_Standard_T4x1_P8_C_SetupPrimarySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_P8_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.SetupCableSlots");

	APlatform_Standard_T4x1_P8_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.SetupSecondarySlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_Standard_T4x1_P8_C::SetupSecondarySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.SetupSecondarySlots");

	APlatform_Standard_T4x1_P8_C_SetupSecondarySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.ExecuteUbergraph_Platform_Standard_T4x1_P8
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlatform_Standard_T4x1_P8_C::ExecuteUbergraph_Platform_Standard_T4x1_P8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_Standard_T4x1_P8.Platform_Standard_T4x1_P8_C.ExecuteUbergraph_Platform_Standard_T4x1_P8");

	APlatform_Standard_T4x1_P8_C_ExecuteUbergraph_Platform_Standard_T4x1_P8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
