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

// BlueprintGeneratedClass Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C
// 0x007F (0x07CC - 0x074D)
class APlatform_Net_T2x6_T1x1_P4_BP_C : public APlatform_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             NetTriggerEffectSpawnPoint;                               // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           NetTriggerVolume;                                         // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot4;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot3;                                               // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot2;                                               // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot1;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetTriggerLightSequence_SequenceProgress_F2BC47944ACA49304272458690F238A6;// 0x0788(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    NetTriggerLightSequence__Direction_F2BC47944ACA49304272458690F238A6;// 0x078C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x078D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          NetTriggerLightSequence;                                  // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NetTriggerItemTypes;                                      // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectCooldownDuration;                                   // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EffectCooldownActive;                                     // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UParticleSystem*                             NetTriggerParticleEffect;                                 // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PlatformLightsMaterialRef;                                // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        RailLightingBits;                                         // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LightSequenceDuration;                                    // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Platform_Net_T2x6_T1x1_P4_BP.Platform_Net_T2x6_T1x1_P4_BP_C");
		return ptr;
	}


	void DisableRailLighting();
	void UpdateRailLighting(float SequencePercent);
	void PlayNetTriggerEffects();
	void UserConstructionScript();
	void NetTriggerLightSequence__FinishedFunc();
	void NetTriggerLightSequence__UpdateFunc();
	void ReceiveBeginPlay();
	void SetupCableSlots();
	void SetupSecondarySlots();
	void SetupPrimarySlots();
	void OnObjectEnterNet(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Multicast_PlayNetTriggerEffect();
	void ResetNetTriggerCooldown();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Platform_Net_T2x6_T1x1_P4_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
