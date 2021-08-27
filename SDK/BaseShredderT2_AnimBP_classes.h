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

// AnimBlueprintGeneratedClass BaseShredderT2_AnimBP.BaseShredderT2_AnimBP_C
// 0x09C0 (0x0D90 - 0x03D0)
class UBaseShredderT2_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_406F98A049A75E99D6846794D9893E5A;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC23916F405D6642F1F282BD0A5EAC3B;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3004A1D74B84EED3BB04E084E70D6BDB;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98DFC9BB40CB4F740E70ADB85D8ACA8A;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8617D97A46BEFDA569C75893E5460C64;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3166620E45910133769B0586C895D37E;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_322654E248E5DE43E4B6CA9FC00A1550;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0248036947756630FCE66CB1672588AC;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62C795E74A564F22917470927994E77A;// 0x07A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D127690841D3142A8543058E846C7AE5;// 0x0820(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_89B9BAA849E8D42890282E8E4EED241F;// 0x0890(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2EA8093343637087E1E525A1B245FA15;// 0x08D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6213F9A045F2F0E1CC2C068D7F117A86;// 0x0948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4872A23A42732A585845DD8E19E0D112;// 0x0990(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FE894F994D9FC7C548B26AA79134CF8B;// 0x0A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A1CA5CF4A83827C7BAF95B31E7A526C;// 0x0A48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8144DBC94C1A7E125ACC9D955B65207B;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB62B3254CEB4EECADEE01AA23D05CDD;// 0x0B00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_77EB74D24D53B045FE725C9FC969D8A6;// 0x0B70(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D78A330C4B53921F94DC068922F00163;// 0x0BB8(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_ACD3EBDF43C04D96D384D49DA6CAB4F5;// 0x0C90(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F316DC374356166045F0F087DE5DAB53;// 0x0D08(0x0070)
	TEnumAsByte<EShredderState>                        ShredderState;                                            // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D79(0x0003) MISSED OFFSET
	float                                              ShredderPowerLevel;                                       // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDeactivated;                                            // 0x0D80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseShredderT2_AnimBP.BaseShredderT2_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_TransitionResult_8617D97A46BEFDA569C75893E5460C64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_TransitionResult_3166620E45910133769B0586C895D37E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_TransitionResult_322654E248E5DE43E4B6CA9FC00A1550();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_TransitionResult_98DFC9BB40CB4F740E70ADB85D8ACA8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_TransitionResult_62C795E74A564F22917470927994E77A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_SequencePlayer_2EA8093343637087E1E525A1B245FA15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_TransitionResult_3004A1D74B84EED3BB04E084E70D6BDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_TransitionResult_DC23916F405D6642F1F282BD0A5EAC3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT2_AnimBP_AnimGraphNode_ApplyAdditive_ACD3EBDF43C04D96D384D49DA6CAB4F5();
	void AnimNotify_OnDeactivated();
	void ExecuteUbergraph_BaseShredderT2_AnimBP(int EntryPoint);
	void OnDeactivated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
