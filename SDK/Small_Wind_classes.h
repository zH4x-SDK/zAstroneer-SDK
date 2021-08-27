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

// BlueprintGeneratedClass Small_Wind.Small_Wind_C
// 0x0054 (0x06B4 - 0x0660)
class ASmall_Wind_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemPad*                                    ItemPad;                                                  // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorWindPowerGeneratorComponent*           ActorWindPowerGenerator;                                  // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFolded;                                                 // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RotationAnimBlocked;                                      // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x06A2(0x0002) MISSED OFFSET
	float                                              CurrWindAnimSpeed;                                        // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ClearRotationAnimBlockTimer;                              // 0x06A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OldWindAnimSpeed;                                         // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Small_Wind.Small_Wind_C");
		return ptr;
	}


	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnPickedUpFromWorld_Event_1(bool PhysicalMovement);
	void CustomEvent_1(bool NewOwner);
	void CustomEvent_2();
	void CustomEvent_3();
	void BndEvt__ActorWindPowerGenerator_K2Node_ComponentBoundEvent_0_OnWindPowerAnimationDataChanged__DelegateSignature(const struct FVector& WindNormal, float WindSpeed);
	void UnblockRotationAnim();
	void UpdateWindPowerAnim();
	void CustomEvent_4(class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal);
	void ExecuteUbergraph_Small_Wind(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
