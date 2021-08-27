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

// AnimBlueprintGeneratedClass HazcomShoot_Flower01_AnimBP.HazcomShoot_Flower01_AnimBP_C
// 0x0368 (0x0738 - 0x03D0)
class UHazcomShoot_Flower01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BFA554F444B44CD038A3628AA155CB69;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A0F84DB4B476B0CC1E916AD22E3D82D;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5DE8F9BD476CA962387AFEAC77446801;      // 0x0490(0x0068)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_4A0B579644C1421E7412A69EDAC343F9;// 0x04F8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2A2E37247514AFBEB8C69A5DC110126;// 0x0570(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1F8743BC49A33AEC5977F2974435C1A4;// 0x05E0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AAE823D143649790268032A5D6D6AE95;// 0x0698(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_588AA48D44D44917C0C156BB3EE96560;// 0x06E0(0x0048)
	struct FRotator                                    CurrentAttackRotator;                                     // 0x0728(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              IsWarning;                                                // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HazcomShoot_Flower01_AnimBP.HazcomShoot_Flower01_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_HazcomShoot_Flower01_AnimBP_AnimGraphNode_ModifyBone_1F8743BC49A33AEC5977F2974435C1A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HazcomShoot_Flower01_AnimBP_AnimGraphNode_TwoWayBlend_4A0B579644C1421E7412A69EDAC343F9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_HazcomShoot_Flower01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
