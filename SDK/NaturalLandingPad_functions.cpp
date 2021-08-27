
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

// Function NaturalLandingPad.NaturalLandingPad_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANaturalLandingPad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalLandingPad.NaturalLandingPad_C.UserConstructionScript");

	ANaturalLandingPad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NaturalLandingPad.NaturalLandingPad_C.ItemSetOnLandingPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANaturalLandingPad_C::ItemSetOnLandingPad(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalLandingPad.NaturalLandingPad_C.ItemSetOnLandingPad");

	ANaturalLandingPad_C_ItemSetOnLandingPad_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NaturalLandingPad.NaturalLandingPad_C.ItemRemovedFromLandingPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANaturalLandingPad_C::ItemRemovedFromLandingPad(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalLandingPad.NaturalLandingPad_C.ItemRemovedFromLandingPad");

	ANaturalLandingPad_C_ItemRemovedFromLandingPad_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NaturalLandingPad.NaturalLandingPad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANaturalLandingPad_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalLandingPad.NaturalLandingPad_C.ReceiveBeginPlay");

	ANaturalLandingPad_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NaturalLandingPad.NaturalLandingPad_C.ExecuteUbergraph_NaturalLandingPad
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANaturalLandingPad_C::ExecuteUbergraph_NaturalLandingPad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalLandingPad.NaturalLandingPad_C.ExecuteUbergraph_NaturalLandingPad");

	ANaturalLandingPad_C_ExecuteUbergraph_NaturalLandingPad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
