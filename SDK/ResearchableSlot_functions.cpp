
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

// Function ResearchableSlot.ResearchableSlot_C.SaveGameFixup
// (Public, BlueprintCallable, BlueprintEvent)

void AResearchableSlot_C::SaveGameFixup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchableSlot.ResearchableSlot_C.SaveGameFixup");

	AResearchableSlot_C_SaveGameFixup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResearchableSlot.ResearchableSlot_C.Get Parent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AResearchableSlot_C::Get_Parent(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchableSlot.ResearchableSlot_C.Get Parent");

	AResearchableSlot_C_Get_Parent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function ResearchableSlot.ResearchableSlot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResearchableSlot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResearchableSlot.ResearchableSlot_C.UserConstructionScript");

	AResearchableSlot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
