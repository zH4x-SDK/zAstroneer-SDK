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

// AnimBlueprintGeneratedClass rover_large_BP.rover_large_BP_C
// 0x03C0 (0x0790 - 0x03D0)
class Urover_large_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_005C7F0048DAD95F923875A09BC9B033;      // 0x03D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_B2357F2E4858725D786D578221CEB40F;// 0x0420(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A09E98D041BC43FFC4537697768F38EB;// 0x0450(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BCF84CBA4858F581CDD4D69FE26132B1;// 0x0508(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23CE94C74E72D4A069A9B9A05680F6E3;// 0x05C0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_980CD39647AF47CFE628C6BBC1C8B2CB;// 0x0678(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_24F680494B0D3E5EBF8771AE942C89F5;// 0x0730(0x0048)
	float                                              Wheel_Rotate;                                             // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Wheel_Turn;                                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Target_Wheel_Turn;                                        // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_1;                                                 // 0x0784(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass rover_large_BP.rover_large_BP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_rover_large_BP_AnimGraphNode_ModifyBone_23CE94C74E72D4A069A9B9A05680F6E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_rover_large_BP_AnimGraphNode_ModifyBone_980CD39647AF47CFE628C6BBC1C8B2CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_rover_large_BP_AnimGraphNode_ModifyBone_BCF84CBA4858F581CDD4D69FE26132B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_rover_large_BP_AnimGraphNode_ModifyBone_A09E98D041BC43FFC4537697768F38EB();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_rover_large_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
