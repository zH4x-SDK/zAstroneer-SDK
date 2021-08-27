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

// BlueprintGeneratedClass Platform_Ring_t1x6_p4.Platform_Ring_t1x6_p4_C
// 0x0063 (0x07B0 - 0x074D)
class APlatform_Ring_t1x6_p4_C : public APlatform_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	class UUseTriggerComponent*                        UseTrigger;                                               // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Trigger_Center;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Triggers;                                                 // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot_Back;                                           // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot_Front;                                          // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot2;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot1;                                               // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      CableSlotReference;                                       // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSlotReference>                      PrimarySlotRefs;                                          // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Platform_Ring_t1x6_p4.Platform_Ring_t1x6_p4_C");
		return ptr;
	}


	void GetTetherAttachPoints(TArray<struct FCircularAttachPoint>* AttachPoints);
	void UserConstructionScript();
	void SetupCableSlots();
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Platform_Ring_t1x6_p4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
