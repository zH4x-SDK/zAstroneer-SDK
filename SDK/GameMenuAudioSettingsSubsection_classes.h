#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C
// 0x0060 (0x0270 - 0x0210)
class UGameMenuAudioSettingsSubsection_C : public UUserWidgetBlueprintDesignable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UGameMenuEntrySlider_C*                      AmbientEntry;                                             // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntrySlider_C*                      MasterEntry;                                              // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntrySlider_C*                      MusicEntry;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntrySlider_C*                      SoundEffectsEntry;                                        // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntrySlider_C*                      VoiceEntry;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameMenuEntryDoubleText_C*>          SuitSelectionEntries;                                     // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameMenuColorPicker_C*>              ColorPaletteEntries;                                      // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameMenuColorPicker_C*>              VisorListEntries;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuAudioSettingsSubsection.GameMenuAudioSettingsSubsection_C");
		return ptr;
	}


	bool LayoutWidget();
	void BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_9_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_10_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__AmbientEntry_K2Node_ComponentBoundEvent_11_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue);
	void BndEvt__MusicEntry_K2Node_ComponentBoundEvent_12_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__MusicEntry_K2Node_ComponentBoundEvent_14_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__MusicEntry_K2Node_ComponentBoundEvent_15_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue);
	void BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_16_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_17_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__SoundEffectsEntry_K2Node_ComponentBoundEvent_18_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue);
	void BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_19_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_20_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__VoiceEntry_K2Node_ComponentBoundEvent_21_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue);
	void BndEvt__MasterEntry_K2Node_ComponentBoundEvent_22_SliderEditCompletedWithCommit__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void BndEvt__MasterEntry_K2Node_ComponentBoundEvent_23_SliderEditCanceled__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry, float OriginalSliderValue);
	void BndEvt__MasterEntry_K2Node_ComponentBoundEvent_24_SliderEditValueUpdated__DelegateSignature(class UGameMenuEntrySlider_C* SliderEntry);
	void ExecuteUbergraph_GameMenuAudioSettingsSubsection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
