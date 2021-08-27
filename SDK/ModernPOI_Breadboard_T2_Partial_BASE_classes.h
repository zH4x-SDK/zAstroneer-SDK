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

// BlueprintGeneratedClass ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C
// 0x0008 (0x0790 - 0x0788)
class AModernPOI_Breadboard_T2_Partial_BASE_C : public AModernPOI_Breadboard_T2_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0788(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Breadboard_T2_Partial_BASE.ModernPOI_Breadboard_T2_Partial_BASE_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetupCableSlots();
	void ExecuteUbergraph_ModernPOI_Breadboard_T2_Partial_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
