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

// AnimBlueprintGeneratedClass LandingPad_AnimBP.LandingPad_AnimBP_C
// 0x0319 (0x06E9 - 0x03D0)
class ULandingPad_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E5BA4B4F4C8BA89AB63548A2E227D9FA;      // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_604EC36143CDB2651EFC07A95335CD49;// 0x0420(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8D9869C4C3DC9718B1362A6B9416284;// 0x04A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9BC137974699C398790CA6AE57B79265;// 0x0510(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C0475E184CCDA33B6C2B76B985D1B9C6;// 0x0558(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A0183DCB45AA0B30AC8247BD02BDCD1E;// 0x05C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9BA6CFBF4142DFC37BCA19913218468A;// 0x0610(0x00D8)
	bool                                               LandingPadUnpack;                                         // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LandingPad_AnimBP.LandingPad_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_LandingPad_AnimBP_AnimGraphNode_TransitionResult_604EC36143CDB2651EFC07A95335CD49();
	void ExecuteUbergraph_LandingPad_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
