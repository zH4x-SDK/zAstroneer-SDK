
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

// Function TutorialInputBoxDouble.TutorialInputBoxDouble_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTutorialInputBoxDouble_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInputBoxDouble.TutorialInputBoxDouble_C.SetupStylingData");

	UTutorialInputBoxDouble_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialInputBoxDouble.TutorialInputBoxDouble_C.ExecuteUbergraph_TutorialInputBoxDouble
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialInputBoxDouble_C::ExecuteUbergraph_TutorialInputBoxDouble(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInputBoxDouble.TutorialInputBoxDouble_C.ExecuteUbergraph_TutorialInputBoxDouble");

	UTutorialInputBoxDouble_C_ExecuteUbergraph_TutorialInputBoxDouble_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
