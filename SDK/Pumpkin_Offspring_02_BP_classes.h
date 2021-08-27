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

// BlueprintGeneratedClass Pumpkin_Offspring_02_BP.Pumpkin_Offspring_02_BP_C
// 0x0000 (0x0474 - 0x0474)
class APumpkin_Offspring_02_BP_C : public APumpkin_Offspring_BASE_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pumpkin_Offspring_02_BP.Pumpkin_Offspring_02_BP_C");
		return ptr;
	}


	void SelectSeed(class UClass** NewVar_1);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
