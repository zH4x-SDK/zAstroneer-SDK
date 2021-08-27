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

// BlueprintGeneratedClass PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C
// 0x000C (0x0400 - 0x03F4)
class APowerBar_Ringed_1_Oxygen_C : public APowerBar_Ringed_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PowerBar_Ringed_1_Oxygen.PowerBar_Ringed_1_Oxygen_C");
		return ptr;
	}


	void UserConstructionScript();
	void Set_View(float Alpha, float Rate);
	void ExecuteUbergraph_PowerBar_Ringed_1_Oxygen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
