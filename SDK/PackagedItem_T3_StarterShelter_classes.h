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

// BlueprintGeneratedClass PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C
// 0x0028 (0x0710 - 0x06E8)
class APackagedItem_T3_StarterShelter_C : public APackagedItem_T3_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E8(0x0008) (Transient, DuplicateTransient)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       UseTutorialKey;                                           // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnpackInProgress;                                         // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	class APlayerController*                           MoveInputSuppressedController;                            // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void HandleOnDeployReadyChanged(bool DeployReady);
	void HandleOnAssignPackageMaterial(class UMaterialInterface* PackageMaterial);
	void HandleOnIndicatorVisibleChanged(bool IndicatorVisible);
	void ExecuteUbergraph_PackagedItem_T3_StarterShelter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
