
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

// Function BackpackRail_Dummy_Title.BackpackRail_Dummy_Title_C.GetChildCatalog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Catalog                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Title_C::GetChildCatalog(class AActor** Catalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Title.BackpackRail_Dummy_Title_C.GetChildCatalog");

	ABackpackRail_Dummy_Title_C_GetChildCatalog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Catalog != nullptr)
		*Catalog = params.Catalog;
}


// Function BackpackRail_Dummy_Title.BackpackRail_Dummy_Title_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Title_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Title.BackpackRail_Dummy_Title_C.UserConstructionScript");

	ABackpackRail_Dummy_Title_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
