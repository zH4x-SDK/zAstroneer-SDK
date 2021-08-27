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

// BlueprintGeneratedClass Hazard_Gasbag_v3_BASE.Hazard_Gasbag_v3_BASE_C
// 0x0024 (0x04A0 - 0x047C)
class AHazard_Gasbag_v3_BASE_C : public AHazard_Gasbag_v1_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    AmbientGasSpew7;                                          // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AmbientGasSpew6;                                          // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorHarvestableComponent*                  ActorHarvestable;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Gasbag_v3_BASE.Hazard_Gasbag_v3_BASE_C");
		return ptr;
	}


	void UserConstructionScript();
	void Spawn_Gas(class AActor* Follow);
	void ExecuteUbergraph_Hazard_Gasbag_v3_BASE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
