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

// BlueprintGeneratedClass VehicleGamepadFreeCursorCam.VehicleGamepadFreeCursorCam_C
// 0x0010 (0x0B30 - 0x0B20)
class AVehicleGamepadFreeCursorCam_C : public ACameraSpaceDrivingRig_C
{
public:
	class UCursorMarginControlModifierComponent*       PitchMarginControlModifier;                               // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCursorMarginControlModifierComponent*       YawMarginControlModifier;                                 // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleGamepadFreeCursorCam.VehicleGamepadFreeCursorCam_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
