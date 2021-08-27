
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

// Function Harvestable_BASE.Harvestable_BASE_C.Set Up NodeRefs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSlotReference>  Output_Get                     (Parm, OutParm, ZeroConstructor)

void AHarvestable_BASE_C::Set_Up_NodeRefs(TArray<struct FSlotReference>* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function Harvestable_BASE.Harvestable_BASE_C.Set Up NodeRefs");

	AHarvestable_BASE_C_Set_Up_NodeRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function Harvestable_BASE.Harvestable_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHarvestable_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Harvestable_BASE.Harvestable_BASE_C.UserConstructionScript");

	AHarvestable_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
