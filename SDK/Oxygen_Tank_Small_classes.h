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

// BlueprintGeneratedClass Oxygen_Tank_Small.Oxygen_Tank_Small_C
// 0x0008 (0x06E8 - 0x06E0)
class AOxygen_Tank_Small_C : public AStorageCanister_Reusable_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Oxygen_Tank_Small.Oxygen_Tank_Small_C");
		return ptr;
	}


	void UpgradeLegacyTanks();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Oxygen_Tank_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
