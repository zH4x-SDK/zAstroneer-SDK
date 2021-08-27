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

// BlueprintGeneratedClass CreativeFlightModeNonFocusRig.CreativeFlightModeNonFocusRig_C
// 0x0010 (0x0B28 - 0x0B18)
class ACreativeFlightModeNonFocusRig_C : public ACameraSpaceWalkingRig_C
{
public:
	class UCursorMarginControlModifierComponent*       YawMarginControl;                                         // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCursorMarginControlModifierComponent*       PitchMarginControl;                                       // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CreativeFlightModeNonFocusRig.CreativeFlightModeNonFocusRig_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
