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

// AnimBlueprintGeneratedClass PHazard_Knock_Static01_AnimBP.PHazard_Knock_Static01_AnimBP_C
// 0x0368 (0x0738 - 0x03D0)
class UPHazard_Knock_Static01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA55772543F4D892778A2A81C10B3FFD;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A88A25F4410F293DBAD97283642869E7;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E398335E46D5B128FA2580A7FEC1194D;      // 0x0490(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6AB87DC048A694B858D03392088300A8;// 0x04F8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_99F1641B4EFFA8498D118692BC9E4246;// 0x05B0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_39773EDB482FDAEF1A6049875450B157;// 0x05F8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_1FF6CC9B416F8120C5AFDAAC8450AC57;// 0x0640(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58A8822F48C39C5969FA668B8CEED29B;// 0x06B8(0x0070)
	struct FRotator                                    CurrentAttackRotator;                                     // 0x0728(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              IsWarning;                                                // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PHazard_Knock_Static01_AnimBP.PHazard_Knock_Static01_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_PHazard_Knock_Static01_AnimBP_AnimGraphNode_TwoWayBlend_1FF6CC9B416F8120C5AFDAAC8450AC57();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PHazard_Knock_Static01_AnimBP_AnimGraphNode_ModifyBone_6AB87DC048A694B858D03392088300A8();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_PHazard_Knock_Static01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
