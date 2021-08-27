
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

// Function PipelineFaucet.PipelineFaucet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APipelineFaucet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipelineFaucet.PipelineFaucet_C.UserConstructionScript");

	APipelineFaucet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
