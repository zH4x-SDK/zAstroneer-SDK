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

// BlueprintGeneratedClass OrganicPOI_Tundra_Mantle.OrganicPOI_Tundra_Mantle_C
// 0x0010 (0x03F8 - 0x03E8)
class AOrganicPOI_Tundra_Mantle_C : public AOrganicPOI_Base_C
{
public:
	class UParticleSystemComponent*                    Spores;                                                   // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         T2_3;                                                     // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OrganicPOI_Tundra_Mantle.OrganicPOI_Tundra_Mantle_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
