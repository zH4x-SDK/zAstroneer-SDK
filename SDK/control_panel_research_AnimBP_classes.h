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

// AnimBlueprintGeneratedClass control_panel_research_AnimBP.control_panel_research_AnimBP_C
// 0x0B8A (0x0F5A - 0x03D0)
class Ucontrol_panel_research_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BF8F29724AB64965DFE75B953D99EA50;      // 0x03D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F2F36FB24F2A9DB7453EB49FBBCDB3C3;// 0x0420(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_313D89CF493AAAFFF05F538D955E76D4;// 0x0458(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E878B9594060BED47076DCAB6C431C5E;// 0x04D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4FC6DFEE42F834AAAD4444BBF9F204C4;// 0x0550(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5BBCE514946690C4C9E8095A0A960E7;// 0x05D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28534E9942982A15DF503B805F694ADB;// 0x0650(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BECEC4794F4E2BFB49F8CF92ED77EA82;// 0x06D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56D636FE43EC01C185BBBBA2A7FDB54C;// 0x0750(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB0FDF60458A6E24E9F4E3AF525F8074;// 0x07D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15DBE6544DBBCF387F085088898FB6AD;// 0x0850(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3A5FAE843DE98C805D4C78B5ABCCEA1;// 0x08D0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2039CD14486F61C338E04DAB836C9163;// 0x0940(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7448445243CC521FE49D10A08328AEF9;// 0x0A20(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D73AE0614B63A8842D456F81A97F743D;// 0x0A90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA44FCB447D834C35384BD8D2F888432;// 0x0AD8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7B048C664C1BA13EE56B0E8284B5A156;// 0x0B48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBEF05464EFF842D39946F95709D721F;// 0x0B90(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_12AB0A214C7E995FE36CFCB2755EF88A;// 0x0C00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DF8E3C04EA2A9FE0CA1329A82FB5EE7;// 0x0C48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9C055032477E80F49D653A9D536B6AE3;// 0x0CB8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F81B68454677D1D2EA8BDEB782A2125F;// 0x0D00(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BBBC6D78470A2AB91860A08626DE9DB8;// 0x0DD8(0x00E0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_283ECC77486A3E4F8CDC3982F6E3FAE2;// 0x0EB8(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D7EB92514B023D767EA9E2A053F5D797;      // 0x0EF0(0x0068)
	bool                                               ButtonCoverActive;                                        // 0x0F58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ButtonHoverActive;                                        // 0x0F59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass control_panel_research_AnimBP.control_panel_research_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_56D636FE43EC01C185BBBBA2A7FDB54C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_DB0FDF60458A6E24E9F4E3AF525F8074();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_4FC6DFEE42F834AAAD4444BBF9F204C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_BECEC4794F4E2BFB49F8CF92ED77EA82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_15DBE6544DBBCF387F085088898FB6AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_E878B9594060BED47076DCAB6C431C5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_28534E9942982A15DF503B805F694ADB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_control_panel_research_AnimBP_AnimGraphNode_TransitionResult_D5BBCE514946690C4C9E8095A0A960E7();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_control_panel_research_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
