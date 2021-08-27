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

// AnimBlueprintGeneratedClass GateEngineItemPuzzle_AnimBP.GateEngineItemPuzzle_AnimBP_C
// 0x0A48 (0x0E18 - 0x03D0)
class UGateEngineItemPuzzle_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0B1B9FB744116E1D554C67BECEF04B60;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E4E9D034D8D535E06B832A5D4D93445;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_802B06574C5E5ECB1491D2A9AB33524A;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B37174F4DF5E63326100E9D1187F1C8;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15C2BEFD416DEB06AB5FD68C4FDCA7AC;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BDE370D24B9A6DAED49D18BA99F5FD7D;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6526BEAA404F5C4BB2FA5FB7838D10AA;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_574E341947F3333A2305F087A02A5F9C;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_974F70574B79C21C379191BC063C2AF9;// 0x07A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D38899584432BE3CC5F4CA82EF6BA9F9;// 0x0820(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD6E20334D338DBB93E2D28EEA818077;// 0x0890(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADBBF83B4D8B18EBEA67F8BB2E2C278C;// 0x08D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05551A094746408B4CBE5281EFE363E5;// 0x0948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43886C1F40722611C59FAD902AB7D9A5;// 0x0990(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7F0ABE6144203D33274241B623D85533;// 0x0A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87C8F8BA491EC7FF7A60FF8835F50DB8;// 0x0A48(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_69E179C243D262E9F9A4309061698EA9;// 0x0AB8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA565DE743790355F7A3F18007497BAA;// 0x0B00(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B73AF5634253AA069756A7BA23FBC689;// 0x0B70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_828428F549FB0159F1C951924FAD230E;// 0x0BB8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1FB751F341CB048E6E8F7AA74F2827AA;// 0x0C28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66C13A0B45E0D649016E2C90FA868F3C;// 0x0C70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_343AD90843BCE95B1A9F0A9F69958EA1;// 0x0CE0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EE835D204FFD6363F74B7D9A1F3ADF51;// 0x0D28(0x00D8)
	bool                                               IsTeleporting;                                            // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsing;                                                  // 0x0E01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EItemPuzzleEngineState>                State;                                                    // 0x0E02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0E03(0x0001) MISSED OFFSET
	float                                              PowerMaintenanceCompletionRatio;                          // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoweringAnimationDuration;                                // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E0C(0x0004) MISSED OFFSET
	class UAnimSequence*                               PoweringAnimation;                                        // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GateEngineItemPuzzle_AnimBP.GateEngineItemPuzzle_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateEngineItemPuzzle_AnimBP_AnimGraphNode_TransitionResult_6526BEAA404F5C4BB2FA5FB7838D10AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateEngineItemPuzzle_AnimBP_AnimGraphNode_TransitionResult_974F70574B79C21C379191BC063C2AF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateEngineItemPuzzle_AnimBP_AnimGraphNode_TransitionResult_BDE370D24B9A6DAED49D18BA99F5FD7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateEngineItemPuzzle_AnimBP_AnimGraphNode_TransitionResult_802B06574C5E5ECB1491D2A9AB33524A();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_GateEngineItemPuzzle_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
