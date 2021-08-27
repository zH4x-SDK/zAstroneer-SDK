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

// AnimBlueprintGeneratedClass DeployableLandingPadT3_AnimBP.DeployableLandingPadT3_AnimBP_C
// 0x0401 (0x07D1 - 0x03D0)
class UDeployableLandingPadT3_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FE3782A640844415AC3A1B9B25081D55;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79FC3BC948D138164A7B95A636785CFD;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1685368E4FDE3F0E03CBA2870CD3CF85;// 0x04A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D067BF442D3F1A2F28D6F94E8975B05;// 0x0520(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82B5024F4A0078EFAE7DA488A62C2D10;// 0x0590(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69EC8C2141B0C6F5974353A5B5679FE4;// 0x05D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6E6EC28D45ECFC42A7425AA02D5800E5;// 0x0648(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_29E998EF47DB5863BF23AEBE3E7ADC1D;// 0x0690(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BE4D7B4540A1E005D9AA1CBBD7ED691F;      // 0x0768(0x0068)
	bool                                               IsDeployed;                                               // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DeployableLandingPadT3_AnimBP.DeployableLandingPadT3_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_DeployableLandingPadT3_AnimBP_AnimGraphNode_TransitionResult_1685368E4FDE3F0E03CBA2870CD3CF85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DeployableLandingPadT3_AnimBP_AnimGraphNode_TransitionResult_79FC3BC948D138164A7B95A636785CFD();
	void BlueprintBeginPlay();
	void OnStateChanged();
	void AnimNotify_TransitionedToOpen();
	void AnimNotify_TransitionedToClose();
	void ExecuteUbergraph_DeployableLandingPadT3_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
