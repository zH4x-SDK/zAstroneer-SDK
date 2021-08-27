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

// BlueprintGeneratedClass WreckageStation03a_ExoticMoon.WreckageStation03a_ExoticMoon_C
// 0x0000 (0x0400 - 0x0400)
class AWreckageStation03a_ExoticMoon_C : public AWreckageStation03a_GLOBAL_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WreckageStation03a_ExoticMoon.WreckageStation03a_ExoticMoon_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
