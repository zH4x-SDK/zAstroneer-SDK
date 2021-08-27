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

// BlueprintGeneratedClass TerrainAnalyzer.TerrainAnalyzer_C
// 0x0089 (0x0731 - 0x06A8)
class ATerrainAnalyzer_C : public AResourceBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	class UPowerComponent*                             Power;                                                    // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh___Equipped;                                    // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh___Active;                                      // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh___Inactive;                                    // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh___Progress_Indicator;                          // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh___Colour_Indicator;                            // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAugmentComponent*                           augment;                                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainAnalyzerBP_C*                        TerrainAnalyzerBP;                                        // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Bar_Material;                                             // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Full_Scale;                                               // 0x0700(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Resource_Material;                                        // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                State_Indicators;                                         // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              NextAnalysisTick;                                         // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfAnalysisTicks;                                    // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Begun;                                                // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TerrainAnalyzer.TerrainAnalyzer_C");
		return ptr;
	}


	void UpdateMaterials();
	void SetAugmentEquippedState(bool IsEquipped);
	void SetAugmentActiveState(bool IsActive);
	void SetAnalyzerState(TEnumAsByte<ETerrainAnalyzerState> NewParam);
	void OnAnalysisContinued();
	void OnAnalysisPaused();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void SetView();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void ReleasedFromSlot(bool FromTool, bool NewOwner);
	void PickedUpFromWorld();
	void BndEvt__Augment_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__Augment_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature();
	void ExecuteUbergraph_TerrainAnalyzer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
