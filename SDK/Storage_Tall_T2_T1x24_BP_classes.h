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

// BlueprintGeneratedClass Storage_Tall_T2_T1x24_BP.Storage_Tall_T2_T1x24_BP_C
// 0x0040 (0x06A0 - 0x0660)
class AStorage_Tall_T2_T1x24_BP_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ReferenceMesh;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Storage_Tall_T2_T1x24_BP.Storage_Tall_T2_T1x24_BP_C");
		return ptr;
	}


	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Storage_Tall_T2_T1x24_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
