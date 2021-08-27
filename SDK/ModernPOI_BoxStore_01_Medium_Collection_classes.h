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

// BlueprintGeneratedClass ModernPOI_BoxStore_01_Medium_Collection.ModernPOI_BoxStore_01_Medium_Collection_C
// 0x0054 (0x03FC - 0x03A8)
class AModernPOI_BoxStore_01_Medium_Collection_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class URaycastDistributionComponent*               PowerDebris;                                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Power;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               BoxDebris;                                                // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               extenders;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               debris;                                                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Box_4;                                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Box_3;                                                    // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Box_2;                                                    // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CheckSpawnType;                                           // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_BoxStore_01_Medium_Collection.ModernPOI_BoxStore_01_Medium_Collection_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ModernPOI_BoxStore_01_Medium_Collection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
