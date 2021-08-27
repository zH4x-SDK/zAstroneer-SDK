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

// AnimBlueprintGeneratedClass medium_printer_anim_bp.medium_printer_anim_bp_C
// 0x0184 (0x0554 - 0x03D0)
class Umedium_printer_anim_bp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7D898EF547E0FDEC0D24AE9EB643D0C8;      // 0x03D8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6C94F5134EAB5430DFBC74B40C71FC83;// 0x0420(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4F483A454A553F69837C38807127F72C;// 0x04D8(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_FF3852FB4E142F28EAED1AA3B86BCFA3;// 0x0520(0x0030)
	float                                              Head_Height;                                              // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass medium_printer_anim_bp.medium_printer_anim_bp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_medium_printer_anim_bp_AnimGraphNode_ModifyBone_6C94F5134EAB5430DFBC74B40C71FC83();
	void ExecuteUbergraph_medium_printer_anim_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
