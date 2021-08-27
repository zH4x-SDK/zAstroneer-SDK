
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

// Function CatalogPointBalance.CatalogPointBalance_C.GetResearchRateText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCatalogPointBalance_C::GetResearchRateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CatalogPointBalance.CatalogPointBalance_C.GetResearchRateText");

	UCatalogPointBalance_C_GetResearchRateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CatalogPointBalance.CatalogPointBalance_C.GetResearchPointsText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCatalogPointBalance_C::GetResearchPointsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CatalogPointBalance.CatalogPointBalance_C.GetResearchPointsText");

	UCatalogPointBalance_C_GetResearchPointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
