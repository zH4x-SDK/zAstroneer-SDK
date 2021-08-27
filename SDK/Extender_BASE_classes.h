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

// BlueprintGeneratedClass Extender_BASE.Extender_BASE_C
// 0x0070 (0x06D0 - 0x0660)
class AExtender_BASE_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Tether_Collision;                                         // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         tetherslot;                                               // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      TetherAttach;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         InputSlot;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         outputSlot;                                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformableComponent*                        Deformable;                                               // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConsumptionMaterial;                                      // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GenerationMaterial;                                       // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Extender_BASE.Extender_BASE_C");
		return ptr;
	}


	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData);
	void BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void ReceiveBeginPlay();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Extender_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
