
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

// Function TetherAttachSlot.TetherAttachSlot_C.AcceptsConnection
// (BlueprintCallable, BlueprintEvent)

void ATetherAttachSlot_C::AcceptsConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherAttachSlot.TetherAttachSlot_C.AcceptsConnection");

	ATetherAttachSlot_C_AcceptsConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TetherAttachSlot.TetherAttachSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATetherAttachSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TetherAttachSlot.TetherAttachSlot_C.UserConstructionScript");

	ATetherAttachSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
