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

// BlueprintGeneratedClass Breadboard_T2_Starter.Breadboard_T2_Starter_C
// 0x0013 (0x0790 - 0x077D)
class ABreadboard_T2_Starter_C : public ABreadboard_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             TooltipAnchor_1;                                          // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Breadboard_T2_Starter.Breadboard_T2_Starter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleItemUnpacked();
	void ExecuteUbergraph_Breadboard_T2_Starter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
