
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

// Function Trailer_Cam_02.Trailer_Cam_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrailer_Cam_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trailer_Cam_02.Trailer_Cam_02_C.UserConstructionScript");

	ATrailer_Cam_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
