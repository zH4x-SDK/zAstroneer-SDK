
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

// Function TutorialSectionHeaderBoxAutosized.TutorialSectionHeaderBoxAutosized_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTutorialSectionHeaderBoxAutosized_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialSectionHeaderBoxAutosized.TutorialSectionHeaderBoxAutosized_C.SetupStylingData");

	UTutorialSectionHeaderBoxAutosized_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialSectionHeaderBoxAutosized.TutorialSectionHeaderBoxAutosized_C.ExecuteUbergraph_TutorialSectionHeaderBoxAutosized
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialSectionHeaderBoxAutosized_C::ExecuteUbergraph_TutorialSectionHeaderBoxAutosized(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialSectionHeaderBoxAutosized.TutorialSectionHeaderBoxAutosized_C.ExecuteUbergraph_TutorialSectionHeaderBoxAutosized");

	UTutorialSectionHeaderBoxAutosized_C_ExecuteUbergraph_TutorialSectionHeaderBoxAutosized_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
