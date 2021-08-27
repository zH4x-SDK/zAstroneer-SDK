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

// WidgetBlueprintGeneratedClass GameMenuGraphicsSettingsSubsection.GameMenuGraphicsSettingsSubsection_C
// 0x0060 (0x0270 - 0x0210)
class UGameMenuGraphicsSettingsSubsection_C : public UUserWidgetBlueprintDesignable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UGameMenuEntryDoubleText_C*                  AntiAliasingEntry;                                        // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  CloudEntry;                                               // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  EffectsEntry;                                             // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  PostProcessEntry;                                         // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  ShadowEntry;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameMenuEntryDoubleText_C*>          SuitSelectionEntries;                                     // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameMenuColorPicker_C*>              ColorPaletteEntries;                                      // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameMenuColorPicker_C*>              VisorListEntries;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuGraphicsSettingsSubsection.GameMenuGraphicsSettingsSubsection_C");
		return ptr;
	}


	bool LayoutWidget();
	void Construct();
	void CustomEvent_1(int SelectedIndex);
	void BndEvt__ShadowEntry_K2Node_ComponentBoundEvent_4_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__AntiAliasingEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void CustomEvent_2(int SelectedIndex);
	void CustomEvent_4(int SelectedIndex);
	void CustomEvent_5(int SelectedIndex);
	void BndEvt__EffectsEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__PostProcessEntry_K2Node_ComponentBoundEvent_7_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__CloudEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void CustomEvent_6(int SelectedIndex);
	void ExecuteUbergraph_GameMenuGraphicsSettingsSubsection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
