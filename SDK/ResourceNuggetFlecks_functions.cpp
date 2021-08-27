
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

// Function ResourceNuggetFlecks.ResourceNuggetFlecks_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNuggetFlecks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNuggetFlecks.ResourceNuggetFlecks_C.UserConstructionScript");

	AResourceNuggetFlecks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNuggetFlecks.ResourceNuggetFlecks_C.SetView
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNuggetFlecks_C::SetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNuggetFlecks.ResourceNuggetFlecks_C.SetView");

	AResourceNuggetFlecks_C_SetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNuggetFlecks.ResourceNuggetFlecks_C.ExecuteUbergraph_ResourceNuggetFlecks
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceNuggetFlecks_C::ExecuteUbergraph_ResourceNuggetFlecks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNuggetFlecks.ResourceNuggetFlecks_C.ExecuteUbergraph_ResourceNuggetFlecks");

	AResourceNuggetFlecks_C_ExecuteUbergraph_ResourceNuggetFlecks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
