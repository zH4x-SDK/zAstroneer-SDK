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

// BlueprintGeneratedClass DefaultUsingRig.DefaultUsingRig_C
// 0x0040 (0x0AF0 - 0x0AB0)
class ADefaultUsingRig_C : public ACameraRigActor
{
public:
	class UAxisOffsetConstraintModifier*               FloorHeight;                                              // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USimpleCollisionModifierComponent*           SimpleCollision;                                          // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOrbitControlModifierComponent*              OrbitControlModifier;                                     // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAxisOffsetConstraintModifier*               DefaultHeight;                                            // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFrameTargetModifierComponent*               FrameTargetModifier;                                      // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDistanceBoundsModifierComponent*            HardBounds;                                               // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUprightToPlanetModifierComponent*           UprightToPlanetModifier;                                  // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDistanceBoundsModifierComponent*            SoftBounds;                                               // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultUsingRig.DefaultUsingRig_C");
		return ptr;
	}


	struct FVector GetViewTargetLocation(class AActor* Target);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
