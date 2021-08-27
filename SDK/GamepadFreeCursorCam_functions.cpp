
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

// Function GamepadFreeCursorCam.GamepadFreeCursorCam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGamepadFreeCursorCam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadFreeCursorCam.GamepadFreeCursorCam_C.UserConstructionScript");

	AGamepadFreeCursorCam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
