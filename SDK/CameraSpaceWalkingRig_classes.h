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

// BlueprintGeneratedClass CameraSpaceWalkingRig.CameraSpaceWalkingRig_C
// 0x0068 (0x0B18 - 0x0AB0)
class ACameraSpaceWalkingRig_C : public ACameraRigActor
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedFOVModifierComponent*                  fixedFOVModifier;                                         // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UJourneyOffsetComponent*                     JourneyHorizontalOffset;                                  // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedRollModifierComponent*                 FixedRollModifier;                                        // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVelocityPitchModifierComponent*             VelocityPitchModifier;                                    // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UYawCollisionAvoidanceModifierComponent*     YawCollisionAvoidanceModifier;                            // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedPitchModifierComponent*                FixedPitchModifier;                                       // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USimpleCollisionModifierComponent*           SimpleCollisionModifier;                                  // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UYawControlModifierComponent*                YawControlModifier;                                       // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPitchControlModifierComponent*              PitchControlModifier;                                     // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFollowBehindModifierComponent*              FollowBehindModifier;                                     // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedVerticalOffsetModifierComponent*       FixedVerticalOffsetModifier;                              // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedDistanceModifierComponent*             FixedDistanceModifier;                                    // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraSpaceWalkingRig.CameraSpaceWalkingRig_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
