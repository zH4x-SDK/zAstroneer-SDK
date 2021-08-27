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

// BlueprintGeneratedClass Paver_T2.Paver_T2_C
// 0x0060 (0x09F8 - 0x0998)
class APaver_T2_C : public AVehicleDeformer_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0998(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PlaceholderMesh;                                          // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Rail;                                            // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SlotRoot;                                                 // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaverRollerSpinAnim_SpinDegree_38C860294F854C4A644322A64B13CE91;// 0x09C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PaverRollerSpinAnim__Direction_38C860294F854C4A644322A64B13CE91;// 0x09C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PaverRollerSpinAnim;                                      // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NozzleOrientationBone;                                    // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RollerOrientationBone;                                    // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollerSpinDuration;                                       // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SedimentLowThreshold;                                     // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     NoSoilFailedActivationSound;                              // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Paver_T2.Paver_T2_C");
		return ptr;
	}


	void UserConstructionScript();
	void PaverRollerSpinAnim__FinishedFunc();
	void PaverRollerSpinAnim__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateDeformationNormal(const struct FVector& DeformationNormal);
	void CHILD_UpdateToolVisualState();
	void CHILD_UpdateSedimentGauge(float CurrentSedimentAvailable, float CurrentSedimentCapacity);
	void PlayDrillStartWithInsufficientSoilEffect();
	void ExecuteUbergraph_Paver_T2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
