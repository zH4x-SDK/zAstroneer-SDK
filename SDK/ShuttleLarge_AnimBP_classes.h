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

// AnimBlueprintGeneratedClass ShuttleLarge_AnimBP.ShuttleLarge_AnimBP_C
// 0x0D5C (0x112C - 0x03D0)
class UShuttleLarge_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B4B4E63D44AE665594AFED97C289436E;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B198ABE44A01815D8797B2B2F532A49F;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2827219F4E9F4B4C3D031F92A0409FB0;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5A29DE6481A6D88A708FDA731D69AE2;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C03AE84947298C35344FE6B5BDD800BA;// 0x05A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EAD895874752E942C72ADB8EDF8168242;// 0x0620(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_00F68EA844E7FB6BCCD420884129F8A92;// 0x0690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4BCCCC1480968CC63C7A5918A288ECC2;// 0x06D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AE848311409C5D2E46598398CEB3AB912;// 0x0748(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EAD895874752E942C72ADB8EDF816824;// 0x0790(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_00F68EA844E7FB6BCCD420884129F8A9;// 0x0800(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4BCCCC1480968CC63C7A5918A288ECC;// 0x0848(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AE848311409C5D2E46598398CEB3AB91;// 0x08B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_729CB5B04AFC9790C1710880DE7235A3;// 0x0900(0x00D8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73827D75423123772866028864916916;// 0x09E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E0326784DFAF447960CA18B4EBEA0EB;// 0x0A60(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9701C8F84B0D5558DF0F2CBBEBEA84A9;// 0x0AE0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D07DEF0A414E7CCFEA1385BC1E051124;// 0x0B60(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31A13A464974168B007A0BB9AA5325D82;// 0x0BE0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FDFFF59C4EE464CB71F11AB8319E85372;// 0x0C50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DF68274E44A8C169594BA28F0BE75330;// 0x0C98(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2280D57E4515F454796C9EA50159D1042;// 0x0D08(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31A13A464974168B007A0BB9AA5325D8;// 0x0D50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FDFFF59C4EE464CB71F11AB8319E8537;// 0x0DC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96AF156848ECCCF0143C0AA5EBB85AF8;// 0x0E08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2280D57E4515F454796C9EA50159D104;// 0x0E78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_CB9DAE3A4B2B6924CA8C02BFF265DC82;// 0x0EC0(0x00D8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DFE2F0D54FAC2C221C7D0D938F397E68;// 0x0F98(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C0E8DDD6400A5B604AF8EE8BF08A8DA0;// 0x0FD0(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C3C4319844FDE75BCF509982A4835ED5;// 0x1048(0x00E0)
	bool                                               ShuttleClose;                                             // 0x1128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShuttleHatchClose;                                        // 0x1129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInShuttleCloseTransition;                               // 0x112A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInShuttleHatchCloseTransition;                          // 0x112B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShuttleLarge_AnimBP.ShuttleLarge_AnimBP_C");
		return ptr;
	}


	void SetAnimationState(bool ShuttleClose, bool ShuttleHatchClose);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleLarge_AnimBP_AnimGraphNode_TransitionResult_3E0326784DFAF447960CA18B4EBEA0EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleLarge_AnimBP_AnimGraphNode_TransitionResult_D07DEF0A414E7CCFEA1385BC1E051124();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleLarge_AnimBP_AnimGraphNode_TransitionResult_C03AE84947298C35344FE6B5BDD800BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShuttleLarge_AnimBP_AnimGraphNode_TransitionResult_D5A29DE6481A6D88A708FDA731D69AE2();
	void AnimNotify_OnShuttleClosed();
	void AnimNotify_OnShuttleOpened();
	void AnimNotify_OnHatchOpened();
	void AnimNotify_OnHatchClosed();
	void AnimNotify_OnShuttleStartTransition();
	void AnimNotify_OnHatchStartTransition();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ShuttleLarge_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
