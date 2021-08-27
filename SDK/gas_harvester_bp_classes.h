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

// AnimBlueprintGeneratedClass gas_harvester_bp.gas_harvester_bp_C
// 0x03B4 (0x0784 - 0x03D0)
class Ugas_harvester_bp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_51EACB844FE508B2432DB18A12CEAB62;      // 0x03D8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C7AE3E5E4E12596F157CE5AB05B4A0A8;// 0x0420(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FA2FC7EC428D58B5674B04AF2BCAD7D4;// 0x04D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_8F2AD82A4C57CA31A8969389C5BAA4C0;// 0x0520(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D7CF053E4F83203B8D697693530381C6;// 0x0550(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_857BD6DB4CE3E9A778A4C5BAA2EADA0A;// 0x0608(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_992F4F4F4167AB58C898B1BC2437EDC0;// 0x06C0(0x00B8)
	bool                                               Pumping;                                                  // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	float                                              Pump_Value;                                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Arms_Value;                                               // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass gas_harvester_bp.gas_harvester_bp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_gas_harvester_bp_AnimGraphNode_ModifyBone_857BD6DB4CE3E9A778A4C5BAA2EADA0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_gas_harvester_bp_AnimGraphNode_ModifyBone_992F4F4F4167AB58C898B1BC2437EDC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_gas_harvester_bp_AnimGraphNode_ModifyBone_D7CF053E4F83203B8D697693530381C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_gas_harvester_bp_AnimGraphNode_ModifyBone_C7AE3E5E4E12596F157CE5AB05B4A0A8();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_gas_harvester_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
