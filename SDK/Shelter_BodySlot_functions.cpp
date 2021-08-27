
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

// Function Shelter_BodySlot.Shelter_BodySlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShelter_BodySlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BodySlot.Shelter_BodySlot_C.UserConstructionScript");

	AShelter_BodySlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BodySlot.Shelter_BodySlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShelter_BodySlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BodySlot.Shelter_BodySlot_C.ReceiveBeginPlay");

	AShelter_BodySlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shelter_BodySlot.Shelter_BodySlot_C.ExecuteUbergraph_Shelter_BodySlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShelter_BodySlot_C::ExecuteUbergraph_Shelter_BodySlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shelter_BodySlot.Shelter_BodySlot_C.ExecuteUbergraph_Shelter_BodySlot");

	AShelter_BodySlot_C_ExecuteUbergraph_Shelter_BodySlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
