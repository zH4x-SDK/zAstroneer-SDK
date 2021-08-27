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

// AnimBlueprintGeneratedClass PHazard_Jump_Static01_AnimBP.PHazard_Jump_Static01_AnimBP_C
// 0x0128 (0x04F8 - 0x03D0)
class UPHazard_Jump_Static01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C051794D4223CFC6EFE526B95DFBF592;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34DE11404F2E57853B9631AADE847739;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_52B7EA2A43BC69958F2CAEB8621852B8;      // 0x0490(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PHazard_Jump_Static01_AnimBP.PHazard_Jump_Static01_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_PHazard_Jump_Static01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
