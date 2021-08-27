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

// BlueprintGeneratedClass Platform_Standard_T2x1_P4.Platform_Standard_T2x1_P4_C
// 0x0013 (0x0790 - 0x077D)
class APlatform_Standard_T2x1_P4_C : public ABreadboard_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor_1;                                          // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Platform_Standard_T2x1_P4.Platform_Standard_T2x1_P4_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetupPrimarySlots();
	void SetupCableSlots();
	void ExecuteUbergraph_Platform_Standard_T2x1_P4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
