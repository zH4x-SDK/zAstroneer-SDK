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

// BlueprintGeneratedClass TetherPost.TetherPost_C
// 0x00F0 (0x0750 - 0x0660)
class ATetherPost_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UAstroPlayFabEventNotificationComponent*     AstroPlayFabEventNotification;                            // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformableComponent*                        Deformable;                                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDistanceLightFaderComponent*                DistanceLightFader;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                      // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherPostComponent*                        TetherPost;                                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Indicator_Slot;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      TetherAttach;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Tether_Attach_Collision;                                  // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Slot;                                              // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Light_Sphere;                                             // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tether_Distance;                                          // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Intensity;                                          // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_Oxygen;                                               // 0x06E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DoNotAutomaticallyAttachOnMapLoad;                        // 0x06E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06E2(0x0006) MISSED OFFSET
	TMap<struct FString, class UTetherDecorationConfig*> DecorationsByEvent;                                       // 0x06E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UStaticMeshComponent*                        TetherDecorationMeshComponent;                            // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                REP_DecorationOptionIndex;                                // 0x0740(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class UTetherDecorationConfig*                     MostRecentlyActivatedDecoration;                          // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TetherPost.TetherPost_C");
		return ptr;
	}


	void OnRep_REP_DecorationOptionIndex();
	void InitializeDecoration(TArray<struct FString>* ActiveEventNames);
	void UpdateDecorationMaterialAndLightColor();
	void SetTetherDecorationActive(bool IsDecorationActive, bool SelectNewDecorationOption, class UTetherDecorationConfig* DecorationConfig);
	void Set_Oxygen(bool Oxygen);
	void OnRep_REP_Oxygen();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_4_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void StartInWorld();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__TetherAttach_K2Node_ComponentBoundEvent_0_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnEventActiveStatusChanged__DelegateSignature(const struct FString& EventName, bool bIsEventActive);
	void BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature(TArray<struct FString>* activeEventsOfInterest);
	void ExecuteUbergraph_TetherPost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
