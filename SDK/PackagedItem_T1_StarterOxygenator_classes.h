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

// BlueprintGeneratedClass PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C
// 0x0037 (0x0717 - 0x06E0)
class APackagedItem_T1_StarterOxygenator_C : public APackagedItem_T1_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor_1;                                          // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LandingParticleSystem;                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowTutorialPrompt;                                       // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	struct FName                                       OxygenatorDeployedTutorialKey;                            // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShelter_T4_Starter_C*                       StarterShelterRef;                                        // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                HoverCount;                                               // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPickedUp;                                               // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDeploy;                                                // 0x0715(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TutorialEnabled;                                          // 0x0716(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PackagedItem_T1_StarterOxygenator.PackagedItem_T1_StarterOxygenator_C");
		return ptr;
	}


	void DisableTutorialTooltips();
	void EnableUnpackPromptTooltip();
	void EnablePlacePromptTooltip();
	void TutorialCursorOver(bool OverBegin);
	void TutorialPickedUp();
	void TutorialDroppedInWorld();
	void TutorialPlacedInSlot(const struct FSlotReference& NewSlot);
	void CheckUpdateTutorial(bool CanDeploy);
	void TestSlottedToTargetSlot(const struct FSlotReference& NewSlot);
	void UpdateShelterHologram();
	void SetupStarterShelterRef(class AShelter_T4_Starter_C* StarterShelter);
	void HandlePackageLanded();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleItemUnpacked();
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ReceiveActorBeginCursorOver();
	void ReceiveActorEndCursorOver();
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void Authority_Unpack();
	void ReleasedFromSlot(bool FromTool, bool NewOwner);
	void DoLandingEffectsRPC();
	void HandleOnDeployReadyChanged(bool DeployReady);
	void ExecuteUbergraph_PackagedItem_T1_StarterOxygenator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
