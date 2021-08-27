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

// BlueprintGeneratedClass Oxygenator_T2_Starter.Oxygenator_T2_Starter_C
// 0x0008 (0x0738 - 0x0730)
class AOxygenator_T2_Starter_C : public AOxygenator_T2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Oxygenator_T2_Starter.Oxygenator_T2_Starter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleItemUnpacked();
	void ExecuteUbergraph_Oxygenator_T2_Starter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
