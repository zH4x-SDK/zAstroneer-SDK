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

// BlueprintGeneratedClass ResearchModuleControlPanel.ResearchModuleControlPanel_C
// 0x0074 (0x04EC - 0x0478)
class AResearchModuleControlPanel_C : public AControlPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            Power_Graph;                                              // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            SecondaryScreen;                                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PrimaryScreen;                                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               ButtonCollision;                                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CrackedOrientation;                                       // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFlashing__Direction_AC90079C43DC133EEAADFDA1FAEB0BD7;// 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LightFlashing;                                            // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ButtonCoverOpen;                                          // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CursorOverButton;                                         // 0x04B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04BA(0x0006) MISSED OFFSET
	class UAnimMontage*                                ButtonPressMontage;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ButtonsAndLightsMID;                                      // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LightBitIndex;                                            // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ButtonBitIndex;                                           // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CheckMarkBitIndex;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class APlayController*                             InteractingController;                                    // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonIconPositioningSlotIndex;                           // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResearchModuleControlPanel.ResearchModuleControlPanel_C");
		return ptr;
	}


	void SERVER_CheckAwardClientAchievement(bool OperationRequestSuceeded, class APlayerController* OperationInstigator);
	void GetResearchComponent(bool* ResearchComponentFound, struct FResearchComponent* ResearchComponent);
	void SetResearchSubjectData(struct FResearchSubjectReplicationData* ResearchSubjectData);
	void UpdateLightAndButton();
	void TogglePowerGraphDisplay(bool cracked);
	void DoCancel(class APlayerController* Controller, bool* Handled);
	bool OnCancelBP(class APlayerController* Controller);
	void DoConfirm(class APlayerController* Controller, bool* Handled);
	bool OnConfirmBP(class APlayerController* Controller);
	void ResearchOperationAvailable(bool* CanPerformOperation);
	void CloseButtonCover();
	void UserConstructionScript();
	void LightFlashing__FinishedFunc();
	void LightFlashing__UpdateFunc();
	void LightFlashing__ToggleLight__EventFunc();
	void InpActEvt_Confirm_K2Node_InputActionEvent_1(const struct FKey& Key);
	void BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__ButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void CoverOpenClickUnhandled();
	void ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void ReceiveBeginPlay();
	void ServerRequestStartOrInterruptResearch(class APlayController* Instigator);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnResearchReplicationDataChanged();
	void OnControlledActorSet();
	void Panel_Clicked(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void ExecuteUbergraph_ResearchModuleControlPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
