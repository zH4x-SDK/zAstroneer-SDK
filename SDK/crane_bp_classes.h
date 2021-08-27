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

// AnimBlueprintGeneratedClass crane_bp.crane_bp_C
// 0x0290 (0x0660 - 0x03D0)
class Ucrane_bp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_20C635EE44808E3F8DF8EE9DF44E7B3E;      // 0x03D8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A796CC8F4E1E45DA1496D9B8E9F3850B;// 0x0420(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_3B69DCC5413E7328557953A5B5D2B686;// 0x0468(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0498(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_6EF18F9545DEBC679E0BBBB6DF5FC14C;    // 0x04A0(0x0170)
	struct FVector                                     Target_Location;                                          // 0x0610(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Target_Joint;                                             // 0x061C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0628(0x0008) MISSED OFFSET
	struct FTransform                                  Target_Transform;                                         // 0x0630(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass crane_bp.crane_bp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_crane_bp_AnimGraphNode_Fabrik_6EF18F9545DEBC679E0BBBB6DF5FC14C();
	void ExecuteUbergraph_crane_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
