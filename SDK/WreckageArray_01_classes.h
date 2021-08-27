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

// BlueprintGeneratedClass WreckageArray_01.WreckageArray_01_C
// 0x00B8 (0x0460 - 0x03A8)
class AWreckageArray_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UExplodableNonPhysicalItemComponent*         ExplodableNonPhysicalItem;                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorSolarPowerGeneratorComponent*          ActorSolarPowerGenerator;                                 // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PowerSlotBodyStub;                                        // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         cableSlot;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorEntityLinkComponent*                   ActorEntityLink;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainPhysicsComponent*                    TerrainPhysics;                                           // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Power_Bar;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Cast_Component;                                           // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Billow_FX;                                                // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Billow_4_FX;                                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Billow_3_FX;                                              // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Billow_2_FX;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             particles;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Body;                                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldGravity*                               WorldGravity;                                             // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              PowerSlotRef;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    PowerConsumptionMaterial;                                 // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PowerSurplusMaterial;                                     // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WreckageArray_01.WreckageArray_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData);
	void BndEvt__Power_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__Power_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void ExecuteUbergraph_WreckageArray_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
