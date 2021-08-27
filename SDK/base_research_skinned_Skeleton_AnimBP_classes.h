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

// AnimBlueprintGeneratedClass base_research_skinned_Skeleton_AnimBP.base_research_skinned_Skeleton_AnimBP_C
// 0x071D (0x0AED - 0x03D0)
class Ubase_research_skinned_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD1C6A3F4353783D30A38D9E06FDB3C1;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E1FD975466FF5578F74C193D3DE3531;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EC1DD2347064764FD52DDB2698F4EBB;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_265874274ECE4505E26ECDB3BBCDE085;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C792A7241690B8D20EA6FAA6F6DE0DC;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92CD952D4ED6E6456080039FFB797D58;// 0x0620(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_24B06B0D42ABEE082C24FCBAFE93FB87;// 0x0690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64432FE74496C9807F372386FEC80BDF;// 0x06D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B5586F604338CDB0591AB9B64A77C43D;// 0x0748(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCD826F4431FCF2A3F8C4FBD153907B1;// 0x0790(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AD420AD647749ED610644AA684E2075C;// 0x0800(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_945A5E524B2D6B3F4B8C559C53C423E9;// 0x0848(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D866CA714D58C4EE546167A02FB9F46A;// 0x08B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9BE73961449B056CFB0A3E83E90557AB;// 0x0900(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D12BA0E8421899CF9944548D75B70751;// 0x09D8(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8C0F18114BE4644AABD2C185C0BF3C17;// 0x0A48(0x0078)
	EResearchState                                     ResearchModuleState;                                      // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	float                                              ResearchAnimationRate;                                    // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              MinResearchAnimationRate;                                 // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxResearchAnimationRate;                                 // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAnimationActiveChanged;                                 // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              NoPower;                                                  // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResearchingShouldLoop;                                    // 0x0AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AE5(0x0003) MISSED OFFSET
	float                                              ResearchingBaseLoopPlayRate;                              // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsResearching;                                            // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass base_research_skinned_Skeleton_AnimBP.base_research_skinned_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_base_research_skinned_Skeleton_AnimBP_AnimGraphNode_SequencePlayer_64432FE74496C9807F372386FEC80BDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_base_research_skinned_Skeleton_AnimBP_AnimGraphNode_TransitionResult_265874274ECE4505E26ECDB3BBCDE085();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_base_research_skinned_Skeleton_AnimBP_AnimGraphNode_TransitionResult_2E1FD975466FF5578F74C193D3DE3531();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_base_research_skinned_Skeleton_AnimBP_AnimGraphNode_ApplyAdditive_8C0F18114BE4644AABD2C185C0BF3C17();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_OnActivated();
	void AnimNotify_OnDeactivated();
	void ExecuteUbergraph_base_research_skinned_Skeleton_AnimBP(int EntryPoint);
	void OnAnimationActiveChanged__DelegateSignature(bool AnimationActive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
