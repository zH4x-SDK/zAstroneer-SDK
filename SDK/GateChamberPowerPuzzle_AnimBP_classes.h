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

// AnimBlueprintGeneratedClass GateChamberPowerPuzzle_AnimBP.GateChamberPowerPuzzle_AnimBP_C
// 0x10A8 (0x1478 - 0x03D0)
class UGateChamberPowerPuzzle_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C477C16148C47B5A163637B6C747F003;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7B701FC416EAAFE160AB1BA1C792C21;// 0x0420(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94858D544C2D0CB7166B8AA985F3DB4F;// 0x04A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33B2732341185B25E52A81B965592D29;// 0x0520(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4149CF64C427AC9B78D4498D2AF5A7C;// 0x05A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B45B8652415999E82D3FDC903460FFFF;// 0x0620(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46C6C79F4C9A8276E3E883B61549D400;// 0x06A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD55A52B4E7A402176CBC79F921C5B9E;// 0x0720(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B3D3C2A49686911E63D11AB1E1A62D7;// 0x07A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99A62D8C457B8E9E6B60C684B81687E9;// 0x0820(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B8FEFA2D460680C2694CEF8A7F4234CB;// 0x08A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B5B76DF4F9029069E2701B6288C7AE4;// 0x0920(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_076EE95A47CCF511F8699EB15C66068D;// 0x09A0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4E8E2CE04E079AEBADF9FAAAD43B07B5;// 0x0A20(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_348F113A405805F428F7B29905CE979F;// 0x0AA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B348E885466813C6FBCB50A32EBF431E;// 0x0B20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A2559B894923333618744D9AD621D76D;// 0x0BA0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B76573424269CF346BA3E8B972655091;// 0x0C10(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8858751948A4951B5A7407A0E11F1154;// 0x0C58(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_47ABCFE149E9ED8B2DEB43BA9C72BE15;// 0x0CC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA03A36448DD24EAC85C9792AA39E1FB;// 0x0D10(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AD9A4FEC4CD86E9A2791ACA7F0E1CE47;// 0x0D80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C22A3D6D492C841F33892785DFA1373E;// 0x0DC8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EC1369F44D3FE01FBEEC57ACA015901D;// 0x0E38(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0262B8FB4F39F66CE9BE3BB54DBBC471;// 0x0E80(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5CB3870849EC399B917928BFA4C33DCC;// 0x0EF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_237A8FC04F1EA13FE09D04B763DF08A9;// 0x0F38(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_24884BA84DACE5C3909A65A7844606C0;// 0x0FA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4EC712548F131ECEB5E78B200DD2512;// 0x0FF0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBF810F6401610E6A4046F85299BC021;// 0x1060(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_D268295C405DE1BD3DFB749DAF8DCF00;// 0x10A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0948AD1B4476ED4EB56D7A819690B4C7;// 0x1118(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3C2F306F4CE757AB406C74A883BB2AF7;// 0x1160(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_27D052374E0A46B6CF4788AA11D4E3F4;// 0x11D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_114EC7B0482D415B37294FB496ADA0DD;// 0x1218(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_083ACC364952C199DDACFC9B05932374;// 0x1288(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4E99CC847B35B2F60E53AA4D5AE833D;// 0x12D0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DE1078D340C7090C8E1568B18533587E;// 0x1340(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_54F4890640745E96739CD89FDBDF6D92;// 0x1388(0x00D8)
	bool                                               IsTeleporting;                                            // 0x1460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUsing;                                                  // 0x1461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPowerFlowChamberState>                State;                                                    // 0x1462(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x1463(0x0001) MISSED OFFSET
	float                                              PowerMaintenanceCompletionRatio;                          // 0x1464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoweringAnimationDuration;                                // 0x1468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x146C(0x0004) MISSED OFFSET
	class UAnimSequence*                               PoweringAnimation;                                        // 0x1470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass GateChamberPowerPuzzle_AnimBP.GateChamberPowerPuzzle_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_B8FEFA2D460680C2694CEF8A7F4234CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_8B3D3C2A49686911E63D11AB1E1A62D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_3B5B76DF4F9029069E2701B6288C7AE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_BD55A52B4E7A402176CBC79F921C5B9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_348F113A405805F428F7B29905CE979F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_B348E885466813C6FBCB50A32EBF431E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_C4149CF64C427AC9B78D4498D2AF5A7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_33B2732341185B25E52A81B965592D29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_SequenceEvaluator_D268295C405DE1BD3DFB749DAF8DCF00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP_AnimGraphNode_TransitionResult_94858D544C2D0CB7166B8AA985F3DB4F();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_GateChamberPowerPuzzle_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
