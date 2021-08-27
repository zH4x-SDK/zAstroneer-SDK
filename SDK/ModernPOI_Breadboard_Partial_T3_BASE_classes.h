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

// BlueprintGeneratedClass ModernPOI_Breadboard_Partial_T3_BASE.ModernPOI_Breadboard_Partial_T3_BASE_C
// 0x0008 (0x07A0 - 0x0798)
class AModernPOI_Breadboard_Partial_T3_BASE_C : public AModernPOI_Breadboard_T3_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Breadboard_Partial_T3_BASE.ModernPOI_Breadboard_Partial_T3_BASE_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetupCableSlots();
	void ExecuteUbergraph_ModernPOI_Breadboard_Partial_T3_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
