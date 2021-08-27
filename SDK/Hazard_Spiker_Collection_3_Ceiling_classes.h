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

// BlueprintGeneratedClass Hazard_Spiker_Collection_3_Ceiling.Hazard_Spiker_Collection_3_Ceiling_C
// 0x0030 (0x03D8 - 0x03A8)
class AHazard_Spiker_Collection_3_Ceiling_C : public AActor
{
public:
	class URaycastDistributionComponent*               Spiker_2;                                                 // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastMeshDistributionComponent*           PopperMini03_Mesh;                                        // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastMeshDistributionComponent*           PopperMini02_Mesh;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastMeshDistributionComponent*           PopperMini01_Mesh;                                        // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Spiker;                                                   // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Spiker_Collection_3_Ceiling.Hazard_Spiker_Collection_3_Ceiling_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
