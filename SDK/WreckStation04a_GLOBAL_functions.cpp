
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

// Function WreckStation04a_GLOBAL.WreckStation04a_GLOBAL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWreckStation04a_GLOBAL_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WreckStation04a_GLOBAL.WreckStation04a_GLOBAL_C.UserConstructionScript");

	AWreckStation04a_GLOBAL_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
