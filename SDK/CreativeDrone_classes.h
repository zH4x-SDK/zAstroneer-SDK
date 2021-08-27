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

// BlueprintGeneratedClass CreativeDrone.CreativeDrone_C
// 0x0060 (0x0790 - 0x0730)
class ACreativeDrone_C : public ADroneBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ThrustEffect;                                             // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAstroActionComponent*                       AstroActionInstant;                                       // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DroneAudioListener;                                       // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         BodySlot;                                                 // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               flightLoopActive;                                         // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	class UClass*                                      TakePictureActionTypeInstant;                             // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDroneT1_AnimBP_C*                           AnimBP;                                                   // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CreativeDrone.CreativeDrone_C");
		return ptr;
	}


	void UpdateVFX();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleFlightStateChanged();
	void OnCreativeModeChanged(bool CreativeMode);
	void UpdateDroneVisibility();
	void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void UpdateClickability();
	void HandlePictureTaken();
	void TakePhoto();
	void ExecuteUbergraph_CreativeDrone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
