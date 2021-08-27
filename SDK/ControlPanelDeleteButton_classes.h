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

// BlueprintGeneratedClass ControlPanelDeleteButton.ControlPanelDeleteButton_C
// 0x0008 (0x04E0 - 0x04D8)
class AControlPanelDeleteButton_C : public AControlPanelCoveredButtonBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ControlPanelDeleteButton.ControlPanelDeleteButton_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateButtonVisuals();
	void ExecuteUbergraph_ControlPanelDeleteButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
