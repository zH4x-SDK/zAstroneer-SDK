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

// BlueprintGeneratedClass Hazard_Knocker_Whoop.Hazard_Knocker_Whoop_C
// 0x0008 (0x0548 - 0x0540)
class AHazard_Knocker_Whoop_C : public AHazard_BT_Parent_C
{
public:
	class USceneComponent*                             EyeNode;                                                  // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Knocker_Whoop.Hazard_Knocker_Whoop_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
