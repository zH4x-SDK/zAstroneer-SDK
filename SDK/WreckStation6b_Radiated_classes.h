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

// BlueprintGeneratedClass WreckStation6b_Radiated.WreckStation6b_Radiated_C
// 0x0000 (0x0408 - 0x0408)
class AWreckStation6b_Radiated_C : public AWreckStation6b_GLOBAL_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WreckStation6b_Radiated.WreckStation6b_Radiated_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
