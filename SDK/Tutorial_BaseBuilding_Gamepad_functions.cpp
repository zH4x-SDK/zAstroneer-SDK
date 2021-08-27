
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

// Function Tutorial_BaseBuilding_Gamepad.Tutorial_BaseBuilding_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorial_BaseBuilding_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_BaseBuilding_Gamepad.Tutorial_BaseBuilding_Gamepad_C.Construct");

	UTutorial_BaseBuilding_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_BaseBuilding_Gamepad.Tutorial_BaseBuilding_Gamepad_C.ExecuteUbergraph_Tutorial_BaseBuilding_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_BaseBuilding_Gamepad_C::ExecuteUbergraph_Tutorial_BaseBuilding_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_BaseBuilding_Gamepad.Tutorial_BaseBuilding_Gamepad_C.ExecuteUbergraph_Tutorial_BaseBuilding_Gamepad");

	UTutorial_BaseBuilding_Gamepad_C_ExecuteUbergraph_Tutorial_BaseBuilding_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
