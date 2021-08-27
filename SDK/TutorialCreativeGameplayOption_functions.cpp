
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

// Function TutorialCreativeGameplayOption.TutorialCreativeGameplayOption_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTutorialCreativeGameplayOption_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialCreativeGameplayOption.TutorialCreativeGameplayOption_C.SetupStylingData");

	UTutorialCreativeGameplayOption_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialCreativeGameplayOption.TutorialCreativeGameplayOption_C.ExecuteUbergraph_TutorialCreativeGameplayOption
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialCreativeGameplayOption_C::ExecuteUbergraph_TutorialCreativeGameplayOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialCreativeGameplayOption.TutorialCreativeGameplayOption_C.ExecuteUbergraph_TutorialCreativeGameplayOption");

	UTutorialCreativeGameplayOption_C_ExecuteUbergraph_TutorialCreativeGameplayOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
