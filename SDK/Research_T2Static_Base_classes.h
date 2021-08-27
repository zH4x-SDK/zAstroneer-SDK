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

// BlueprintGeneratedClass Research_T2Static_Base.Research_T2Static_Base_C
// 0x0078 (0x06D8 - 0x0660)
class AResearch_T2Static_Base_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VisibleMesh;                                              // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Sound_Event_Dropped_In_World;                             // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Sound_Event_Picked_Up_from_World;                         // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     Impact_Location;                                          // 0x0698(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	struct FString                                     Large_Impact;                                             // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Medium_Impact;                                            // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Small_Impact;                                             // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Research_T2Static_Base.Research_T2Static_Base_C");
		return ptr;
	}


	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Research_T2Static_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
