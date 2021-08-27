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

// BlueprintGeneratedClass Seed_Bouncer_Lily_02.Seed_Bouncer_Lily_02_C
// 0x0000 (0x0741 - 0x0741)
class ASeed_Bouncer_Lily_02_C : public ASeed_Generic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seed_Bouncer_Lily_02.Seed_Bouncer_Lily_02_C");
		return ptr;
	}


	void GetSeedFamilyItemType(class UClass** SeedFamily);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
