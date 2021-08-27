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

// BlueprintGeneratedClass Hazard_Bouncer_Lily_02.Hazard_Bouncer_Lily_02_C
// 0x000C (0x054C - 0x0540)
class AHazard_Bouncer_Lily_02_C : public AHazard_Bouncer_Lily_01_C
{
public:
	struct FVector                                     NewVar_0_1;                                               // 0x0540(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Bouncer_Lily_02.Hazard_Bouncer_Lily_02_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
