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

// AnimBlueprintGeneratedClass ShuttleMedium_AnimBP.ShuttleMedium_AnimBP_C
// 0x0D5C (0x112C - 0x03D0)
class UShuttleMedium_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DD3300094663F5CFB8328887D18A7FCD;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82DBFA584BD4BAF77BD9B8B0BB22EF4E;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_042203264AF45DCC102E84AF50E5F170;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A8BB03846093F5E0E972EAACFF3E041;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C17A72ED4818D66E6544F4B4B2360C30;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C11F2EEB4C6B6D7EF50CCFB331FD2899;// 0x0620(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DDC6A52644CA79BC579237A69467180A2;// 0x0690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9A9B87D4E60B391E0D01C97A548D3922;// 0x06D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD6B13CA4BBDB7E6FD0B19B54A7082D72;// 0x0748(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BFAB893C48F7178B80DE2499B0193FDF;// 0x0790(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DDC6A52644CA79BC579237A69467180A;// 0x0800(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9A9B87D4E60B391E0D01C97A548D392;// 0x0848(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD6B13CA4BBDB7E6FD0B19B54A7082D7;// 0x08B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DCA50D994E29639BC9CB0F8C0CC38141;// 0x0900(0x00D8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0427C8F483EF7813766089495DD0E87;// 0x09E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F1AAB454E3A83186015DA94C992A387;// 0x0A60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4228807A438FD1182C41B28F5596B28B;// 0x0AE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B676149644504338D8DA2EB4D96BC826;// 0x0B60(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1BC52A114103095E94E6E1BA16BEA66D;// 0x0BE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ABFA47E4404B9099B07A6B9CC0E264032;// 0x0C50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CD38E6B4AFF8B902578D980F2B55BC02;// 0x0C98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BEB5E8F0438C48B3582DC19898D51F5A2;// 0x0D08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3CBD5ED485529DEAB51E1B3FB96E082;// 0x0D50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ABFA47E4404B9099B07A6B9CC0E26403;// 0x0DC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CD38E6B4AFF8B902578D980F2B55BC0;// 0x0E08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BEB5E8F0438C48B3582DC19898D51F5A;// 0x0E78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7099487D44B3D128480AB49E98389F0A;// 0x0EC0(0x00D8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_522559E54B167D8A332CCC82A9B88B6E;// 0x0F98(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_272B32EE4A1EF71F5110AA8C470DBED4;// 0x0FD0(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_FB2736464A9EC366B3E150B6D259C52F;// 0x1048(0x00E0)
	bool                                               ShuttleClose;                                             // 0x1128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShuttleHatchClose;                                        // 0x1129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInShuttleCloseTransition;                               // 0x112A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInShuttleHatchCloseTransition;                          // 0x112B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShuttleMedium_AnimBP.ShuttleMedium_AnimBP_C");
		return ptr;
	}


	void SetAnimationState(bool ShuttleClose, bool ShuttleHatchClose);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleMedium_AnimBP_AnimGraphNode_TransitionResult_D0427C8F483EF7813766089495DD0E87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleMedium_AnimBP_AnimGraphNode_TransitionResult_B676149644504338D8DA2EB4D96BC826();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleMedium_AnimBP_AnimGraphNode_TransitionResult_C17A72ED4818D66E6544F4B4B2360C30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleMedium_AnimBP_AnimGraphNode_TransitionResult_82DBFA584BD4BAF77BD9B8B0BB22EF4E();
	void AnimNotify_OnShuttleClosed();
	void AnimNotify_OnShuttleOpened();
	void AnimNotify_OnHatchOpened();
	void AnimNotify_OnHatchClosed();
	void AnimNotify_OnShuttleStartTransition();
	void AnimNotify_OnHatchStartTransition();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ShuttleMedium_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
