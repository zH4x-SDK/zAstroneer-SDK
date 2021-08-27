
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

// Function CreativeControls.CreativeControls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeControls_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeControls.CreativeControls_C.Construct");

	UCreativeControls_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeControls.CreativeControls_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeControls_C::CustomEvent_1(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeControls.CreativeControls_C.CustomEvent_1");

	UCreativeControls_C_CustomEvent_1_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeControls.CreativeControls_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UCreativeControls_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeControls.CreativeControls_C.SetupStylingData");

	UCreativeControls_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeControls.CreativeControls_C.ExecuteUbergraph_CreativeControls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeControls_C::ExecuteUbergraph_CreativeControls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeControls.CreativeControls_C.ExecuteUbergraph_CreativeControls");

	UCreativeControls_C_ExecuteUbergraph_CreativeControls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
