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

// AnimBlueprintGeneratedClass BaseShredderT4_AnimBP.BaseShredderT4_AnimBP_C
// 0x09C8 (0x0D98 - 0x03D0)
class UBaseShredderT4_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E403E1F24A9F3A5C5AFE9AA9FC0DD56C;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_079423D546855EC866FDEF86F0AAD847;// 0x0420(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_69DACE0546CECE8A5FDDE0992E5292F6;// 0x0490(0x0078)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC23916F405D6642F1F282BD0A5EAC3B;// 0x0510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3004A1D74B84EED3BB04E084E70D6BDB;// 0x0590(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98DFC9BB40CB4F740E70ADB85D8ACA8A;// 0x0610(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8617D97A46BEFDA569C75893E5460C64;// 0x0690(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3166620E45910133769B0586C895D37E;// 0x0710(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_322654E248E5DE43E4B6CA9FC00A1550;// 0x0790(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0248036947756630FCE66CB1672588AC;// 0x0810(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62C795E74A564F22917470927994E77A;// 0x0890(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D930B5F340C0FF1517894FACD05703F1;// 0x0910(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_89B9BAA849E8D42890282E8E4EED241F;// 0x0980(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_803BDDCF463CF91FCA6084BD0FAA6BBB;// 0x09C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6213F9A045F2F0E1CC2C068D7F117A86;// 0x0A38(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2411E6404B91304E006A0CADA6584A26;// 0x0A80(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FE894F994D9FC7C548B26AA79134CF8B;// 0x0AF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CADEF2814FECB349FA7B3DAB126CD8A2;// 0x0B38(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8144DBC94C1A7E125ACC9D955B65207B;// 0x0BA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B94F1BE94F086ABAE9370F8E1A79D101;// 0x0BF0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_77EB74D24D53B045FE725C9FC969D8A6;// 0x0C60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DAEF3E9345DC76227557C19FA925A9A3;// 0x0CA8(0x00D8)
	TEnumAsByte<EShredderState>                        ShredderState;                                            // 0x0D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D81(0x0003) MISSED OFFSET
	float                                              ShredderPowerLevel;                                       // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDeactivated;                                            // 0x0D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseShredderT4_AnimBP.BaseShredderT4_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_TransitionResult_8617D97A46BEFDA569C75893E5460C64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_TransitionResult_98DFC9BB40CB4F740E70ADB85D8ACA8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_TransitionResult_3166620E45910133769B0586C895D37E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_TransitionResult_322654E248E5DE43E4B6CA9FC00A1550();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_TransitionResult_62C795E74A564F22917470927994E77A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_TransitionResult_3004A1D74B84EED3BB04E084E70D6BDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_SequencePlayer_803BDDCF463CF91FCA6084BD0FAA6BBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_TransitionResult_DC23916F405D6642F1F282BD0A5EAC3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT4_AnimBP_AnimGraphNode_ApplyAdditive_69DACE0546CECE8A5FDDE0992E5292F6();
	void AnimNotify_OnDeactivated();
	void ExecuteUbergraph_BaseShredderT4_AnimBP(int EntryPoint);
	void OnDeactivated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
