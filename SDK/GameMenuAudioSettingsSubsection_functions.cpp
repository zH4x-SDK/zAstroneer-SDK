
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

// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuAudioSettingsSubsection_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.LayoutWidget");

	UGameMenuAudioSettingsSubsection_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_9_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_9_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_9_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_9_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_10_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_10_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_10_SliderEditValueUpdated__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_10_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_11_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_11_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_11_SliderEditCanceled__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_11_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MusicEntry_K2Node_ComponentBoundEvent_12_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__MusicEntry_K2Node_ComponentBoundEvent_12_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MusicEntry_K2Node_ComponentBoundEvent_12_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__MusicEntry_K2Node_ComponentBoundEvent_12_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MusicEntry_K2Node_ComponentBoundEvent_14_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__MusicEntry_K2Node_ComponentBoundEvent_14_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MusicEntry_K2Node_ComponentBoundEvent_14_SliderEditValueUpdated__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__MusicEntry_K2Node_ComponentBoundEvent_14_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MusicEntry_K2Node_ComponentBoundEvent_15_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__MusicEntry_K2Node_ComponentBoundEvent_15_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MusicEntry_K2Node_ComponentBoundEvent_15_SliderEditCanceled__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__MusicEntry_K2Node_ComponentBoundEvent_15_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_16_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_16_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_16_SliderEditValueUpdated__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_16_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_17_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_17_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_17_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_17_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_18_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_18_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_18_SliderEditCanceled__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_18_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_19_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_19_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_19_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_19_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_20_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_20_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_20_SliderEditValueUpdated__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_20_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_21_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_21_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_21_SliderEditCanceled__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_21_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MasterEntry_K2Node_ComponentBoundEvent_22_SliderEditCompletedWithCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__MasterEntry_K2Node_ComponentBoundEvent_22_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MasterEntry_K2Node_ComponentBoundEvent_22_SliderEditCompletedWithCommit__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__MasterEntry_K2Node_ComponentBoundEvent_22_SliderEditCompletedWithCommit__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MasterEntry_K2Node_ComponentBoundEvent_23_SliderEditCanceled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OriginalSliderValue            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__MasterEntry_K2Node_ComponentBoundEvent_23_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MasterEntry_K2Node_ComponentBoundEvent_23_SliderEditCanceled__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__MasterEntry_K2Node_ComponentBoundEvent_23_SliderEditCanceled__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;
	params.OriginalSliderValue = OriginalSliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MasterEntry_K2Node_ComponentBoundEvent_24_SliderEditValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGameMenuEntrySlider_C*  SliderEntry                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::BndEvt__MasterEntry_K2Node_ComponentBoundEvent_24_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.BndEvt__MasterEntry_K2Node_ComponentBoundEvent_24_SliderEditValueUpdated__DelegateSignature");

	UGameMenuAudioSettingsSubsection_C_BndEvt__MasterEntry_K2Node_ComponentBoundEvent_24_SliderEditValueUpdated__DelegateSignature_Params params;
	params.SliderEntry = SliderEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.ExecuteUbergraph_GameMenuAudioSettingsSubsection
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuAudioSettingsSubsection_C::ExecuteUbergraph_GameMenuAudioSettingsSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C.ExecuteUbergraph_GameMenuAudioSettingsSubsection");

	UGameMenuAudioSettingsSubsection_C_ExecuteUbergraph_GameMenuAudioSettingsSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
