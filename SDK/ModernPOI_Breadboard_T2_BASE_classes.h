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

// BlueprintGeneratedClass ModernPOI_Breadboard_T2_BASE.ModernPOI_Breadboard_T2_BASE_C
// 0x000B (0x0788 - 0x077D)
class AModernPOI_Breadboard_T2_BASE_C : public ABreadboard_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	class UActorHarvestableComponent*                  ActorHarvestable;                                         // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Breadboard_T2_BASE.ModernPOI_Breadboard_T2_BASE_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
