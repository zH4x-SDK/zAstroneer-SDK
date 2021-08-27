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

// BlueprintGeneratedClass Slottable_Item.Slottable_Item_C
// 0x007C (0x06DC - 0x0660)
class ASlottable_Item_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Sound_Event_Dropped_In_World;                             // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Sound_Event_Picked_Up_from_World;                         // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Sound_Event_Large_Impact;                                 // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Sound_Event_Medium_Impact;                                // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Sound_Event_Small_Impact;                                 // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Audio_Bank;                                               // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Large_Impact_Int;                                         // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Medium_Impact_Int;                                        // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Small_Impact_Int;                                         // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Slottable_Item.Slottable_Item_C");
		return ptr;
	}


	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Slottable_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
