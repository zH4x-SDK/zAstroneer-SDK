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

// AnimBlueprintGeneratedClass GateStationHeartPedastal_AnimBP.GateStationHeartPedastal_AnimBP_C
// 0x09D8 (0x0DA8 - 0x03D0)
class UGateStationHeartPedastal_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D171DEFA4BCC105A81E263A4E23767CE;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60E530494B9D8D5952303D8BE30923A3;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F44F714347A408C704D894B71D963204;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F448E28C4337794959A29D8127F36E56;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E26755442B5C7BD41E56BBBBAD554C6;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D939F1D647583DB350D4838E90D128BA;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34658EED44B49938E4CEC0A9417A826F;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_703F14A24C1FC41DCBAB0182F9EBF7C3;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D1BCCA44C1D91265722AB84039C870F;// 0x07A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59299E6743D4A960C6918D87958FD58B;// 0x0820(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6009DAE94629C427B2B532B6908EF39C;// 0x0890(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_819B50444238DC772D1CA99E5024AFC7;// 0x08D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1D0777504B80BDC6F73954BCB1834E60;// 0x0948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0C607E842C789C7E88AE89B72557F63;// 0x0990(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F126C73C4F993DEA6A5E1EA3EBEB31CE;// 0x0A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A26D934F4F2FD650CA93E3AC7F05416D;// 0x0A48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_58D956DD4034B27858400BB3E73C9032;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3231BEF74F11A5DBBCC450B41804C5DF;// 0x0B00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_920FB9E242EFBCBF390179B596684E2D;// 0x0B70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2406D48046DD46EE6FDAEFAEAC35E92C;// 0x0BB8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB6698344957E0ED6FDDBA849336EF59;// 0x0C28(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A3FD3C214DD54B5F1F3162BAF3CFA6F4;// 0x0C70(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B67BD1AE41F707CA760437A2BB2CC9E6;// 0x0CB8(0x00D8)
	bool                                               IsTeleporting;                                            // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsing;                                                  // 0x0D91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EItemPuzzleEngineState>                State;                                                    // 0x0D92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0D93(0x0001) MISSED OFFSET
	float                                              PowerMaintenanceCompletionRatio;                          // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoweringAnimationDuration;                                // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D9C(0x0004) MISSED OFFSET
	class UAnimSequence*                               PoweringAnimation;                                        // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GateStationHeartPedastal_AnimBP.GateStationHeartPedastal_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateStationHeartPedastal_AnimBP_AnimGraphNode_TransitionResult_34658EED44B49938E4CEC0A9417A826F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateStationHeartPedastal_AnimBP_AnimGraphNode_TransitionResult_5D1BCCA44C1D91265722AB84039C870F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateStationHeartPedastal_AnimBP_AnimGraphNode_TransitionResult_D939F1D647583DB350D4838E90D128BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateStationHeartPedastal_AnimBP_AnimGraphNode_TransitionResult_F44F714347A408C704D894B71D963204();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_GateStationHeartPedastal_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
