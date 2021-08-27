
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

// Function TutorialCaptionBoxCreative.TutorialCaptionBoxCreative_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTutorialCaptionBoxCreative_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialCaptionBoxCreative.TutorialCaptionBoxCreative_C.SetupStylingData");

	UTutorialCaptionBoxCreative_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialCaptionBoxCreative.TutorialCaptionBoxCreative_C.ExecuteUbergraph_TutorialCaptionBoxCreative
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialCaptionBoxCreative_C::ExecuteUbergraph_TutorialCaptionBoxCreative(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialCaptionBoxCreative.TutorialCaptionBoxCreative_C.ExecuteUbergraph_TutorialCaptionBoxCreative");

	UTutorialCaptionBoxCreative_C_ExecuteUbergraph_TutorialCaptionBoxCreative_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
