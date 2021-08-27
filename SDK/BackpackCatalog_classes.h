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

// BlueprintGeneratedClass BackpackCatalog.BackpackCatalog_C
// 0x0412 (0x091A - 0x0508)
class ABackpackCatalog_C : public ACatalogModule
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0508(0x0008) (Transient, DuplicateTransient)
	class UTooltipComponent*                           PrintButtonCoverTooltip;                                  // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           CategoryButtonTooltip;                                    // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           PrintButtonTooltip;                                       // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PrimaryButtonTooltipAnchor;                               // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CloseCatalogTooltipAnchor;                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CategoryTooltipAnchor;                                    // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BigButtonCoverCollision;                                  // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            DPadRightCollision;                                       // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            DPadLeftCollision;                                        // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            DPadDownCollision;                                        // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            DPadUpCollision;                                          // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            SelectedItemDisplay;                                      // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SelectedItemIcon;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            PointAndRateDisplay;                                      // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon58;                                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon57;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon56;                                               // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon55;                                               // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon54;                                               // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon53;                                               // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon52;                                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon51;                                               // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon48;                                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon47;                                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon46;                                               // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon45;                                               // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon44;                                               // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon43;                                               // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon42;                                               // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon41;                                               // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon38;                                               // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon37;                                               // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon36;                                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon35;                                               // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon34;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon33;                                               // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon32;                                               // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon31;                                               // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon28;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon27;                                               // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon26;                                               // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon25;                                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon24;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon23;                                               // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon22;                                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon21;                                               // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon18;                                               // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon17;                                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon16;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon15;                                               // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon14;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon13;                                               // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon12;                                               // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ItemIcon11;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CrackedOrientation;                                       // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BigButtonCollision;                                       // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               LargeFabButtonCollision;                                  // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               MediumFabButtonCollision;                                 // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               SmallFabButtonCollision;                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               BackpackButtonCollision;                                  // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SelectedIconScaling_SelectedIconScaleUp_82B110A1431019B971BA59880F873258;// 0x06F8(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SelectedIconScaling__Direction_82B110A1431019B971BA59880F873258;// 0x0704(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0705(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SelectedIconScaling;                                      // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpindleUpperRowScaling_OuterScaleUp_0BA2FDBB485CEAA9236FA29CCAC7B1A3;// 0x0710(0x000C) (IsPlainOldData)
	struct FVector                                     SpindleUpperRowScaling_CenterScaleUp_0BA2FDBB485CEAA9236FA29CCAC7B1A3;// 0x071C(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpindleUpperRowScaling__Direction_0BA2FDBB485CEAA9236FA29CCAC7B1A3;// 0x0728(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SpindleUpperRowScaling;                                   // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpindleCenterRowScaling_OuterScaleUp_F2BEBBCE4D5156E6666029964106733B;// 0x0738(0x000C) (IsPlainOldData)
	struct FVector                                     SpindleCenterRowScaling_CenterScaleUp_F2BEBBCE4D5156E6666029964106733B;// 0x0744(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpindleCenterRowScaling__Direction_F2BEBBCE4D5156E6666029964106733B;// 0x0750(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SpindleCenterRowScaling;                                  // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpindleLowerRowScaling_OuterScaleUp_83BD354547F7DC866F80D281869F9937;// 0x0760(0x000C) (IsPlainOldData)
	struct FVector                                     SpindleLowerRowScaling_CenterScaleUp_83BD354547F7DC866F80D281869F9937;// 0x076C(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpindleLowerRowScaling__Direction_83BD354547F7DC866F80D281869F9937;// 0x0778(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SpindleLowerRowScaling;                                   // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpindleTopRowScaling_OuterScaleUp_D721FBEC4485804FD9E3619B4D9319A2;// 0x0788(0x000C) (IsPlainOldData)
	struct FVector                                     SpindleTopRowScaling_CenterScaleUp_D721FBEC4485804FD9E3619B4D9319A2;// 0x0794(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpindleTopRowScaling__Direction_D721FBEC4485804FD9E3619B4D9319A2;// 0x07A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SpindleTopRowScaling;                                     // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpindleBottomRowScaling_OuterScaleUp_A599D35C47A3E78F2846CB8B25EFA2E0;// 0x07B0(0x000C) (IsPlainOldData)
	struct FVector                                     SpindleBottomRowScaling_CenterScaleUp_A599D35C47A3E78F2846CB8B25EFA2E0;// 0x07BC(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpindleBottomRowScaling__Direction_A599D35C47A3E78F2846CB8B25EFA2E0;// 0x07C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SpindleBottomRowScaling;                                  // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CatalogEntryDisplayTimeline__Direction_1921643A4EFCE52128100AAE5AC8E272;// 0x07D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x07D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CatalogEntryDisplayTimeline;                              // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpindleTransition__Direction_F9DF5B91410CE0FCE6CC1CB193EA0EA7;// 0x07E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SpindleTransition;                                        // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BigHologramItemChangedAnim_HologramScaleMultiplier_DDAEF57749D3111E9CD8268A0224C9EF;// 0x07F8(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BigHologramItemChangedAnim__Direction_DDAEF57749D3111E9CD8268A0224C9EF;// 0x0804(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0805(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BigHologramItemChangedAnim;                               // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DisplayLightsUnlockFlash__Direction_7169DEB0445F5B569C28C8BE9322F9E3;// 0x0810(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DisplayLightsUnlockFlash;                                 // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CatalogHoverSlide_SlideInProgress_4C0C5DF9442123CBED9A91BCA88F3452;// 0x0820(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CatalogHoverSlide_SlideOutProgress_4C0C5DF9442123CBED9A91BCA88F3452;// 0x0824(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CatalogHoverSlide__Direction_4C0C5DF9442123CBED9A91BCA88F3452;// 0x0828(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0829(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CatalogHoverSlide;                                        // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SmallHologramItemChangedAnim_HologramIconScaleMultiplier_08E736434E20943EAA7BA3BC82E06936;// 0x0838(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SmallHologramItemChangedAnim__Direction_08E736434E20943EAA7BA3BC82E06936;// 0x0844(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SmallHologramItemChangedAnim;                             // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmallHologramMouseOverPulse_IconMeshScaleMultiplier_58281D0B417AD774D21CF786A704477B;// 0x0850(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SmallHologramMouseOverPulse__Direction_58281D0B417AD774D21CF786A704477B;// 0x0854(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SmallHologramMouseOverPulse;                              // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BigHologramUnlockedAnim_ScaleMultiplier_E1A93F6E45F0CF75C02347B95F5C2EAA;// 0x0860(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BigHologramUnlockedAnim__Direction_E1A93F6E45F0CF75C02347B95F5C2EAA;// 0x086C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BigHologramUnlockedAnim;                                  // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBigButtonSafetyDisabled;                                 // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0879(0x0007) MISSED OFFSET
	class UAnimMontage*                                BigButtonPressMontage;                                    // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExtendPanel;                                              // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExtendTop;                                                // 0x0889(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DPadUp;                                                   // 0x088A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               DPadDown;                                                 // 0x088B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               DPadLeft;                                                 // 0x088C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               DPadRight;                                                // 0x088D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x088E(0x0002) MISSED OFFSET
	struct FVector                                     SpindleItemIconInitialScale;                              // 0x0890(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SelectedItemIconInitialScale;                             // 0x089C(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 PendingSelectedItemIconMesh;                              // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        MousedOverItemIconMeshComp;                               // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                AllItemIcons;                                             // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class UMaterialInterface*                          UnlockedSelectedItemMaterial;                             // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          UnavailableSelectedItemMaterial;                          // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AvailableSelectedItemMaterial;                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CatalogEntryChangeInProgress;                             // 0x08E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlideOutAllowed;                                          // 0x08E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlideOut;                                                 // 0x08E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x08E3(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ButtonsAndLightsMID;                                      // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                ConstructionButtonIconSlotIndex;                          // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExplorationButtonIconSlotIndex;                           // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SurvivalButtonIconSlotIndex;                              // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LabButtonIconSlotIndex;                                   // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ConfirmButtonLightBitIndex;                               // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TopLightBitIndex;                                         // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SmallLightBitIndex;                                       // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DisplayLightsBitIndex1;                                   // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DisplayLightsBitIndex2;                                   // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpindleIconRingLightBitIndex;                             // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TurnedOffBackpackLightWhenCracked;                        // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VisibleTemp;                                              // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BackpackCatalog.BackpackCatalog_C");
		return ptr;
	}


	void ManipulateBackpackLightOnCrackedChanged(bool IsCracked);
	void ResetDisplayLights();
	void UpdateConfirmationButtonAndCatalogLights();
	void UpdateCategoryButtonLights();
	void UpdateSelectedItemIconMaterial();
	bool OnCancelBP(class APlayerController* Controller);
	void HandleCancel(bool* Handled);
	void HandleConfirm(class APlayerController* Controller, bool* Handled);
	bool OnConfirmBP(class APlayerController* Controller);
	void OnIconClickedRow5(int IconItemVariantIndex, EItemVariantType ItemIconVariantType);
	void OnIconClickedRow4(int IconItemVariantIndex, EItemVariantType ItemIconVariantType);
	void OnIconClickedRow3(int IconItemVariantIndex, EItemVariantType ItemIconVariantType);
	void OnIconClickedRow2(int IconItemVariantIndex, EItemVariantType ItemIconVariantType);
	void OnIconClickedRow1(int IconItemVariantIndex, EItemVariantType ItemIconVariantType);
	void UpdateItemInfoWidget();
	void InitItemIconArrays();
	void UserConstructionScript();
	void BigHologramItemChangedAnim__FinishedFunc();
	void BigHologramItemChangedAnim__UpdateFunc();
	void BigHologramItemChangedAnim__SwapMesh__EventFunc();
	void BigHologramUnlockedAnim__FinishedFunc();
	void BigHologramUnlockedAnim__UpdateFunc();
	void SmallHologramMouseOverPulse__FinishedFunc();
	void SmallHologramMouseOverPulse__UpdateFunc();
	void SmallHologramItemChangedAnim__FinishedFunc();
	void SmallHologramItemChangedAnim__UpdateFunc();
	void SmallHologramItemChangedAnim__MeshSwap__EventFunc();
	void CatalogHoverSlide__FinishedFunc();
	void CatalogHoverSlide__UpdateFunc();
	void DisplayLightsUnlockFlash__FinishedFunc();
	void DisplayLightsUnlockFlash__UpdateFunc();
	void DisplayLightsUnlockFlash__LightsOn2__EventFunc();
	void DisplayLightsUnlockFlash__LightsOn1__EventFunc();
	void SpindleTransition__FinishedFunc();
	void SpindleTransition__UpdateFunc();
	void SpindleTransition__PopOutBottom__EventFunc();
	void SpindleTransition__CloseTop__EventFunc();
	void SpindleTransition__SelectedItemDisplay__EventFunc();
	void SpindleTransition__SelectedItemIcon__EventFunc();
	void SpindleTransition__CatalogEntryDisplays__EventFunc();
	void SpindleTransition__PointAndRateDisplay__EventFunc();
	void CatalogEntryDisplayTimeline__FinishedFunc();
	void CatalogEntryDisplayTimeline__UpdateFunc();
	void CatalogEntryDisplayTimeline__BottomRow__EventFunc();
	void CatalogEntryDisplayTimeline__LowerRow__EventFunc();
	void CatalogEntryDisplayTimeline__MiddleRow__EventFunc();
	void CatalogEntryDisplayTimeline__UpperRow__EventFunc();
	void CatalogEntryDisplayTimeline__TopRow__EventFunc();
	void SpindleTopRowScaling__FinishedFunc();
	void SpindleTopRowScaling__UpdateFunc();
	void SpindleBottomRowScaling__FinishedFunc();
	void SpindleBottomRowScaling__UpdateFunc();
	void SpindleLowerRowScaling__FinishedFunc();
	void SpindleLowerRowScaling__UpdateFunc();
	void SpindleCenterRowScaling__FinishedFunc();
	void SpindleCenterRowScaling__UpdateFunc();
	void SpindleUpperRowScaling__FinishedFunc();
	void SpindleUpperRowScaling__UpdateFunc();
	void SelectedIconScaling__FinishedFunc();
	void SelectedIconScaling__UpdateFunc();
	void BndEvt__ConstructionButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__ExplorationButtonCollision_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__SurvivalButtonCollision_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__LabButtonCollision_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void BndEvt__BigButtonCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void ReceiveBeginPlay();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnCatalogClicked(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void OnSelectedItemTypeChanged(class UItemType* selectedItemType, bool bImmediate);
	void OnUnlockedItemsChanged(TArray<class UClass*> NewUnlockedItems);
	void OnResearchPointBalanceChanged(float NewResearchPointBalance);
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void BndEvt__CrackableActorComponent_K2Node_ComponentBoundEvent_1_OnCrackedStateChanged__DelegateSignature(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void DPadUp_Release();
	void OnNavigateUpBP(class APlayerController* Controller);
	void OnNavigateDownBP(class APlayerController* Controller);
	void OnNavigateRightBP(class APlayerController* Controller);
	void OnNavigateLeftBP(class APlayerController* Controller);
	void DPadDown_Release();
	void DPadLeft_Release();
	void DPadRight_Release();
	void BndEvt__BigButtonCoverCollision_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void OnSpindleIconBeginCursorOver(class UPrimitiveComponent* Primitive);
	void OnSpindleIconEndCursorOver(class UPrimitiveComponent* Primitive);
	void ActiveCatalogEntryChanged(bool bImmediate);
	void ReceiveActorBeginCursorOver();
	void ReceiveActorEndCursorOver();
	void HandleCreativeModeCatalogUnlockedChanged();
	void ExecuteUbergraph_BackpackCatalog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
