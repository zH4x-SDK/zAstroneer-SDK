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

// BlueprintGeneratedClass ModernPOI_Breadboard_T3_BASE.ModernPOI_Breadboard_T3_BASE_C
// 0x0008 (0x0798 - 0x0790)
class AModernPOI_Breadboard_T3_BASE_C : public ABreadboard_T3_C
{
public:
	class UActorHarvestableComponent*                  ActorHarvestable;                                         // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Breadboard_T3_BASE.ModernPOI_Breadboard_T3_BASE_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
