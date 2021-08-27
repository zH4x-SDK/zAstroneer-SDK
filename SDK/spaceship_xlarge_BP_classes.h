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

// AnimBlueprintGeneratedClass spaceship_xlarge_BP.spaceship_xlarge_BP_C
// 0x03A8 (0x0778 - 0x03D0)
class Uspaceship_xlarge_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0B44FE0847A43E5F253A568FD7536F5D;      // 0x03D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_C202A38946884D14BEC13AA716F4748C;// 0x0420(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8A7B3EDD48DF317306347495D4CB8A64;// 0x0450(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F00925FC46DF80EA9AAE6BBEEEB65204;// 0x0498(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_269B07B948210FC5C3D8C6884D0A4CC9;// 0x0550(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B0DFA8C545D7A7E3CFC2BBAAA357079A;// 0x0608(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_646BB921447B6B5C35E3D7B3D4EED262;// 0x06C0(0x00B8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass spaceship_xlarge_BP.spaceship_xlarge_BP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_spaceship_xlarge_BP_AnimGraphNode_ModifyBone_B0DFA8C545D7A7E3CFC2BBAAA357079A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_spaceship_xlarge_BP_AnimGraphNode_ModifyBone_646BB921447B6B5C35E3D7B3D4EED262();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_spaceship_xlarge_BP_AnimGraphNode_ModifyBone_269B07B948210FC5C3D8C6884D0A4CC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_spaceship_xlarge_BP_AnimGraphNode_ModifyBone_F00925FC46DF80EA9AAE6BBEEEB65204();
	void ExecuteUbergraph_spaceship_xlarge_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
