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

// WidgetBlueprintGeneratedClass GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C
// 0x0092 (0x04F2 - 0x0460)
class UGameMenuTabBarButton_Base_C : public UAstroGameMenuTabBarButtonWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      NotificationIcon;                                         // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     TabBorder;                                                // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      TabIcon;                                                  // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FAstroWidgetContentDataTabBarEntry          WidgetData;                                               // 0x0480(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ButtonIconLastUsedColor;                                  // 0x0490(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ButtonBGLastUsedColor;                                    // 0x04A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ButtonIconUnfocusedColor;                                 // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ButtonBGUnfocusedColor;                                   // 0x04C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ButtonIconFocusColor;                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ButtonBGFocusColor;                                       // 0x04E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	EAstroUIAudioEventKey                              FocusGainedAudioEventKey;                                 // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAstroUIAudioEventKey                              UsedAudioEventKey;                                        // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuTabBarButton_Base.GameMenuTabBarButton_Base_C");
		return ptr;
	}


	void SetNotificationIconVisibility(bool IsVisible);
	void PlayOnFocusGainedAudioEvent();
	void PlayOnUsedAudioEvent();
	void ProvideColorPalette(struct FColorPaletteGameMenuTabBarButton* ButtonColorPalette);
	void PopulateButtonColorData(const struct FColorPaletteGameMenuTabBarButton& ButtonColorPalette);
	void UpdateButtonColors();
	bool LayoutWidget();
	void Construct();
	void OnFocusItemFocusStateChangedDelegate_Event_1(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause);
	void OnFocusItemIsLastUsedStateChangedDelegate_Event_1(bool NewLastUsed, class UAstroGameMenuFocusItemWidget* FocusableWidget);
	void SetupStylingData();
	void CustomEvent_TabBarButtonUsedBase(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void ExecuteUbergraph_GameMenuTabBarButton_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
