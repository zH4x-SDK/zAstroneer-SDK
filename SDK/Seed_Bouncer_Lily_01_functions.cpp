
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

// Function Seed_Bouncer_Lily_01.Seed_Bouncer_Lily_01_C.GetSeedFamilyItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  SeedFamily                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASeed_Bouncer_Lily_01_C::GetSeedFamilyItemType(class UClass** SeedFamily)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Bouncer_Lily_01.Seed_Bouncer_Lily_01_C.GetSeedFamilyItemType");

	ASeed_Bouncer_Lily_01_C_GetSeedFamilyItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeedFamily != nullptr)
		*SeedFamily = params.SeedFamily;
}


// Function Seed_Bouncer_Lily_01.Seed_Bouncer_Lily_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASeed_Bouncer_Lily_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seed_Bouncer_Lily_01.Seed_Bouncer_Lily_01_C.UserConstructionScript");

	ASeed_Bouncer_Lily_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
