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

// BlueprintGeneratedClass PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C
// 0x0023 (0x0703 - 0x06E0)
class APackagedItem_T1_StarterBreadboard_C : public APackagedItem_T1_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor_1;                                          // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LandingParticleSystem;                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlatformDeployedTutorialKey;                              // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TutorialEnabled;                                          // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasBeenPickedUpOnce;                                      // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               ShowTutorialPrompt;                                       // 0x0702(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C");
		return ptr;
	}


	void CheckOxygenatorTutorialCompleted(bool* OxygenatorTutorialComplete);
	void DisableAllTutorialTooltips();
	void EnableUnpackTooltip();
	void EnableRotatePromptTooltip();
	void EnablePickUpTooltip();
	void UpdateTutorialPickedUp(bool PickedUp);
	void HandlePackageLanded();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleItemUnpacked();
	void Authority_Unpack();
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void DoLandingEffectsRPC();
	void ReleasedFromSlot(bool FromTool, bool NewOwner);
	void OnStartingItemCreated(class APhysicalItem* StarterItem);
	void HandleOnDeployReadyChanged(bool DeployReady);
	void HandleOnIndicatorVisibleChanged(bool IndicatorVisible);
	void ExecuteUbergraph_PackagedItem_T1_StarterBreadboard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
