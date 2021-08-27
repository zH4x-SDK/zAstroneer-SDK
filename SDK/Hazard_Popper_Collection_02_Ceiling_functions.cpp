
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

// Function Hazard_Popper_Collection_02_Ceiling.Hazard_Popper_Collection_02_Ceiling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Popper_Collection_02_Ceiling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Popper_Collection_02_Ceiling.Hazard_Popper_Collection_02_Ceiling_C.UserConstructionScript");

	AHazard_Popper_Collection_02_Ceiling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
