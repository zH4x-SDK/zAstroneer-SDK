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

// BlueprintGeneratedClass DeployableLandingPad.DeployableLandingPad_C
// 0x00A5 (0x0705 - 0x0660)
class ADeployableLandingPad_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        IndicatorMesh;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         LandingPadSlot;                                           // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULandingPadComponent*                        LandingPad;                                               // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroActionComponent*                       AstroAction;                                              // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AnchorSample3;                                            // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AnchorSample2;                                            // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AnchorSample1;                                            // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeployRetractComponent*                     DeployRetract;                                            // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LandingLightsAnim__Direction_8D0DD39F45CDE24D652BDBA868B4878F;// 0x06C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LandingLightsAnim;                                        // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              LandingPadSlotRef;                                        // 0x06D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    LightsMID;                                                // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusLightBitIndex;                                      // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_1;                               // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_2;                               // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_3;                               // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_4;                               // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Display_Lights_Bit_Index_5;                               // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_LandingPadCanDeploy;                                  // 0x0700(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_Deployed;                                             // 0x0701(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SERVER_Prev_LandingPadCanDeploy;                          // 0x0702(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LOCAL_PreviewIndicatorVisible;                            // 0x0703(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               didInitialSkyObstructionCheck;                            // 0x0704(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeployableLandingPad.DeployableLandingPad_C");
		return ptr;
	}


	void SetIndicatorMaterial();
	void SetDeployedState(bool Deploy);
	void OnRep_Deployed();
	void SERVER_UpdateUseSuppression();
	void UpdateUseContext();
	void OnRep_LandingPadCanDeploy();
	void SetAllLandingLightsOn(bool AreLightsOn);
	void MotionStateChanged();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void LandingLightsAnim__FinishedFunc();
	void LandingLightsAnim__UpdateFunc();
	void LandingLightsAnim__LightsOff__EventFunc();
	void LandingLightsAnim__LightsOn5__EventFunc();
	void LandingLightsAnim__LightsOn4__EventFunc();
	void LandingLightsAnim__LightsOn3__EventFunc();
	void LandingLightsAnim__LightsOn2__EventFunc();
	void LandingLightsAnim__LightsOn1__EventFunc();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void BndEvt__DeployRetract_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__DeployRetract_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void ReceiveTick(float DeltaSeconds);
	void ItemSetOnPad(class APhysicalItem* Item);
	void ItemRemovedFromPad(class APhysicalItem* Item);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_DeployableLandingPad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
