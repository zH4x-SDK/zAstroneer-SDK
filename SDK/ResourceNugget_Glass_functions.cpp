
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

// Function ResourceNugget_Glass.ResourceNugget_Glass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNugget_Glass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Glass.ResourceNugget_Glass_C.UserConstructionScript");

	AResourceNugget_Glass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget_Glass.ResourceNugget_Glass_C.SetView
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNugget_Glass_C::SetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Glass.ResourceNugget_Glass_C.SetView");

	AResourceNugget_Glass_C_SetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget_Glass.ResourceNugget_Glass_C.ExecuteUbergraph_ResourceNugget_Glass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceNugget_Glass_C::ExecuteUbergraph_ResourceNugget_Glass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Glass.ResourceNugget_Glass_C.ExecuteUbergraph_ResourceNugget_Glass");

	AResourceNugget_Glass_C_ExecuteUbergraph_ResourceNugget_Glass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
