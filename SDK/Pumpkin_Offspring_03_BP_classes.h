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

// BlueprintGeneratedClass Pumpkin_Offspring_03_BP.Pumpkin_Offspring_03_BP_C
// 0x000C (0x0480 - 0x0474)
class APumpkin_Offspring_03_BP_C : public APumpkin_Offspring_BASE_BP_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pumpkin_Offspring_03_BP.Pumpkin_Offspring_03_BP_C");
		return ptr;
	}


	void SelectSeed(class UClass** NewVar_1);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Pumpkin_Offspring_03_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
