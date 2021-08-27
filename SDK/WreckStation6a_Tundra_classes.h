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

// BlueprintGeneratedClass WreckStation6a_Tundra.WreckStation6a_Tundra_C
// 0x0000 (0x03F8 - 0x03F8)
class AWreckStation6a_Tundra_C : public AWreckStation6a_GLOBAL_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WreckStation6a_Tundra.WreckStation6a_Tundra_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
