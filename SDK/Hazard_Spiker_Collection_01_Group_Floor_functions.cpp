
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

// Function Hazard_Spiker_Collection_01_Group_Floor.Hazard_Spiker_Collection_01_Group_Floor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Spiker_Collection_01_Group_Floor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Spiker_Collection_01_Group_Floor.Hazard_Spiker_Collection_01_Group_Floor_C.UserConstructionScript");

	AHazard_Spiker_Collection_01_Group_Floor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
