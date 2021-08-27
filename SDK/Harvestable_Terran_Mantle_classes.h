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

// BlueprintGeneratedClass Harvestable_Terran_Mantle.Harvestable_Terran_Mantle_C
// 0x0008 (0x03E8 - 0x03E0)
class AHarvestable_Terran_Mantle_C : public AHarvestable_B_Core_C
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Harvestable_Terran_Mantle.Harvestable_Terran_Mantle_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
