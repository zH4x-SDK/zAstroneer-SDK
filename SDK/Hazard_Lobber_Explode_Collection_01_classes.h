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

// BlueprintGeneratedClass Hazard_Lobber_Explode_Collection_01.Hazard_Lobber_Explode_Collection_01_C
// 0x0020 (0x03C8 - 0x03A8)
class AHazard_Lobber_Explode_Collection_01_C : public AActor
{
public:
	class URaycastDistributionComponent*               ExplodingLobber03;                                        // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               ExplodingLobber02;                                        // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               ExplodingLobber01;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Lobber_Explode_Collection_01.Hazard_Lobber_Explode_Collection_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
