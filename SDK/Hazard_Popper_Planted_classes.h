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

// BlueprintGeneratedClass Hazard_Popper_Planted.Hazard_Popper_Planted_C
// 0x0008 (0x0428 - 0x0420)
class AHazard_Popper_Planted_C : public AHazard_Popper_01_C
{
public:
	class UActorHarvestableComponent*                  ActorHarvestable;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Popper_Planted.Hazard_Popper_Planted_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
