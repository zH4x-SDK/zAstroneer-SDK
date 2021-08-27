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

// BlueprintGeneratedClass ModernPOI_Spaceport_01_Collection.ModernPOI_Spaceport_01_Collection_C
// 0x0070 (0x0418 - 0x03A8)
class AModernPOI_Spaceport_01_Collection_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class URaycastDistributionComponent*               WindVaneDebris;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               BoxStorageDebris;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               BoxStorageUsable;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               SolarPanelDebris;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               LandingPadRamp;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               LandingPad;                                               // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Smelter;                                                  // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Wind_X;                                                   // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Solar_X;                                                  // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Rover_X;                                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Research;                                                 // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastDistributionComponent*               Habitat;                                                  // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Spaceport_01_Collection.ModernPOI_Spaceport_01_Collection_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ModernPOI_Spaceport_01_Collection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
