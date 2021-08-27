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

// BlueprintGeneratedClass ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C
// 0x0018 (0x04F0 - 0x04D8)
class AControlPanelCoveredButtonPrint_C : public AControlPanelCoveredButtonBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor;                                            // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           ToolTip;                                                  // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlPanelCoveredButtonPrint.ControlPanelCoveredButtonPrint_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateButtonVisuals();
	void ExecuteUbergraph_ControlPanelCoveredButtonPrint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
