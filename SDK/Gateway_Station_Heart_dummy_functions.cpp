
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

// Function Gateway_Station_Heart_dummy.Gateway_Station_Heart_Dummy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGateway_Station_Heart_Dummy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station_Heart_dummy.Gateway_Station_Heart_Dummy_C.UserConstructionScript");

	AGateway_Station_Heart_Dummy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
