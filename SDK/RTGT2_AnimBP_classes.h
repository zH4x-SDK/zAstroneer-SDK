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

// AnimBlueprintGeneratedClass RTGT2_AnimBP.RTGT2_AnimBP_C
// 0x0399 (0x0769 - 0x03D0)
class URTGT2_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D28B1E3542669E3EF4536F9FE9647A49;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1AD2608241C87FAA8F1ABAABF587C9FE;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14C6DDD9440500845BD7988E01DD6F9D;// 0x04A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D2A00B6487195AF99319BBBB448BF88;// 0x0520(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50B890E444DFEDA6CDD095B483E3A938;// 0x0590(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_286BACCF466ED606DC0F1B9FAF11A1DE;// 0x05D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5CFF523C4F60D32A8F67CC8FE6986466;// 0x0648(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_333EF7144BACBF5AE53734A5AFA1BC1C;// 0x0690(0x00D8)
	bool                                               IsOn;                                                     // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RTGT2_AnimBP.RTGT2_AnimBP_C");
		return ptr;
	}


	void ToggleOff();
	void ToggleOn();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_14C6DDD9440500845BD7988E01DD6F9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RTGT2_AnimBP_AnimGraphNode_TransitionResult_1AD2608241C87FAA8F1ABAABF587C9FE();
	void ExecuteUbergraph_RTGT2_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
