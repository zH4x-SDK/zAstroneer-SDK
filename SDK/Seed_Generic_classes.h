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

// BlueprintGeneratedClass Seed_Generic.Seed_Generic_C
// 0x00E1 (0x0741 - 0x0660)
class ASeed_Generic_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Uprooteffect;                                             // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SeedMesh;                                                 // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SeedMeshAnchor;                                           // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SpawnedPlantAnchor;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             GrowingAnchor;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GrowingMesh;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrowthAnim_GrowthProgress_1868FA3C4E3C168A7144B6A80EA8B357;// 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GrowthAnim__Direction_1868FA3C4E3C168A7144B6A80EA8B357;   // 0x06BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrowthAnim;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              REP_Growth;                                               // 0x06C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SERVER_Growing;                                           // 0x06CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06CD(0x0003) MISSED OFFSET
	float                                              Growth_Rate;                                              // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_Movable;                                              // 0x06D4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	struct FTimerHandle                                Kill_Timer;                                               // 0x06D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Picked_Up;                                                // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SERVER_Anchored;                                          // 0x06E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SERVER_UseSuppressed;                                     // 0x06E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x06E3(0x0005) MISSED OFFSET
	struct FName                                       UseSuppressionID;                                         // 0x06E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PlantClass;                                               // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingGrowthMeshScale;                                  // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalGrowthMeshScale;                                     // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrowthMeshOffset;                                         // 0x0700(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SeedMeshOffset;                                           // 0x070C(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 GrowthMeshGrowthCurve;                                    // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 SeedMeshGrowthCurve;                                      // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SeedMeshScale;                                            // 0x0728(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Uprooted;                                                 // 0x0734(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0735(0x0003) MISSED OFFSET
	class UClass*                                      Respawn_Uprooted_Seed;                                    // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInitialized;                                            // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seed_Generic.Seed_Generic_C");
		return ptr;
	}


	void Replace_Seed();
	void Check_Uprooted();
	void OnRep_Uprooted();
	void GetSpawnedPlantTransform(struct FTransform* SpawnedPlantTransform);
	void Apply_Planted_Tooltip();
	void OnRep_SERVER_Growing();
	void SERVER_UpdateUseSuppression();
	void GetSeedFamilyItemType(class UClass** SeedFamily);
	void SERVER_RecordPlantedTelemetryAndAchievements();
	void SERVER_Replace_Seed_W_Plant();
	void OnRep_REP_Movable();
	void OnRep_REP_Growth();
	void Update_View();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void GrowthAnim__FinishedFunc();
	void GrowthAnim__UpdateFunc();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void Spawn_Plant();
	void PickedUpFromWorld();
	void ReceiveBeginPlay();
	void Initial_Kill();
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void ResumeSeedGrowth();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Play_BuryEffect();
	void DestroyFinished(class UParticleSystemComponent* PSystem);
	void Destroy_Particle();
	void MULTI_Seed_Spawn_SFX();
	void BndEvt__TerrainComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void Multicast_Plant_Failure_FX();
	void ExecuteUbergraph_Seed_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
