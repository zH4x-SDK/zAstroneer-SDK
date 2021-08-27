
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

// Function ResourceNugget_Carbon.ResourceNugget_Carbon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNugget_Carbon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Carbon.ResourceNugget_Carbon_C.UserConstructionScript");

	AResourceNugget_Carbon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget_Carbon.ResourceNugget_Carbon_C.SetView
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNugget_Carbon_C::SetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Carbon.ResourceNugget_Carbon_C.SetView");

	AResourceNugget_Carbon_C_SetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget_Carbon.ResourceNugget_Carbon_C.ExecuteUbergraph_ResourceNugget_Carbon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceNugget_Carbon_C::ExecuteUbergraph_ResourceNugget_Carbon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Carbon.ResourceNugget_Carbon_C.ExecuteUbergraph_ResourceNugget_Carbon");

	AResourceNugget_Carbon_C_ExecuteUbergraph_ResourceNugget_Carbon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
