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

// AnimBlueprintGeneratedClass HazcomSpew_tubeworm02_AnimBP.HazcomSpew_tubeworm02_AnimBP_C
// 0x04D1 (0x08A1 - 0x03D0)
class UHazcomSpew_tubeworm02_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4C1615194AB8A96E847E39983EF8404E;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93F7F8D842E40279F700F28DC40E855D;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5EA227D747A259DE9EE97F95E8A0AF6E;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ACED509463AF7C3CD730FA38532F65C;// 0x0520(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3F4BF7E41334A7BB06024BF26AD2577;// 0x05A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8027CD3044E3CB781B3BBFA891458F69;// 0x0610(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_763E25C244CCF82EF4D734BF04ED544B;// 0x0658(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FFC4DA934BE2480ED35FCE9C9B060DC9;// 0x06C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_105890F1490855DB824B8A853DB59838;// 0x0710(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6A67379E40D41879B251559A0AF10718;// 0x0780(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0F0C576341447EDAC480258BAA9C9260;// 0x07C8(0x00D8)
	bool                                               IsSpewing;                                                // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HazcomSpew_tubeworm02_AnimBP.HazcomSpew_tubeworm02_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_HazcomSpew_tubeworm02_AnimBP_AnimGraphNode_TransitionResult_9ACED509463AF7C3CD730FA38532F65C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HazcomSpew_tubeworm02_AnimBP_AnimGraphNode_TransitionResult_5EA227D747A259DE9EE97F95E8A0AF6E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_HazcomSpew_tubeworm02_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
