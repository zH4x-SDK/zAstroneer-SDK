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

// BlueprintGeneratedClass DefaultSpaceshipRig.DefaultSpaceshipRig_C
// 0x004C (0x0AFC - 0x0AB0)
class ADefaultSpaceshipRig_C : public ACameraRigActor
{
public:
	class UFixedFOVModifierComponent*                  fixedFOVModifier;                                         // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedRollModifierComponent*                 FixedRollModifier;                                        // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedDistanceModifierComponent*             FixedDistanceModifier;                                    // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USimpleCollisionModifierComponent*           SimpleCollisionModifier;                                  // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UYawControlModifierComponent*                YawControlModifier;                                       // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPitchControlModifierComponent*              PitchControlModifier;                                     // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedVerticalOffsetModifierComponent*       FixedVerticalOffsetModifier;                              // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedPitchModifierComponent*                FixedPitchModifier;                                       // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedHorizontalOffsetModifierComponent*     FixedHorizontalOffsetModifier;                            // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height_Offset;                                            // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultSpaceshipRig.DefaultSpaceshipRig_C");
		return ptr;
	}


	struct FVector GetViewTargetLocation(class AActor* Target);
	struct FVector GetViewTargetUp(class AActor* Target);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
