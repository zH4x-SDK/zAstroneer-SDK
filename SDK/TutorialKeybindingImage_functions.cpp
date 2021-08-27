
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

// Function TutorialKeybindingImage.TutorialKeybindingImage_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTutorialKeybindingImage_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialKeybindingImage.TutorialKeybindingImage_C.LayoutWidget");

	UTutorialKeybindingImage_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TutorialKeybindingImage.TutorialKeybindingImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialKeybindingImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialKeybindingImage.TutorialKeybindingImage_C.Construct");

	UTutorialKeybindingImage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialKeybindingImage.TutorialKeybindingImage_C.HandleInputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialKeybindingImage_C::HandleInputDeviceChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialKeybindingImage.TutorialKeybindingImage_C.HandleInputDeviceChanged");

	UTutorialKeybindingImage_C_HandleInputDeviceChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialKeybindingImage.TutorialKeybindingImage_C.ExecuteUbergraph_TutorialKeybindingImage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialKeybindingImage_C::ExecuteUbergraph_TutorialKeybindingImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialKeybindingImage.TutorialKeybindingImage_C.ExecuteUbergraph_TutorialKeybindingImage");

	UTutorialKeybindingImage_C_ExecuteUbergraph_TutorialKeybindingImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
