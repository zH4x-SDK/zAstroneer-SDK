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

// BlueprintGeneratedClass TerrainSlot.TerrainSlot_C
// 0x0041 (0x0471 - 0x0430)
class ATerrainSlot_C : public AItemSlot
{
public:
	class UBodySlotComponent*                          BodySlot;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	struct FTransform                                  Target_Transform;                                         // 0x0440(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Placed;                                                   // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TerrainSlot.TerrainSlot_C");
		return ptr;
	}


	void SaveGameFixup();
	void Get_Parent(class AActor** Actor);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
