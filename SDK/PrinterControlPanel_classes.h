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

// BlueprintGeneratedClass PrinterControlPanel.PrinterControlPanel_C
// 0x00C4 (0x053C - 0x0478)
class APrinterControlPanel_C : public AControlPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           PrintButtonCover_Tooltip;                                 // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           PrintButton_Tooltip;                                      // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PrintButton_TooltipAnchor;                                // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ToolTip;                                                  // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PrimaryScreen;                                            // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CrackedOrientation;                                       // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BigButtonCoverCollision;                                  // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BigButtonCollision;                                       // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           RightButtonCollision;                                     // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           LeftButtonCollision;                                      // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrinterComponent*                           ControlledPrinterComponent;                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBreadboardPrinterComponent*                 ControlledBreadboardPrinterComponent;                     // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftButtonDown;                                           // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightButtonDown;                                          // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftButtonHover;                                          // 0x04EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightButtonHover;                                         // 0x04EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonCoverOpen;                                          // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonCoverHover;                                         // 0x04ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               BigButtonHover;                                           // 0x04EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04EF(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ButtonsAndIconsMID;                                       // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                BigScreenLightBitIndex;                                   // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SmallScreenLightBitIndex;                                 // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SmallLightBitIndex;                                       // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonLightBitIndex;                                      // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonIconSlotIndex;                                      // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOnIconSlotIndex;                                     // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOffIconSlotIndex;                                    // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonConfirmIconIndex;                                   // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOnIconIndex;                                         // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PowerOffIconIndex;                                        // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ButtonPressMontage;                                       // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonCancelIconIndex;                                    // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x052C(0x0004) MISSED OFFSET
	class UPowerComponent*                             ControlledPowerComponent;                                 // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonUnpoweredIconIndex;                                 // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrinterControlPanel.PrinterControlPanel_C");
		return ptr;
	}


	void SetupControlledReferences(class UPrinterComponent* ControlledPrinterComponent, class UBreadboardPrinterComponent* ControlledBreadboardPrinterComponent, class UPowerComponent* ControlledPowerComponent);
	void OnPrinterStateChangedInternal();
	void GetButtonIconIndex(int* IconIndex);
	void UpdateScreenInfo();
	void SetScreenVisibility(bool Visible);
	void CanPrinterPrint(bool* CanPrint);
	void IsPrinterPrinting(bool* IsPrinting);
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
	void OnPrinterStateChanged();
	void ServerStartOrCancelPrint();
	void OnPrinterPowerAvailableChanged(bool HasAvailablePower);
	void OnControlledActorUseStateChanged(bool IsUsable);
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void ExecuteUbergraph_PrinterControlPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
