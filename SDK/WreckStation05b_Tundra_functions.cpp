
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

// Function WreckStation05b_Tundra.WreckStation05b_Tundra_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWreckStation05b_Tundra_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckStation05b_Tundra.WreckStation05b_Tundra_C.UserConstructionScript");

	AWreckStation05b_Tundra_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
