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

// BlueprintGeneratedClass GenericSelectorControlPanel.GenericSelectorControlPanel_C
// 0x0110 (0x0588 - 0x0478)
class AGenericSelectorControlPanel_C : public AControlPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class UTooltipComponent*                           ToolTip;                                                  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PrimaryScreen;                                            // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CrackedOrientation;                                       // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BigButtonCoverCollision;                                  // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BigButtonCollision;                                       // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           RightButtonCollision;                                     // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           LeftButtonCollision;                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LeftButtonDown;                                           // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightButtonDown;                                          // 0x04B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftButtonHover;                                          // 0x04BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightButtonHover;                                         // 0x04BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonCoverOpen;                                          // 0x04BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonCoverHover;                                         // 0x04BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               BigButtonHover;                                           // 0x04BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04BF(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ButtonsAndIconsMID;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                BigScreenLightBitIndex;                                   // 0x04C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SmallScreenLightBitIndex;                                 // 0x04CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SmallLightBitIndex;                                       // 0x04D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonLightBitIndex;                                      // 0x04D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonIconSlotIndex;                                      // 0x04D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOnIconSlotIndex;                                     // 0x04DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOffIconSlotIndex;                                    // 0x04E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonConfirmIconIndex;                                   // 0x04E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOnIconIndex;                                         // 0x04E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOffIconIndex;                                        // 0x04EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ButtonPressMontage;                                       // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonCancelIconIndex;                                    // 0x04F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class UPowerComponent*                             ControlledPowerComponent;                                 // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonUnpoweredIconIndex;                                 // 0x0508(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseBigButton;                                          // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OperationActive;                                          // 0x050D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x050E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    CycleSelectionLeft;                                       // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CycleSelectionRight;                                      // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UpdateControlPanelScreenInfo;                             // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ActivateOrCancelOperation;                                // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      DisplayWidgetClass;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UControlPanelPrinter_AnimBP_C*               AnimBP;                                                   // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseArrowButtons;                                       // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    CrackedStateChanged;                                      // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ActivateOrCancelOperationByPlayer;                        // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericSelectorControlPanel.GenericSelectorControlPanel_C");
		return ptr;
	}


	bool GetIsUnpowered();
	void SetCanUseArrowButtons(bool NewCanUseArrowButtons);
	void SetupDisplayPanel();
	void UpdateAnimBP();
	void SetOperationActive(bool NewOperationActive);
	void SetCanUseBigButton(bool NewCanActivate);
	void RefreshControlPanel();
	void SetupControlledReferences(class UPowerComponent* ControlledPowerComponent);
	void OnStateChangedInternal();
	void GetButtonIconIndex(int* IconIndex);
	void UpdateScreenInfo();
	void SetScreenVisibility(bool Visible);
	void PressBigButton();
	bool OnCancelBP(class APlayerController* Controller);
	bool OnConfirmBP(class APlayerController* Controller);
	void UpdateLights();
	void UserConstructionScript();
	void OnNavigateLeftBP(class APlayerController* Controller);
	void OnControlledActorSet();
	void OnNavigateRightBP(class APlayerController* Controller);
	void ReleaseRightButton();
	void ReleaseLeftButton();
	void BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_7_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_8_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void BndEvt__LeftButtonCollision_K2Node_ComponentBoundEvent_0_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__RightButtonCollision_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_4_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_5_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_6_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void ReceiveBeginPlay();
	void OnPanelMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnControlledActorUseStateChanged(bool IsUsable);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void OnPowerAvailableChanged(bool PowerAvailable);
	void ServerNavigateRight();
	void ServerNavigateLeft();
	void ServerBigButtonClicked(class APlayController* ClickingPlayer);
	void ExecuteUbergraph_GenericSelectorControlPanel(int EntryPoint);
	void ActivateOrCancelOperationByPlayer__DelegateSignature(class APlayController* ClickingPlayer);
	void CrackedStateChanged__DelegateSignature(class AControlPanel* ControlPanel, bool IsCracked);
	void ActivateOrCancelOperation__DelegateSignature();
	void UpdateControlPanelScreenInfo__DelegateSignature(class UUserWidget* ScreenWidget);
	void CycleSelectionRight__DelegateSignature();
	void CycleSelectionLeft__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
