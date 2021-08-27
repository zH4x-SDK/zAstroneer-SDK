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

// WidgetBlueprintGeneratedClass GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C
// 0x0048 (0x0258 - 0x0210)
class UGameMenuServerSessionManagementSubsection_C : public UUserWidgetBlueprintDesignable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                SavedGamesContainer;                                      // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  SaveGame;                                                 // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuEntryDoubleText_C*                  StartNewGame;                                             // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FGameEntry>                          LastGameList;                                             // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAstroGameMenuFocusItemWidget*               OwningFocusItemOfSavedGamePopout;                         // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ActiveSaveName;                                           // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuServerSessionManagementSubsection.GameMenuServerSessionManagementSubsection_C");
		return ptr;
	}


	void UpdateSaveList();
	bool LayoutWidget();
	void Construct();
	void ForceMenuRefresh();
	void CustomEvent_3(const struct FGameList& GameList);
	void OnSavedGameEntryUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void OnSaveFileDeleteConfirmed(const struct FAstroSaveFileInformation& SaveFileToDelete);
	void OnSaveFIleDeleteOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile);
	void OnSaveFIleDeleteCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem);
	void OnRenameFIleOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile);
	void OnRenameSaveFileConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName);
	void OnRenameOrDuplicateSaveFileCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem);
	void OnDuplicateSaveFileSelected(const struct FAstroSaveFileInformation& SelectedSaveFile);
	void OnDuplicateSaveFIleConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName);
	void OnDuplicateSaveFIleComplete(bool success);
	void CustomEvent_1(bool copySuccess, bool removeSuccess, const struct FString& fromName, const struct FString& twoName);
	void CustomEvent_2(bool success, const struct FString& saveName);
	void OnSaveFileLoadOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile);
	void BndEvt__StartNewGame_K2Node_ComponentBoundEvent_243_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void BndEvt__SaveGame_K2Node_ComponentBoundEvent_655_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void OnSaveGameConfirm(const struct FString& SaveGameName);
	void CustomEvent_4(bool success, const struct FString& saveName);
	void ExecuteUbergraph_GameMenuServerSessionManagementSubsection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
