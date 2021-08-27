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

// WidgetBlueprintGeneratedClass ComboSelectionPopoutContents.ComboSelectionPopoutContents_C
// 0x0070 (0x02E8 - 0x0278)
class UComboSelectionPopoutContents_C : public UAstroGameMenuPopoutWidgetContentsBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                ComboOptionsWrapper;                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FGameMenuComboBoxOptionData>         ComboBoxOptions;                                          // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    ComboSelectionMade;                                       // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AutoDismissOnSelection;                                   // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	struct FVector2D                                   WidgetContentsPadding;                                    // 0x02AC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ComboSelectionFocusChanged;                               // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigatedAwayFrom;                                        // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LockedComboSelectionAttempted;                            // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ComboSelectionPopoutContents.ComboSelectionPopoutContents_C");
		return ptr;
	}


	bool LayoutWidget();
	void SetupComboOptions();
	void Construct();
	void HandleComboSelectionMade(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void HandleComboSelectionFocusChanged(bool IsFocused, class UAstroGameMenuFocusItemWidget* FocusedItem, EFocusItemFocusChangeCause FocusChangeCause);
	void HandleNavigationBackRequest();
	void HandleWrapperFocusIndexChanged(int NewFocusIndex);
	void HandleLockedComboSelectionAttempted(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void ExecuteUbergraph_ComboSelectionPopoutContents(int EntryPoint);
	void LockedComboSelectionAttempted__DelegateSignature(int SelectedIndex);
	void NavigatedAwayFrom__DelegateSignature();
	void ComboSelectionFocusChanged__DelegateSignature(bool IsFocused, class UAstroGameMenuFocusItemWidget* FocusItem);
	void ComboSelectionMade__DelegateSignature(int SelectedIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
