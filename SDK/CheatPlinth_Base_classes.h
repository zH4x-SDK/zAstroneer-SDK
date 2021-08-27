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

// BlueprintGeneratedClass CheatPlinth_Base.CheatPlinth_Base_C
// 0x0078 (0x0708 - 0x0690)
class ACheatPlinth_Base_C : public ACheatPlinthBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             HoloItemTooltipAnchor;                                    // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot;                                                // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           BigHoloItemCollider;                                      // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CatalogIcon;                                              // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Left_Selector;                                            // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Right_Selector;                                           // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           BigHoloItemTooltip;                                       // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Item_Slot_Ref;                                            // 0x06E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsDisplayingCatalogHologramVersion;                       // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	class UTexture2D*                                  OverlayGraphic;                                           // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheatPlinth_Base.CheatPlinth_Base_C");
		return ptr;
	}


	void SpawnCopyOfHologramItem();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UpdateSelectedItem();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnClicked_Event_1(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void OnClicked_Event_0_Copy(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void OnReleasedFromSlot_Event_1(bool NewOwner);
	void OnReleaseItem(class APhysicalItem* Item);
	void BndEvt__BigHoloItemCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void CustomEvent_2(class UClass* SelectedItem);
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ExecuteUbergraph_CheatPlinth_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
