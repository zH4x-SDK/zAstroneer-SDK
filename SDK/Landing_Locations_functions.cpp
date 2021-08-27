
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

// Function Landing_Locations.Landing_Locations_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALanding_Locations_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Landing_Locations.Landing_Locations_C.UserConstructionScript");

	ALanding_Locations_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
