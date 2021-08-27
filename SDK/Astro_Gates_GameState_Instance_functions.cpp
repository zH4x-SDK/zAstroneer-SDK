
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

// Function Astro_Gates_GameState_Instance.Astro_Gates_GameState_Instance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAstro_Gates_GameState_Instance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Astro_Gates_GameState_Instance.Astro_Gates_GameState_Instance_C.UserConstructionScript");

	AAstro_Gates_GameState_Instance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
