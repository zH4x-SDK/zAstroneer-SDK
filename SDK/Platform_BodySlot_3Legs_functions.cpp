
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

// Function Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlatform_BodySlot_3Legs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C.UserConstructionScript");

	APlatform_BodySlot_3Legs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlatform_BodySlot_3Legs_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C.ReceiveBeginPlay");

	APlatform_BodySlot_3Legs_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C.ExecuteUbergraph_Platform_BodySlot_3Legs
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlatform_BodySlot_3Legs_C::ExecuteUbergraph_Platform_BodySlot_3Legs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_BodySlot_3Legs.Platform_BodySlot_3Legs_C.ExecuteUbergraph_Platform_BodySlot_3Legs");

	APlatform_BodySlot_3Legs_C_ExecuteUbergraph_Platform_BodySlot_3Legs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
