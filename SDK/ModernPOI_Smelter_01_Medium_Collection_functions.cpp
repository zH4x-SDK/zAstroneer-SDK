
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

// Function ModernPOI_Smelter_01_Medium_Collection.ModernPOI_Smelter_01_Medium_Collection_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModernPOI_Smelter_01_Medium_Collection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Smelter_01_Medium_Collection.ModernPOI_Smelter_01_Medium_Collection_C.UserConstructionScript");

	AModernPOI_Smelter_01_Medium_Collection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif