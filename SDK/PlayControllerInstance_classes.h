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

// BlueprintGeneratedClass PlayControllerInstance.PlayControllerInstance_C
// 0x0060 (0x1310 - 0x12B0)
class APlayControllerInstance_C : public APlayController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x12B0(0x0008) (Transient, DuplicateTransient)
	class UItemDriveComponent*                         ItemDrive;                                                // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AudioListener;                                            // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMultiTool*                                  MultiTool;                                                // 0x12C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UIFocusActor;                                             // 0x12D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              Durable_Item_List_Array;                                  // 0x12D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DefaultHelpMenuScreenIndex;                               // 0x12E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x12EC(0x0004) MISSED OFFSET
	class AFadeToBlackActor_C*                         FadeScreenActor;                                          // 0x12F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTerrainToolCreativeMenu_C*                  CreativeTerrainToolMenu;                                  // 0x12F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeformToolEventBindingsMade;                              // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1301(0x0007) MISSED OFFSET
	class ASmallDeform_C*                              DeformToolEventsAreBoundTo;                               // 0x1308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayControllerInstance.PlayControllerInstance_C");
		return ptr;
	}


	bool ToggleCreativeModeDeformMenu();
	bool IsCreativeModeDeformMenuActive();
	void GetTerrainTool(class ASmallDeform_C** SmallDeform);
	void SetCreativeMenuEnabled(bool Enabled);
	void FadeInFadeScreen();
	void DestroyFadeScreen();
	void CreateFadeScreen();
	void OnHideHelpMenu();
	void DoDropshipSpawn(class USceneComponent* DropTarget, const struct FTransform& StartTransform, bool RelaunchOnExit, bool AllowPlanetSelection, class ADropship_C** SpawnedDropship);
	void CLIENT_Sound_FX(const struct FTransform& Transform, class USoundBase* Sound, class UParticleSystem* Particle);
	void Set_Hardware_Cursor();
	void Set_Cursor_(bool show);
	void Set_Audio_Listener();
	void UserConstructionScript();
	void InpActEvt_Comma_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Period_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Slash_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_HelpMenu_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_HelpMenuGamepad_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Shift_F12_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_TerrainTool_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SERVER_Tertiary_Use(class UStorageChassisComponent* Chassis);
	void MULTI_Sound_FX(const struct FTransform& Transform, class USoundBase* Sound, class UParticleSystem* FX);
	void SERVER_SetFreePower(bool FreePower);
	void SERVER_UnlockAllResearchDebug();
	void PlayerDied();
	void PlayerRespawned();
	void CustomEvent_1(bool Enable);
	void OnDeformToolEquippedStateChanged_Event_1(bool Enable);
	void HandleDeformToolMenuCloseRequested();
	void HandleGameplayStarted(bool StartedInExistingSavedGame);
	void OnAutoLaunchedCreativeTutorialClosed();
	void OnCreativeModeEnabledChanged(bool Enabled);
	void AutoShowCreativeModeTutorial();
	void RestoreAudioListener();
	void ExecuteUbergraph_PlayControllerInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
