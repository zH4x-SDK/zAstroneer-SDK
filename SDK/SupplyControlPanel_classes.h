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

// BlueprintGeneratedClass SupplyControlPanel.SupplyControlPanel_C
// 0x00A5 (0x051D - 0x0478)
class ASupplyControlPanel_C : public AControlPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             CrackedOrientation;                                       // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               ButtonCollider;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PrimaryScreen;                                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SupplyDropTimeline_Crate3DropAnimCurve_6BCABC9A4590FB3C130F44A69C7CA821;// 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SupplyDropTimeline_Crate2DropAnimCurve_6BCABC9A4590FB3C130F44A69C7CA821;// 0x049C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SupplyDropTimeline_Crate1DropAnimCurve_6BCABC9A4590FB3C130F44A69C7CA821;// 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SupplyDropTimeline__Direction_6BCABC9A4590FB3C130F44A69C7CA821;// 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SupplyDropTimeline;                                       // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CoverHover;                                               // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CoverUp;                                                  // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonHover;                                              // 0x04B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x04B3(0x0005) MISSED OFFSET
	class UAnimMontage*                                ButtonPressMontage;                                       // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ButtonAndLightsMID;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupplyDropInProgress;                                     // 0x04C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class ALandingPad_Starter_C*                       ControllingLandingPadStarter_cache;                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APackagedItem_T1_StarterPrinter_C*           SpawnedStarterPrinterCrate;                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APackagedItem_T1_StarterBreadboard_C*        SpawnedStarterPlatformCrate;                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APackagedItem_T1_StarterOxygenator_C*        SpawnedStarterOxygenatorCrate;                            // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrinterCrateDropStartPos;                                 // 0x04F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlatformCrateDropStartPos;                                // 0x04FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OxygenatorCrateDropStartPos;                              // 0x0508(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonLightBitIndex;                                      // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SmallLightBitIndex;                                       // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPerformedFirstDrop;                                    // 0x051C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyControlPanel.SupplyControlPanel_C");
		return ptr;
	}


	bool OnCancelBP(class APlayerController* Controller);
	bool OnConfirmBP(class APlayerController* Controller);
	void DoCancel(class APlayerController* Controller, bool* Handled);
	void DoConfirm(class APlayerController* Controller, bool* Handled);
	void OnRep_HasPerformedFirstDrop();
	void OnRep_SupplyDropInProgress();
	void PerformSupplyDrop();
	void UpdateLightAndButton();
	void UserConstructionScript();
	void SupplyDropTimeline__FinishedFunc();
	void SupplyDropTimeline__UpdateFunc();
	void SupplyDropTimeline__Crate3LandEvt__EventFunc();
	void SupplyDropTimeline__Crate2LandEvt__EventFunc();
	void SupplyDropTimeline__Crate1LandEvt__EventFunc();
	void ReceiveBeginPlay();
	void BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__ButtonCollider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void OnPanelMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void DoSupplyDrop();
	void DoSupplyDropAnimation();
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void Panel_Clicked(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void DoSupplyDropLandingAudioRPC();
	void OnControlledActorSet();
	void ExecuteUbergraph_SupplyControlPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
