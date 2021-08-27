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

// BlueprintGeneratedClass WreckageStation01_ExoticMoon.WreckageStation01_ExoticMoon_C
// 0x0000 (0x0470 - 0x0470)
class AWreckageStation01_ExoticMoon_C : public AWreckageStation01_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WreckageStation01_ExoticMoon.WreckageStation01_ExoticMoon_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
