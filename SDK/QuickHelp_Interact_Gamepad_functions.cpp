
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

// Function QuickHelp_Interact_Gamepad.QuickHelp_Interact_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickHelp_Interact_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickHelp_Interact_Gamepad.QuickHelp_Interact_Gamepad_C.Construct");

	UQuickHelp_Interact_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickHelp_Interact_Gamepad.QuickHelp_Interact_Gamepad_C.ExecuteUbergraph_QuickHelp_Interact_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickHelp_Interact_Gamepad_C::ExecuteUbergraph_QuickHelp_Interact_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickHelp_Interact_Gamepad.QuickHelp_Interact_Gamepad_C.ExecuteUbergraph_QuickHelp_Interact_Gamepad");

	UQuickHelp_Interact_Gamepad_C_ExecuteUbergraph_QuickHelp_Interact_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
