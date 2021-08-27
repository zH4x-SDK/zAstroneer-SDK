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

// BlueprintGeneratedClass Shelter_T2_BP.Shelter_T2_BP_C
// 0x008C (0x0808 - 0x077C)
class AShelter_T2_BP_C : public AShelter_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             OxygenatorSFX_Location;                                   // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         Spotlight_Door;                                           // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight_Door;                                          // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DoorLights;                                               // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HabitatLights;                                            // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USunlightDetectorComponent*                  SunlightDetector;                                         // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TetherAttachRoot_back;                                    // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               InteractCollisionForAutoselect;                           // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         cableSlot_3;                                              // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         cableSlot_2;                                              // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDeformableComponent*                        Deformable;                                               // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShelterT2_AnimBP_C*                         AnimBP_Ref;                                               // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MeshMaterial_Ref;                                         // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExteriorLightBitIndex;                                    // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OxygenRailBitIndex;                                       // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RTG_BitIndex;                                             // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InteriorLightBitIndex;                                    // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shelter_T2_BP.Shelter_T2_BP_C");
		return ptr;
	}


	void CHILD_GetTetherCircularAttachPoints(TArray<struct FCircularAttachPoint>* Array);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CHILD_SetupCableSlots();
	void CHILD_SetupCableSlotMaterials();
	void CHILD_SetAnimDoorOpen(bool IsDoorOpen);
	void CHILD_SetupAnimRef();
	void CHILD_SetAnimUnpackedState(bool IsPreUnpacked);
	void BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void SetLightsEnabled(bool Enabled);
	void CHILD_PlayOxygenSoundLoop();
	void CHILD_PlayPowerSoundLoop();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Shelter_T2_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
