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

// BlueprintGeneratedClass ResourceCanister_Reusable.ResourceCanister_Reusable_C
// 0x0038 (0x0718 - 0x06E0)
class AResourceCanister_Reusable_C : public AStorageCanister_Reusable_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        IndicatorRing;                                            // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        IndicatorLight;                                           // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LightMaterialInstance;                                    // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IndicatorRingMaterialInstance;                            // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EmptyRingColor;                                           // 0x0708(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceCanister_Reusable.ResourceCanister_Reusable_C");
		return ptr;
	}


	void UpdateTankVisuals_Internal();
	void UserConstructionScript();
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__ItemComponent_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void PlayDrainedAudio();
	void PlayFilledAudio();
	void UpdateTankVisuals();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ExecuteUbergraph_ResourceCanister_Reusable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
