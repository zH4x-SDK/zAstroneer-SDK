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

// BlueprintGeneratedClass WreckStation05a_Radiated.WreckStation05a_Radiated_C
// 0x0000 (0x0418 - 0x0418)
class AWreckStation05a_Radiated_C : public AWreckStation05a_GLOBAL_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WreckStation05a_Radiated.WreckStation05a_Radiated_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif