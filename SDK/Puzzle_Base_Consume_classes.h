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

// BlueprintGeneratedClass Puzzle_Base_Consume.Puzzle_Base_Consume_C
// 0x0120 (0x04C8 - 0x03A8)
class APuzzle_Base_Consume_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UExplodableNonPhysicalItemComponent*         ExplodableNonPhysicalItem;                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProceduralStateComponent*                   ProceduralState;                                          // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Indicator;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ConsumeSlot;                                              // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockComponent*                         ActorLock;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorLockableComponent*                     ActorLockable;                                            // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ToolTip;                                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorEntityLinkComponent*                   ActorEntityLink;                                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemComponent*                              Item;                                                     // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Bottom;                                                   // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlaceholderTop;                                           // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldGravity*                               WorldGravity;                                             // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainPhysicsComponent*                    TerrainPhysics;                                           // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Impulse;                                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Snap;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Resources;                                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               REP_Blasted;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FString                                     Event_Created_String;                                     // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Event_Destroyed_String;                                   // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsUnlocked;                                               // 0x0490(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UClass*                                      RewardItem;                                               // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UChildSlotComponent*                         NewVar_1;                                                 // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              ConsumeSlotRef;                                           // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      SolutionResource;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PoppedTopActorType;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Puzzle_Base_Consume.Puzzle_Base_Consume_C");
		return ptr;
	}


	void DisablePlaceholderTop();
	void UpdateUnlockedState();
	void OnRep_IsUnlocked();
	void SERVER_FirePanel();
	void OnRep_REP_Blasted();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__ActorLockable_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature(bool Enable);
	void LaunchBouncy();
	void BndEvt__Damage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void SlotAttach(class APhysicalItem* Item);
	void SlotRelease(class APhysicalItem* Item);
	void ExecuteUbergraph_Puzzle_Base_Consume(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
