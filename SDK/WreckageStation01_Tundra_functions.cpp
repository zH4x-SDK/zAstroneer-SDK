
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

// Function WreckageStation01_Tundra.WreckageStation01_Tundra_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWreckageStation01_Tundra_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckageStation01_Tundra.WreckageStation01_Tundra_C.UserConstructionScript");

	AWreckageStation01_Tundra_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
