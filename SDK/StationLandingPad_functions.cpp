
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

// Function StationLandingPad.StationLandingPad_C.Initialize Landing Zone
// (Public, BlueprintCallable, BlueprintEvent)

void AStationLandingPad_C::Initialize_Landing_Zone()
{
	static auto fn = UObject::FindObject<UFunction>("Function StationLandingPad.StationLandingPad_C.Initialize Landing Zone");

	AStationLandingPad_C_Initialize_Landing_Zone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StationLandingPad.StationLandingPad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStationLandingPad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StationLandingPad.StationLandingPad_C.UserConstructionScript");

	AStationLandingPad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
