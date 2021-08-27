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

// AnimBlueprintGeneratedClass BaseRefinery_AnimBP.BaseRefinery_AnimBP_C
// 0x0812 (0x0BE2 - 0x03D0)
class UBaseRefinery_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_83AAE9ED45F47430BE0C1B8C087B0487;      // 0x03D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_054F4FB94A8AA3C64F243DBA2289BA98;// 0x0420(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_951606F24F7CC122DE19A9AF6D75A232;// 0x0460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8864A17D49568EA7E20C0EB389180B7B;// 0x04E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A9991054984A2947DCB6288644A8E19;// 0x0560(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DB24F12042418D3A74D950BC8EF974D7;// 0x05D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5677786F44BCBA990841C9B6A3351369;// 0x0618(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_76C93D714D62F9756FDDE095DDDAF2F7;// 0x0688(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A6D35E4F4E8D202E5DC7B48B0BE36B84;// 0x06D0(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A59C806043B913853319B79FBB41E944;// 0x07A8(0x0078)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F5576E84DC9DA646519ECADC8BB562E;// 0x0820(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_505AD553409E6486825F3184CF616182;// 0x08A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B63E63C4458BAD932AC0C5891E2DC02B;// 0x0920(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5A73A55248FE9015CBB0098D5C0CE9C1;// 0x0990(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B820598A4BA5CE0426C16CA12C5757F2;// 0x09D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CC66B4C544131E1C053674B5E5B605D7;// 0x0A48(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_01E8BB0F461BCB265CCD2AA832DC9055;// 0x0A90(0x00D8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_84B6999D409409FF76AB3CA9465BFB9E;// 0x0B68(0x0078)
	bool                                               DrawerActive;                                             // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PumpActive;                                               // 0x0BE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseRefinery_AnimBP.BaseRefinery_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseRefinery_AnimBP_AnimGraphNode_TransitionResult_8F5576E84DC9DA646519ECADC8BB562E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseRefinery_AnimBP_AnimGraphNode_TransitionResult_8864A17D49568EA7E20C0EB389180B7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseRefinery_AnimBP_AnimGraphNode_TransitionResult_505AD553409E6486825F3184CF616182();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseRefinery_AnimBP_AnimGraphNode_TransitionResult_951606F24F7CC122DE19A9AF6D75A232();
	void ExecuteUbergraph_BaseRefinery_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
