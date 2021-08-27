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

// BlueprintGeneratedClass GameMenuPopoutRig_4x3AR.GameMenuPopoutRig_4x3AR_C
// 0x0030 (0x0AE0 - 0x0AB0)
class AGameMenuPopoutRig_4x3AR_C : public ACameraRigActor
{
public:
	class UFixedHorizontalOffsetModifierComponent*     FixedHorizontalOffsetModifier;                            // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedFOVModifierComponent*                  fixedFOVModifier;                                         // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USimpleCollisionModifierComponent*           SimpleCollisionModifier;                                  // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedVerticalOffsetModifierComponent*       FixedVerticalOffsetModifier;                              // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedDistanceModifierComponent*             FixedDistanceModifier;                                    // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameMenuPopoutRig_4x3AR.GameMenuPopoutRig_4x3AR_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
