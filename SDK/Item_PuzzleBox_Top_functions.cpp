
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

// Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.ReenableCollision
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_PuzzleBox_Top_C::ReenableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.ReenableCollision");

	AItem_PuzzleBox_Top_C_ReenableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.StartTimedDisabledCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AItem_PuzzleBox_Top_C::StartTimedDisabledCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.StartTimedDisabledCollision");

	AItem_PuzzleBox_Top_C_StartTimedDisabledCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AItem_PuzzleBox_Top_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.GetBodySlotLegacy");

	AItem_PuzzleBox_Top_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItem_PuzzleBox_Top_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_PuzzleBox_Top.Item_PuzzleBox_Top_C.UserConstructionScript");

	AItem_PuzzleBox_Top_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
