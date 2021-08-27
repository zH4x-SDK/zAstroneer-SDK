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

// BlueprintGeneratedClass Probe_Base.Probe_Base_C
// 0x0088 (0x06E8 - 0x0660)
class AProbe_Base_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            AudioLoopRadius;                                          // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            RealityTearPositionRadius;                                // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RealityTearSpawnPoint;                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockableComponent*                     ActorLockable;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockComponent*                         ActorLock;                                                // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UScannableComponent*                         Scannable;                                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ScannerSlot;                                              // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              ScannerSlotRef;                                           // 0x06A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RealityTearDistanceFromOrigin;                            // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	struct FString                                     Audio_Event_Play;                                         // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Audio_Event_Stop;                                         // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      ScannerItemType;                                          // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Probe_Base.Probe_Base_C");
		return ptr;
	}


	void SlotHasScanner(bool* HasScanner);
	void PositionTearSpawnPoint();
	void UpdateUnlockedIndicator(bool ItemInInputSlot);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnUnlockedProbesChanged();
	void OnBeginFinalResourceConsumption(class ULockingMechanism* SignallingLockingMechanism, const struct FLockChangedEventMetadata& EventData);
	void OnRealityTearOpenChanged(EWandererRealityTearOpenState State);
	void BndEvt__ActorLock_K2Node_ComponentBoundEvent_0_LockingMechanismSignal__DelegateSignature(class ULockingMechanism* SignallingLockingMechanism, const struct FLockChangedEventMetadata& EventData);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AudioLoopRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void MULTI_PlayScannerConsumptionSFX();
	void OnInputItemEmplaced(class APhysicalItem* Item);
	void OnInputItemUnemplaced(class APhysicalItem* Item);
	void ExecuteUbergraph_Probe_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
