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

// BlueprintGeneratedClass Jetpack_BASE.Jetpack_BASE_C
// 0x00E0 (0x07B0 - 0x06D0)
class AJetpack_BASE_C : public AJetpackItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PrintPreviewMesh;                                         // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             printheight;                                              // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ThrustEffect;                                             // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BaseMesh_FaceRight;                                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BaseMesh_FaceLeft;                                        // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      NozzleMesh;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LowFuelLightBlinkLoop__Direction_EF59FF2B4E55FD2AE5390EA622435EE9;// 0x0710(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LowFuelLightBlinkLoop;                                    // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UJetpack_AnimBP_C*                           NozzleAnimRef;                                            // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LowFuelLightBitIndex;                                     // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    JetpackNozzleMaterialRef;                                 // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowFuelLightBlinkFrequency;                               // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NozzleDirInterpolationSpeed;                              // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NeutralNozzleDir;                                         // 0x0740(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeployed;                                               // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	struct FTimerHandle                                NozzleInterpolationHandle;                                // 0x0750(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CurrentNozzleDir;                                         // 0x0758(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	TArray<struct FVector>                             TargetNozzleDirRecords;                                   // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsThrustActive;                                           // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	int                                                MaxTargetDirSamples;                                      // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EffectiveNozzleTargetDir;                                 // 0x0780(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FString                                     Jetpack_Audio_On;                                         // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Jetpack_Audio_Off;                                        // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Jetpack_BASE.Jetpack_BASE_C");
		return ptr;
	}


	void UpdateNozzleTarget(const struct FVector& TargetNozzleDir);
	void SFX_Stowed();
	void SFX_Deployed();
	void SFX_SuccessfulActivation();
	void SFX_FailedActivation();
	void UpdateCurrentNozzleDir(const struct FVector& Direction);
	void InterpolateNozzleDir();
	void SetNozzleNeutralHeading(bool SnapToNeutralHeading);
	void CreateLowFuelLightMaterialInstance();
	void SetLowFuelStateActive(bool StateActive);
	void SetFuelLightEnabled(bool LightEnabled);
	void SetJetpackThrustActive(bool ThrustActive);
	void SetNozzleTargetHeading(const struct FVector& TargetHeading, bool SnapToTarget);
	void SetJetpackDeployed(bool Deployed, bool Mirrored);
	void SetJetpackOrientation(bool Mirrored);
	void UserConstructionScript();
	void LowFuelLightBlinkLoop__FinishedFunc();
	void LowFuelLightBlinkLoop__UpdateFunc();
	void LowFuelLightBlinkLoop__DisableLight__EventFunc();
	void LowFuelLightBlinkLoop__EnableLight__EventFunc();
	void ReceiveBeginPlay();
	void StartLowFuelLightLoop();
	void StopLowFuelLightLoop();
	void OnJetpackActived(bool Activated);
	void OnAttemptedActivationNoFuel();
	void OnUpdateNozzleDirection(const struct FVector& NewNozzleDirection);
	void OnJetpackDeployed(const struct FVector& NeutralPosition, bool bMirrored);
	void OnJetpackStowed();
	void OnFuelIsLow(bool bIsLow);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Jetpack_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
