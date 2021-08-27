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

// WidgetBlueprintGeneratedClass ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C
// 0x0050 (0x02C8 - 0x0278)
class UConfirmDestructiveSettingsPopoutContents_C : public UAstroGameMenuPopoutWidgetContentsBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            AutorevertCountdown;                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  NoEntry;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  YesEntry;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector2D                                   PopoutSize;                                               // 0x0298(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoRevertCounter;                                        // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    SettingsConfirmed;                                        // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SettingsCanceled;                                         // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmDestructiveSettingsPopoutContents.ConfirmDestructiveSettingsPopoutContents_C");
		return ptr;
	}


	bool LayoutWidget();
	void UpdateCountdownTimer(float DeltaTime);
	void StartCountdownTimer();
	void UpdateText();
	void BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void HandleNavigationBackRequest();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_ConfirmDestructiveSettingsPopoutContents(int EntryPoint);
	void SettingsCanceled__DelegateSignature();
	void SettingsConfirmed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
