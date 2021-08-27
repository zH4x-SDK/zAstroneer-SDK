
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

// Function CameraDrillingRig.CameraDrillingRig_C.UpdateFacingAndLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Facing_Backards                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACameraDrillingRig_C::UpdateFacingAndLocation(bool Facing_Backards, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraDrillingRig.CameraDrillingRig_C.UpdateFacingAndLocation");

	ACameraDrillingRig_C_UpdateFacingAndLocation_Params params;
	params.Facing_Backards = Facing_Backards;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CameraDrillingRig.CameraDrillingRig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACameraDrillingRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraDrillingRig.CameraDrillingRig_C.UserConstructionScript");

	ACameraDrillingRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
