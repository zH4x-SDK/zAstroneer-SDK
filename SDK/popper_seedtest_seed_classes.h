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

// BlueprintGeneratedClass popper_seedtest_seed.popper_seedtest_seed_C
// 0x0051 (0x06B1 - 0x0660)
class Apopper_seedtest_seed_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Growth_Mesh;                                              // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              REP_Growth;                                               // 0x0698(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SERVER_Growing;                                           // 0x069C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x069D(0x0003) MISSED OFFSET
	float                                              Growth_Rate;                                              // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_Movable;                                              // 0x06A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	struct FTimerHandle                                Kill_Timer;                                               // 0x06A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Picked_Up;                                                // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass popper_seedtest_seed.popper_seedtest_seed_C");
		return ptr;
	}


	void OnRep_REP_Movable();
	void OnRep_REP_Growth();
	void Update_View();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void Spawn_Spiker();
	void PickedUpFromWorld();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Initial_Kill();
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void ExecuteUbergraph_popper_seedtest_seed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
