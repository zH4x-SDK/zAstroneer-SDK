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

// AnimBlueprintGeneratedClass geoethermal_small_bp.geoethermal_small_bp_C
// 0x0185 (0x0555 - 0x03D0)
class Ugeoethermal_small_bp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_96DAEBEF4AB4682FC31789AFF45CE1B5;      // 0x03D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_19F00D2F42D1617C141FAEAFA7C1BD27;// 0x0420(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F19C32FD41DB173EB152C7A665D51F13;// 0x0450(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C745B58B4DD7BEC1A4853FB30F9B7F43;// 0x0498(0x00B8)
	float                                              Pump_Value;                                               // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Pumping;                                                  // 0x0554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass geoethermal_small_bp.geoethermal_small_bp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_geoethermal_small_bp_AnimGraphNode_ModifyBone_C745B58B4DD7BEC1A4853FB30F9B7F43();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_geoethermal_small_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
