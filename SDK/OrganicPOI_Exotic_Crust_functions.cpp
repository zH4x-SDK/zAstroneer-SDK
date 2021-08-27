
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

// Function OrganicPOI_Exotic_Crust.OrganicPOI_Exotic_Crust_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOrganicPOI_Exotic_Crust_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OrganicPOI_Exotic_Crust.OrganicPOI_Exotic_Crust_C.UserConstructionScript");

	AOrganicPOI_Exotic_Crust_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
