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

// BlueprintGeneratedClass ConsumableJumpjet_BP.ConsumableJumpjet_BP_C
// 0x0090 (0x0840 - 0x07B0)
class AConsumableJumpjet_BP_C : public AJetpack_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B0(0x0008) (Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    FuelGuageMaterialRef;                                     // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        FuelStateBarIndicies;                                     // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 FuelHealthCurve;                                          // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FuelBarsColor;                                            // 0x07D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyedEffect;                                          // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastPortionRemaining;                                     // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                FuelHealthSwitchIndex;                                    // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               FuelHealthSwitchStates;                                   // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FuelHealthSwitchGroup;                                    // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrustMinScale;                                           // 0x0810(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrustMaxScale;                                           // 0x081C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrustSmokeMin;                                           // 0x0828(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrustSmokeMax;                                           // 0x0834(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConsumableJumpjet_BP.ConsumableJumpjet_BP_C");
		return ptr;
	}


	void SFX_JumpjetDestroyed();
	void SFX_SetFuelHealthSwitchState();
	void SpawnDestroyedEffects();
	void UpdateFuelHealthState(float FuelHealth);
	void UpdateChargeGaugePercent(float ChargePercent);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CreateLowFuelLightMaterialInstance();
	void OnPortionChanged(float portionUsed);
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void Multicast_PlayDestroyedFX();
	void ExecuteUbergraph_ConsumableJumpjet_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
