
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

// Function NaturalLandingPadSlot_T4.NaturalLandingPadSlot_T4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANaturalLandingPadSlot_T4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalLandingPadSlot_T4.NaturalLandingPadSlot_T4_C.UserConstructionScript");

	ANaturalLandingPadSlot_T4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
