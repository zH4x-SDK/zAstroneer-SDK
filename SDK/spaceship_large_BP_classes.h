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

// AnimBlueprintGeneratedClass spaceship_large_BP.spaceship_large_BP_C
// 0x02F0 (0x06C0 - 0x03D0)
class Uspaceship_large_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D99E27B241DBFA3D07CC7D912FBD22C5;      // 0x03D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_4CC80D8C44105521F49151B96CBC0FD5;// 0x0420(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AD180D5846112186D2EF41B5B86579B7;// 0x0450(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_293B02B94BBCC3751E89C7B5A60B9730;// 0x0498(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_534585094FC3AA6D0B69FA9B963291D3;// 0x0550(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2694EB1143136048EABC3FBA35026F6B;// 0x0608(0x00B8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass spaceship_large_BP.spaceship_large_BP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_spaceship_large_BP_AnimGraphNode_ModifyBone_2694EB1143136048EABC3FBA35026F6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_spaceship_large_BP_AnimGraphNode_ModifyBone_534585094FC3AA6D0B69FA9B963291D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_spaceship_large_BP_AnimGraphNode_ModifyBone_293B02B94BBCC3751E89C7B5A60B9730();
	void ExecuteUbergraph_spaceship_large_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
