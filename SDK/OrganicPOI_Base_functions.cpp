
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

// Function OrganicPOI_Base.OrganicPOI_Base_C.Set Up NodeRefs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSlotReference>  Output_Get                     (Parm, OutParm, ZeroConstructor)

void AOrganicPOI_Base_C::Set_Up_NodeRefs(TArray<struct FSlotReference>* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function OrganicPOI_Base.OrganicPOI_Base_C.Set Up NodeRefs");

	AOrganicPOI_Base_C_Set_Up_NodeRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function OrganicPOI_Base.OrganicPOI_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOrganicPOI_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OrganicPOI_Base.OrganicPOI_Base_C.UserConstructionScript");

	AOrganicPOI_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
