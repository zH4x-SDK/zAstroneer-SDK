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

// BlueprintGeneratedClass T2_Planet_ExoticMoon.T2_Planet_ExoticMoon_C
// 0x0020 (0x0F40 - 0x0F20)
class AT2_Planet_ExoticMoon_C : public AAstroPlanet
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F20(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        TempProxyMesh;                                            // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URaycastMeshDistributionComponent*           RaycastMeshDistribution;                                  // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVoxelVolumeComponent*                       ExoticMoonVoxels;                                         // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass T2_Planet_ExoticMoon.T2_Planet_ExoticMoon_C");
		return ptr;
	}


	void Set_Cloud_Parameters();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_T2_Planet_ExoticMoon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
