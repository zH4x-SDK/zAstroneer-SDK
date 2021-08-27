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

// AnimBlueprintGeneratedClass ShelterT2_AnimBP.ShelterT2_AnimBP_C
// 0x0D7D (0x114D - 0x03D0)
class UShelterT2_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_024B44DE441C6CDF8ECDDA9F15B226C2;      // 0x03D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_975F968E4AEC49F3DC569EAD4A516A83;// 0x0420(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_367CF646468CBA5AA377ED80953676E1;// 0x0460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63A10EE54C826EBB24344FAB4E46F7E8;// 0x04E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6A747D56405B53749AE164B79C088802;// 0x0560(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D76287C24AFA1A89F1BD1D9E01A16E59;// 0x05E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2166A0D74A2C9192781E32B954F1F857;// 0x0660(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B346897941221E1099109F9CFF64532C;// 0x06E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A0D202B495FF70A42A783A5BA695F51;// 0x0760(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5580D95648F2C790B1E2ED9BF4D42997;// 0x07E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0476FFFE497F24C1C4782EA0B8E12A35;// 0x0850(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7D27C8204BF2CD161525718814A73DFF;// 0x0898(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6C337B4A4011E81684B07DB560E295F5;// 0x0908(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6EE95AF3492F954162A83CB042949DC6;// 0x0950(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6FEE67DA4AFDDEF01D99008D24FCBBF4;// 0x09C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF828422486A9942A6690DAB0E24948A;// 0x0A08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0A5C26346BBF69BD3FD30B85463AE87;// 0x0A78(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CF426FD3407A8E9DA797E4B7659721AD;// 0x0AC0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E919CDD4221B82F4478FCB38C6C667F;// 0x0AF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0DCE683F42F67B66147C4794F61FD8C0;// 0x0B40(0x00D8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0C18(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F9ADCD749D7B95A9C8ABDAD66192DD7;// 0x0C20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF70FACF4D98881AE661BFBE636980CC;// 0x0CA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0ABCD8DA4A81FAA6972CD8AC73801D59;// 0x0D20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2D1F1BA408BECABACBEBAB791B2AE97;// 0x0DA0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9C56EF3041B83D3854D58D9834207A0E;// 0x0E10(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7102ECDC4327684BA63EC59F76FA0BF9;// 0x0E58(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_526CA73848B9C50BB5B085AB152970C2;// 0x0EC8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_71F5220D401C4771E4D2D198281B63B8;// 0x0F10(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_844CBC27497D9F4D18648FBFEC03C44E;// 0x0F48(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1E760B38410D99832E3756BEA165F9BF;// 0x0F90(0x00D8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F94EDF844B1FC48AA06F9EBDAB4468FA;// 0x1068(0x00E0)
	bool                                               IsDoorOpen;                                               // 0x1148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUnpacked;                                               // 0x1149(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPreUnpacked;                                            // 0x114A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPreunpackedandUnpacked;                                 // 0x114B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NotPreunpackedIsUnpacked;                                 // 0x114C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShelterT2_AnimBP.ShelterT2_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_7A0D202B495FF70A42A783A5BA695F51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_B346897941221E1099109F9CFF64532C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_D76287C24AFA1A89F1BD1D9E01A16E59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_2F9ADCD749D7B95A9C8ABDAD66192DD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_AF70FACF4D98881AE661BFBE636980CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_63A10EE54C826EBB24344FAB4E46F7E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_0ABCD8DA4A81FAA6972CD8AC73801D59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShelterT2_AnimBP_AnimGraphNode_TransitionResult_367CF646468CBA5AA377ED80953676E1();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ShelterT2_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
