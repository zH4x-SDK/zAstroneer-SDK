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

// BlueprintGeneratedClass Splitter_3Way.Splitter_3Way_C
// 0x0098 (0x07A8 - 0x0710)
class ASplitter_3Way_C : public AStreamingPowerSplitter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0710(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            TetherCollision;                                          // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         tetherslot;                                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      TetherAttach;                                             // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformableComponent*                        Deformable;                                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AnchorSample3;                                            // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AnchorSample2;                                            // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AnchorSample1;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomChildActorComponent*                  ControlPanel;                                             // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot3;                                               // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot1;                                               // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot2;                                               // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SplitterLightsMaterialInstance;                           // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GenerationGauge;                                          // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConsumptionGauge;                                         // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Splitter_3Way.Splitter_3Way_C");
		return ptr;
	}


	void GetControlPanel(class ASplitterControlPanel_C** ControlPanel);
	void UpdateSplitterLights(const struct FStreamingPowerSplitterReplicationData& SplitterRepData);
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void BndEvt__ActorStreamingPowerNode_K2Node_ComponentBoundEvent_0_UpdateStreamingNodePowerVisualization__DelegateSignature(const struct FStreamingPowerNodeVisualizationData& VisualizationData);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void ReceiveBeginPlay();
	void OnControlPanelCrackedChanged(class UCrackableActorComponent* CrackableActorComponent, bool bIsCracked);
	void HandleSplitterVisualizationUpdate();
	void ExecuteUbergraph_Splitter_3Way(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
