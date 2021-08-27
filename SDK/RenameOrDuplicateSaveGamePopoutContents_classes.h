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

// WidgetBlueprintGeneratedClass RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C
// 0x0080 (0x02F8 - 0x0278)
class URenameOrDuplicateSaveGamePopoutContents_C : public UAstroGameMenuPopoutWidgetContentsBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0278(0x0008) (Transient, DuplicateTransient)
	class UGameMenuEntryDoubleText_C*                  CancelEntry;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  ConfirmEntry;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_Edit_C*             RenameEditTextField;                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnRenameSaveConfirmed;                                    // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRenameSaveCanceled;                                     // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FAstroSaveFileInformation                   AstroSaveFileInfo;                                        // 0x02B8(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RenameOrDuplicateSaveGamePopoutContents.RenameOrDuplicateSaveGamePopoutContents_C");
		return ptr;
	}


	bool LayoutWidget();
	void ValidateEnteredSaveName(bool* IsValid, struct FString* saveName);
	void BndEvt__NoEntry_K2Node_ComponentBoundEvent_5_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__YesEntry_K2Node_ComponentBoundEvent_6_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void HandleNavigationBackRequest();
	void BndEvt__RenameEditTextField_K2Node_ComponentBoundEvent_0_OnTextEntryCompleted__DelegateSignature(class UGameMenuEntryDoubleText_Edit_C* TextEditWidget, const struct FText& newText);
	void ExecuteUbergraph_RenameOrDuplicateSaveGamePopoutContents(int EntryPoint);
	void OnRenameSaveCanceled__DelegateSignature(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem);
	void OnRenameSaveConfirmed__DelegateSignature(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewSaveFileDescriptiveName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
