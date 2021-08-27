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

// AnimBlueprintGeneratedClass PHazard_Knock_Whoop01_AnimBP.PHazard_Knock_Whoop01_AnimBP_C
// 0x0210 (0x05E0 - 0x03D0)
class UPHazard_Knock_Whoop01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_79E02FC649D4695549E69EA114956064;      // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DD5804AC4A19E750302179977D8F52A3;      // 0x0420(0x0068)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F2F199E344E15BA1963A0DAC81DD12EC;// 0x0488(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF593186414BD56502C262B844445DB3;// 0x0500(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4D9379847D57559A94BF5B317C9D223;// 0x0570(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PHazard_Knock_Whoop01_AnimBP.PHazard_Knock_Whoop01_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP_AnimGraphNode_TwoWayBlend_F2F199E344E15BA1963A0DAC81DD12EC();
	void ExecuteUbergraph_PHazard_Knock_Whoop01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
