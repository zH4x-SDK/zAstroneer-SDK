
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

// Function OrganicPOI_Radiated_Core.OrganicPOI_Radiated_Core_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOrganicPOI_Radiated_Core_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OrganicPOI_Radiated_Core.OrganicPOI_Radiated_Core_C.UserConstructionScript");

	AOrganicPOI_Radiated_Core_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
