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

// BlueprintGeneratedClass OrganicPOI_Exotic_Core.OrganicPOI_Exotic_Core_C
// 0x0008 (0x03F0 - 0x03E8)
class AOrganicPOI_Exotic_Core_C : public AOrganicPOI_Base_C
{
public:
	class UChildSlotComponent*                         T2_3;                                                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OrganicPOI_Exotic_Core.OrganicPOI_Exotic_Core_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
