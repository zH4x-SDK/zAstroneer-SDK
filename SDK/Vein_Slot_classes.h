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

// BlueprintGeneratedClass Vein_Slot.Vein_Slot_C
// 0x0008 (0x0438 - 0x0430)
class AVein_Slot_C : public AItemSlot
{
public:
	class USphereComponent*                            collision_Sphere;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vein_Slot.Vein_Slot_C");
		return ptr;
	}


	bool AcceptsItem(class APhysicalItem* Item);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
