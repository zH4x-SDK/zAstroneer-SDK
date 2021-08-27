
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

// Function Any_Item_Indicator.Any_Item_Indicator_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AAny_Item_Indicator_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Any_Item_Indicator.Any_Item_Indicator_C.GetBodySlotLegacy");

	AAny_Item_Indicator_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Any_Item_Indicator.Any_Item_Indicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAny_Item_Indicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Any_Item_Indicator.Any_Item_Indicator_C.UserConstructionScript");

	AAny_Item_Indicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
