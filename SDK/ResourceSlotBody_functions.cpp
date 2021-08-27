
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

// Function ResourceSlotBody.ResourceSlotBody_C.AcceptsBodySlot_1
// (BlueprintCallable, BlueprintEvent)

void AResourceSlotBody_C::AcceptsBodySlot_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceSlotBody.ResourceSlotBody_C.AcceptsBodySlot_1");

	AResourceSlotBody_C_AcceptsBodySlot_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceSlotBody.ResourceSlotBody_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceSlotBody_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceSlotBody.ResourceSlotBody_C.UserConstructionScript");

	AResourceSlotBody_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
