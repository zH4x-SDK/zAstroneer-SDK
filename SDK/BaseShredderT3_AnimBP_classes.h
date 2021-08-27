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

// AnimBlueprintGeneratedClass BaseShredderT3_AnimBP.BaseShredderT3_AnimBP_C
// 0x09C0 (0x0D90 - 0x03D0)
class UBaseShredderT3_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9E1165AF4B2EE72BF8AF06857273A69C;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_279663444267807744444BA5429F85ED;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0119C8C64A8CDF589338DAA7C1CF31BA;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD97660E4C103209881D8B94F8FBAB00;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_654CA4E54F89D1C2B204349DF4BAA8EF;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0507FBC64A20C7E29A54139B81BE6588;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A217CA854F5329C6182B9FBE00BBA55C;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01A776F14EAC3AAA396521B570AC726A;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A5D1C92B46ACE35699704596C0EC42EA;// 0x07A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D31E575E430FC518E1F94F90215FC235;// 0x0820(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0097D3AF41A4052685FA73B5EB59D531;// 0x0890(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9E271F264C949CDE89C43D8A6AA1900D;// 0x08D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59FC57E54085C87CD78E608A6AACF2C0;// 0x0948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CD1C962429CF1C847E33586D4490504;// 0x0990(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_612F43FC457EB8B010FFA0A4D63F431D;// 0x0A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7BD3829A47FA1AD2DD7E3FB7EB5DBA47;// 0x0A48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_437D4EAB4CC35FCEECCD12A7C318BB94;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B532EA9F4582BDE903987981BB567282;// 0x0B00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_974A41D84C9F22AE9C5E1B98A786C3FA;// 0x0B70(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C732B2CC48DD48561B2598AA98E045E8;// 0x0BB8(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1FB1F80A47A0AA6C1ED9CFBC8BC5696B;// 0x0C90(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B4ED4AB4E56282584A6CBBAA45DE0D4;// 0x0D08(0x0070)
	TEnumAsByte<EShredderState>                        ShredderState;                                            // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D79(0x0003) MISSED OFFSET
	float                                              ShreddingPowerRatio;                                      // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDeactivated;                                            // 0x0D80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseShredderT3_AnimBP.BaseShredderT3_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_TransitionResult_654CA4E54F89D1C2B204349DF4BAA8EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_TransitionResult_0507FBC64A20C7E29A54139B81BE6588();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_TransitionResult_A217CA854F5329C6182B9FBE00BBA55C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_TransitionResult_DD97660E4C103209881D8B94F8FBAB00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_TransitionResult_A5D1C92B46ACE35699704596C0EC42EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_SequencePlayer_9E271F264C949CDE89C43D8A6AA1900D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_TransitionResult_0119C8C64A8CDF589338DAA7C1CF31BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_TransitionResult_279663444267807744444BA5429F85ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseShredderT3_AnimBP_AnimGraphNode_ApplyAdditive_1FB1F80A47A0AA6C1ED9CFBC8BC5696B();
	void AnimNotify_OnDeactivated();
	void ExecuteUbergraph_BaseShredderT3_AnimBP(int EntryPoint);
	void OnDeactivated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
