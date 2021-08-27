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

// BlueprintGeneratedClass WreckageStation03b_GLOBAL.WreckageStation03b_GLOBAL_C
// 0x0028 (0x03D0 - 0x03A8)
class AWreckageStation03b_GLOBAL_C : public AActor
{
public:
	class UExplodableNonPhysicalItemComponent*         ExplodableNonPhysicalItem;                                // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainPhysicsComponent*                    TerrainPhysics;                                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldGravity*                               WorldGravity;                                             // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WreckageStation03b_GLOBAL.WreckageStation03b_GLOBAL_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
