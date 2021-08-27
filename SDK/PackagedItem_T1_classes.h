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

// BlueprintGeneratedClass PackagedItem_T1.PackagedItem_T1_C
// 0x0070 (0x06E0 - 0x0670)
class APackagedItem_T1_C : public APackageActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             RepackageSpawnOffset;                                     // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             VisualsWrapper;                                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Indicator_Preview_Slot;                                   // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             IndicatorPreviewSlotWrapper;                              // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeployableItemPackageComponent*             DeployableItemPackage;                                    // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      UnpackAction;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDeployed;                                            // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyToDeploy;                                            // 0x06C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06C2(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ButtonsAndIconsMID;                                       // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ButtonLightIndex;                                         // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HologramEmitterIndex;                                     // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UseSuppressionID;                                         // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PackagedItem_T1.PackagedItem_T1_C");
		return ptr;
	}


	void HandleOnIndicatorVisibleChanged(bool IndicatorVisible);
	void HandleOnAssignPackageMaterial(class UMaterialInterface* PackageMaterial);
	void HandleOnDeployReadyChanged(bool DeployReady);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Authority_Unpack();
	void DoUnpackAudioRPC();
	void BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_PackageIndicatorEvent__DelegateSignature(bool IndicatorVisible);
	void BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_1_PackageReadyEvent__DelegateSignature(bool DeployReady);
	void BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_2_AssignMaterialEvent__DelegateSignature(class UMaterialInterface* PackageMaterial);
	void ExecuteUbergraph_PackagedItem_T1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
