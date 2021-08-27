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

// WidgetBlueprintGeneratedClass GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C
// 0x0055 (0x0265 - 0x0210)
class UGameMenuSavedGamesSubsection_C : public UUserWidgetBlueprintDesignable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)
	class UGameMenuStorageSpaceWarning_C*              GameMenuStorageSpaceWarning;                              // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                SavedGamesContainer;                                      // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGameMenuSectionDivider_C*                   SavedGamesMenuSectionDivider;                             // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAstroGameMenuFocusItemWidget*               OwningFocusItemOfSavedGamePopout;                         // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SaveGameFetchSucceeded;                                   // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	struct FTimerHandle                                RefetchSavesTimerHandle;                                  // 0x0240(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FAstroSaveFileInformation>           RetrievedSavesCache;                                      // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                AutoUnlockInputTimer;                                     // 0x0258(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AmountOfFreeStorage;                                      // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlatformHasLimitedSaveStorageSpace;                       // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMenuSavedGamesSubsection.GameMenuSavedGamesSubsection_C");
		return ptr;
	}


	void AutoUnlockInput();
	void ResetSaveGameFetchAndAttemptRefetch();
	void AttemptToFetchSavedGamesAndCreateSavedFileMenuEntries();
	void OnSavedGameEntryUsed(class UAstroGameMenuFocusItemWidget* FocusItemWidget);
	void OnSaveFileDeleteConfirmed(const struct FAstroSaveFileInformation& SaveFileToDelete);
	void Construct();
	void OnSaveFIleDeleteOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile);
	void OnSaveFIleDeleteCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem);
	void OnRenameFIleOptionSelected(const struct FAstroSaveFileInformation& SelectedSaveFile);
	void OnRenameSaveFileConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName);
	void OnRenameOrDuplicateSaveFileCanceled(class UAstroGameMenuFocusItemWidget* PopoutOwningFocusItem);
	void OnSaveRenameComplete(bool renamedFileSaveSuccess, bool oldFileDeleteSuccess);
	void OnDuplicateSaveFileSelected(const struct FAstroSaveFileInformation& SelectedSaveFile);
	void OnDuplicateSaveFIleConfirmed(const struct FAstroSaveFileInformation& SaveFileInfo, const struct FString& NewFileName);
	void OnDuplicateSaveFIleComplete(ESaveGameOperationResult saveOperationResult);
	void ExecuteUbergraph_GameMenuSavedGamesSubsection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
