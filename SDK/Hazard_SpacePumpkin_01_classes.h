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

// BlueprintGeneratedClass Hazard_SpacePumpkin_01.Hazard_SpacePumpkin_01_C
// 0x0038 (0x03E0 - 0x03A8)
class AHazard_SpacePumpkin_01_C : public AActor
{
public:
	class URaycastMeshDistributionComponent*           PumpkinMini03_Mesh;                                       // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastMeshDistributionComponent*           PumpkinMini02_Mesh;                                       // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastMeshDistributionComponent*           PumpkinMini01_Mesh;                                       // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Pumpkin03;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Pumpkin02;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Pumpkin01;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_SpacePumpkin_01.Hazard_SpacePumpkin_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
