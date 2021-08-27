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

// WidgetBlueprintGeneratedClass GameMenuEntry_Base.GameMenuEntry_Base_C
// 0x01B9 (0x0619 - 0x0460)
class UGameMenuEntry_Base_C : public UAstroGameMenuFocusItemWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	int                                                SelectionIndex;                                           // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAstroUIAudioEventKey                              UsedAudioEventKey;                                        // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAstroUIAudioEventKey                              FocusGainedAudioEventKey;                                 // 0x046D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAstroUIAudioEventKey                              EditStartedAudioEventKey;                                 // 0x046E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAstroUIAudioEventKey                              EditCompletedAudioEventKey;                               // 0x046F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAstroUIAudioEventKey                              EditValueChangedAudioEventKey;                            // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FSlateColor                                 FocusTextColor;                                           // 0x0478(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 UnfocusedTextColor;                                       // 0x04A0(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 DisabledTextColor;                                        // 0x04C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 InteractiveElementFocusColor;                             // 0x04F0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 InteractiveElementUnfocusedColor;                         // 0x0518(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 FocusBGColor;                                             // 0x0540(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              StandardFont;                                             // 0x0568(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateFontInfo                              BoldFont;                                                 // 0x05C0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	EAstroUIAudioEventKey                              UsedWhileLockedAudioEventKey;                             // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuEntry_Base.GameMenuEntry_Base_C");
		return ptr;
	}


	void SetBadgeVisibility(bool Visible);
	void PlayOnLockedUseAttemptAudioEvent();
	void UpdateColors();
	void PlayOnEditValueChangedAudioEvent();
	void PlayOnEditCompletedAudioEvent();
	void PlayOnEditStartedAudioEvent();
	void PlayOnFocusGainedAudioEvent();
	void PlayOnUsedAudioEvent();
	void CustomEvent_BaseFocusGained(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause);
	void Construct();
	void CustomEvent_BaseUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void SetupStylingData();
	void OnFocusItemFocusStateChangedDelegate_Base(bool NewIsFocused, class UAstroGameMenuFocusItemWidget* FocusableWidget, EFocusItemFocusChangeCause FocusChangeCause);
	void SetInteractionBlocked(bool IsInteractionBlocked);
	void CustomEvent_BaseLockedUseAttempted(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void ExecuteUbergraph_GameMenuEntry_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
