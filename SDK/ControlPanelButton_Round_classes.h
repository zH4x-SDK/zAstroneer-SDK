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

// BlueprintGeneratedClass ControlPanelButton_Round.ControlPanelButton_Round_C
// 0x0010 (0x0490 - 0x0480)
class AControlPanelButton_Round_C : public AControlPanelButtonBase_C
{
public:
	class USceneComponent*                             TooltipAnchor;                                            // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ToolTip;                                                  // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlPanelButton_Round.ControlPanelButton_Round_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
