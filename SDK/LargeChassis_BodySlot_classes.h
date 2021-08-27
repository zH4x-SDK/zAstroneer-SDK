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

// BlueprintGeneratedClass LargeChassis_BodySlot.LargeChassis_BodySlot_C
// 0x0008 (0x0438 - 0x0430)
class ALargeChassis_BodySlot_C : public APowerSlot
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LargeChassis_BodySlot.LargeChassis_BodySlot_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
