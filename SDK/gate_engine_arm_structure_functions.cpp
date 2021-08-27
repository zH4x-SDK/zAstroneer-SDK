
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

// Function gate_engine_arm_structure.gate_engine_arm_structure_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Agate_engine_arm_structure_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gate_engine_arm_structure.gate_engine_arm_structure_C.UserConstructionScript");

	Agate_engine_arm_structure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
