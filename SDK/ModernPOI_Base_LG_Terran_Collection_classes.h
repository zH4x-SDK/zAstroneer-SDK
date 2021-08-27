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

// BlueprintGeneratedClass ModernPOI_Base_LG_Terran_Collection.ModernPOI_Base_LG_Terran_Collection_C
// 0x0010 (0x0410 - 0x0400)
class AModernPOI_Base_LG_Terran_Collection_C : public AModernPOI_Base_LG_Collection_C
{
public:
	class URaycastDistributionComponent*               SmelterSupport;                                           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               ResearchSupport;                                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Base_LG_Terran_Collection.ModernPOI_Base_LG_Terran_Collection_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
