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

// BlueprintGeneratedClass Scanner_Probe.Scanner_Probe_C
// 0x008C (0x084C - 0x07C0)
class AScanner_Probe_C : public AScanner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             PingEffectSpawnPoint;                                     // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlaceholderHologram;                                      // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Lights_MID;                                               // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<EProximityLightState>                       LightStates;                                              // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsBlinkOn;                                                // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0819(0x0007) MISSED OFFSET
	struct FTimerHandle                                BlinkTimer;                                               // 0x0820(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BlinkTimeSeconds;                                         // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PingDurationSeconds;                                      // 0x082C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProximityLightDelaySeconds;                               // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPingOn;                                                 // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Consume_MID;                                              // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PingParticleEffect;                                       // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfProximityLights;                                  // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Scanner_Probe.Scanner_Probe_C");
		return ptr;
	}


	void UpdateScannerMaterial();
	void GetMidRangeLightState(float DistancePercentage, int LightIndex, EProximityLightState BlinkState, EProximityLightState* LightState);
	void SpawnPingEffect();
	void OnBlinkChanged();
	void UpdateLightsOn();
	void GetIsLightOn(EProximityLightState State, bool* IsOn);
	void SetLightStates(EProximityLightState LightOneState, EProximityLightState LightTwoState, EProximityLightState LightThreeState);
	void SetLightsOn(bool LightOneOn, bool LightTwoOn, bool LightThreeOn);
	void UpdateLightStates();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ReceiveBeginPlay();
	void Ping();
	void ScanFailed();
	void OnStateChanged();
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Scanner_Probe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
