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

// BlueprintGeneratedClass POI_ApolloLEM_BP.POI_ApolloLEM_BP_C
// 0x0080 (0x06E0 - 0x0660)
class APOI_ApolloLEM_BP_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            AudioLoopRadius_Large;                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            AudioLoopRadius_Small;                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroActionComponent*                       AstroAction;                                              // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 Light_Flare_Billboard_Right;                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialBillboardComponent*                 Light_Flare_Billboard_Left;                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlashStandbyLights_ForceOn_3C643BE24FFB8C644B53FDBFCDDE6C25;// 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FlashStandbyLights_TimeWarp_3C643BE24FFB8C644B53FDBFCDDE6C25;// 0x06B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FlashStandbyLights__Direction_3C643BE24FFB8C644B53FDBFCDDE6C25;// 0x06B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FlashStandbyLights;                                       // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TakePictureActionType;                                    // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlashingLights_MID;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 PhotoTimerCurve;                                          // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_ApolloLEM_BP.POI_ApolloLEM_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void FlashStandbyLights__FinishedFunc();
	void FlashStandbyLights__UpdateFunc();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void Visual_Photo_Delay_Timer();
	void Remove_Use_Suppression(class UAstroAction* EndedAction);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__AudioLoopRadius_Small_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AudioLoopRadius_Large_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_POI_ApolloLEM_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
