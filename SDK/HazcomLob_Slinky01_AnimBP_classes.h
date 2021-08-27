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

// AnimBlueprintGeneratedClass HazcomLob_Slinky01_AnimBP.HazcomLob_Slinky01_AnimBP_C
// 0x0128 (0x04F8 - 0x03D0)
class UHazcomLob_Slinky01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_30DAB3DC4D6796810945B0A9D1544798;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEC82BB649524FEB50E186886C7EA79C;// 0x0420(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E05C238140C6CB2ABCACFCB68984174D;      // 0x0490(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HazcomLob_Slinky01_AnimBP.HazcomLob_Slinky01_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_HazcomLob_Slinky01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
