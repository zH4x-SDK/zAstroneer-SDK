
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

// Function Item_ModernPOI_Wrecked_PanelSm.Item_ModernPOI_Wrecked_PanelSm_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AItem_ModernPOI_Wrecked_PanelSm_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_ModernPOI_Wrecked_PanelSm.Item_ModernPOI_Wrecked_PanelSm_C.GetBodySlotLegacy");

	AItem_ModernPOI_Wrecked_PanelSm_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Item_ModernPOI_Wrecked_PanelSm.Item_ModernPOI_Wrecked_PanelSm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_ModernPOI_Wrecked_PanelSm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_ModernPOI_Wrecked_PanelSm.Item_ModernPOI_Wrecked_PanelSm_C.UserConstructionScript");

	AItem_ModernPOI_Wrecked_PanelSm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
