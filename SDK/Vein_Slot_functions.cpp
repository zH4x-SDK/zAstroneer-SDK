
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

// Function Vein_Slot.Vein_Slot_C.AcceptsItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVein_Slot_C::AcceptsItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vein_Slot.Vein_Slot_C.AcceptsItem");

	AVein_Slot_C_AcceptsItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vein_Slot.Vein_Slot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVein_Slot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vein_Slot.Vein_Slot_C.UserConstructionScript");

	AVein_Slot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
