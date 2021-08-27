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

// BlueprintGeneratedClass ModernPOI_Research_01_Medium_Collection.ModernPOI_Research_01_Medium_Collection_C
// 0x0014 (0x03D0 - 0x03BC)
class AModernPOI_Research_01_Medium_Collection_C : public AModernPOI_Collection_Blueprint_Core_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class URaycastDistributionComponent*               Control_Panel;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Scanner;                                                  // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Research_01_Medium_Collection.ModernPOI_Research_01_Medium_Collection_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
