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

// AnimBlueprintGeneratedClass HazcomBouncer_Lily_AnimBP.HazcomBouncer_Lily_AnimBP_C
// 0x0128 (0x04F8 - 0x03D0)
class UHazcomBouncer_Lily_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BC36BD3F40A75E28AEE43FBBF4F22A92;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37D923BB4AD8DA4335D9429C9CEA1BB9;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_48A997104A079371DDB4758BB22E256F;      // 0x0490(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HazcomBouncer_Lily_AnimBP.HazcomBouncer_Lily_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_HazcomBouncer_Lily_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
