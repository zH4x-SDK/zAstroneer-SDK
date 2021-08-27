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

// AnimBlueprintGeneratedClass HazcomBouncer_Tongue01_AnimBP.HazcomBouncer_Tongue01_AnimBP_C
// 0x0128 (0x04F8 - 0x03D0)
class UHazcomBouncer_Tongue01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2E22A72647458CDF20B8149F6C4A230D;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3EF544841756BF9267D22A40474D614;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BEDA89B0482DC129CEC62285F28BC08C;      // 0x0490(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HazcomBouncer_Tongue01_AnimBP.HazcomBouncer_Tongue01_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_HazcomBouncer_Tongue01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
