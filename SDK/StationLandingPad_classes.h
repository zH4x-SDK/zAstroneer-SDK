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

// BlueprintGeneratedClass StationLandingPad.StationLandingPad_C
// 0x0000 (0x03E0 - 0x03E0)
class AStationLandingPad_C : public ANaturalLandingPad_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StationLandingPad.StationLandingPad_C");
		return ptr;
	}


	void Initialize_Landing_Zone();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
