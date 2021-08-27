
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

// Function TerrainSlot.TerrainSlot_C.SaveGameFixup
// (Public, BlueprintCallable, BlueprintEvent)

void ATerrainSlot_C::SaveGameFixup()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainSlot.TerrainSlot_C.SaveGameFixup");

	ATerrainSlot_C_SaveGameFixup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainSlot.TerrainSlot_C.Get Parent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATerrainSlot_C::Get_Parent(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainSlot.TerrainSlot_C.Get Parent");

	ATerrainSlot_C_Get_Parent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function TerrainSlot.TerrainSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATerrainSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainSlot.TerrainSlot_C.UserConstructionScript");

	ATerrainSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
