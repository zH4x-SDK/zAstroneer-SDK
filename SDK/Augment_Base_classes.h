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

// BlueprintGeneratedClass Augment_Base.Augment_Base_C
// 0x0060 (0x06C0 - 0x0660)
class AAugment_Base_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UPowerComponent*                             Power;                                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        EquippedLight;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ActiveLight;                                              // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        InactiveLight;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAugmentComponent*                           augment;                                                  // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Sound_Augment_Attach;                                     // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Sound_Augment_Detach;                                     // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Augment_Base.Augment_Base_C");
		return ptr;
	}


	void PlayAugmentDetachSound();
	void PlayAugmentAttachSound();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature();
	void BndEvt__Augment_K2Node_ComponentBoundEvent_4_Signal__DelegateSignature();
	void BndEvt__Augment_K2Node_ComponentBoundEvent_5_Signal__DelegateSignature();
	void ExecuteUbergraph_Augment_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
