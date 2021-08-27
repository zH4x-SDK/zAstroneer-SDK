
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

// Function ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModernPOI_Breadboard_T2_Partial_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C.UserConstructionScript");

	AModernPOI_Breadboard_T2_Partial_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C.SetupCableSlots
// (Public, BlueprintCallable, BlueprintEvent)

void AModernPOI_Breadboard_T2_Partial_BASE_C::SetupCableSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C.SetupCableSlots");

	AModernPOI_Breadboard_T2_Partial_BASE_C_SetupCableSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C.ExecuteUbergraph_ModernPOI_Breadboard_T2_Partial_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernPOI_Breadboard_T2_Partial_BASE_C::ExecuteUbergraph_ModernPOI_Breadboard_T2_Partial_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C.ExecuteUbergraph_ModernPOI_Breadboard_T2_Partial_BASE");

	AModernPOI_Breadboard_T2_Partial_BASE_C_ExecuteUbergraph_ModernPOI_Breadboard_T2_Partial_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
