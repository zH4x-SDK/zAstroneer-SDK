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

// BlueprintGeneratedClass ExoSatalliteIntro.ExoSatalliteIntro_C
// 0x00E4 (0x048C - 0x03A8)
class AExoSatalliteIntro_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      DropshipDummy;                                            // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        DropshipHatchLight4;                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        DropshipHatchLight3;                                      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        DropshipHatchLight2;                                      // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        DropshipHatchLight1;                                      // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        CharacterCustomizationPreviewPointLight;                  // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CharacterCustomizationPreviewRenderDummy;                 // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DropshipSpawnMarker;                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        Hull_Point_1;                                             // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        Hull_Point_2;                                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         Hull_Light_2;                                             // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         Hull_Light_1;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         PlanetBounceLIght;                                        // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Lighting;                                                 // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     LandingLocations;                                         // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ALanding_Locations_C*                        DropshipTarget;                                           // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	ETitleMenuCustomizationPreviewState                TitleMenuCustomizationState;                              // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	class UMotherShip_AnimBP_C*                        SatelliteAnimBP;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ETitleMenuCustomizationPreviewState                TargetTitleMenuCustomizationState;                        // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	float                                              DefaultCharacterPreviewLightIntensity;                    // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetCharacterPreviewLightIntensityAnimated;             // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingCharacterPreviewLightIntensityAnimated;           // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CharacterPreviewLightAnimationTimerHandle;                // 0x0470(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CharacterPreviewLightAnimDuration;                        // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedCharacterPreviewLightTime;                         // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                SetNextCustomizationStateTimerHandle;                     // 0x0480(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeInitialCustomizationStarted;                          // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExoSatalliteIntro.ExoSatalliteIntro_C");
		return ptr;
	}


	void OnGameplayStarted(bool StartedInSavedGame);
	void StartNewGame();
	void SetTitleMenuCustomizationState(ETitleMenuCustomizationPreviewState NewCustomizationState);
	void SetLandingLocations(class ALanding_Locations_C* LandingLocations);
	void PrepareStartingLocation();
	void SetupStartingLocation(class ALanding_Locations_C* Starting_Location);
	void GetClientInitialSpawnLocation(class APlayController* Controller, class USceneComponent** LocationComponent);
	void OnClientLaunch(class APlayController* Controller);
	void OnLocalPlayerLaunch();
	void PlayTutorialIntroCinematic();
	void LaunchDropship(class APlayController* Controller, class USceneComponent* Drop_Target, bool RelaunchOnExit);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnNewGameSetupComplete();
	void OnTutorialIntroCinematicComplete();
	void OnTutorialStart();
	void OnClientSelected(class APlayController* Controller);
	void HandleTitleScreenCharacterCustomizationCanceled();
	void HandleTitleScreenCharacterCustomizationStarted();
	void ApplyTargetMenuCustomizationState();
	void AnimateCharacterPreviewLight();
	void HandleTitleScreenCharacterCustomizationFinalizationCanceled();
	void HandleTitleScreenCharacterCustomizationFinalizationStarted();
	void ReceiveDestroyed();
	void OnRealDropshipSpawned();
	void ExecuteUbergraph_ExoSatalliteIntro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
