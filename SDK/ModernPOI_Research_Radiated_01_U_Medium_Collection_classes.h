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

// BlueprintGeneratedClass ModernPOI_Research_Radiated_01_U_Medium_Collection.ModernPOI_Research_Radiated_01_U_Medium_Collection_C
// 0x0008 (0x03D8 - 0x03D0)
class AModernPOI_Research_Radiated_01_U_Medium_Collection_C : public AModernPOI_Research_01_Medium_Collection_C
{
public:
	class URaycastDistributionComponent*               Support;                                                  // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Research_Radiated_01_U_Medium_Collection.ModernPOI_Research_Radiated_01_U_Medium_Collection_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
