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

// BlueprintGeneratedClass PlanetRig.PlanetRig_C
// 0x0048 (0x0AF8 - 0x0AB0)
class APlanetRig_C : public ACameraRigActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)
	class UFixedRollModifierComponent*                 FixedRollModifier;                                        // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVelocityPitchModifierComponent*             VelocityPitchModifier;                                    // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedPitchModifierComponent*                FixedPitchModifier;                                       // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UYawControlModifierComponent*                YawControlModifier;                                       // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPitchControlModifierComponent*              PitchControlModifier;                                     // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedHorizontalOffsetModifierComponent*     FixedHorizontalOffsetModifier;                            // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedVerticalOffsetModifierComponent*       FixedVerticalOffsetModifier;                              // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFixedDistanceModifierComponent*             FixedDistanceModifier;                                    // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlanetRig.PlanetRig_C");
		return ptr;
	}


	struct FVector GetViewTargetUp(class AActor* Target);
	void UserConstructionScript();
	void OnSetView();
	void OnRemoveView();
	void ExecuteUbergraph_PlanetRig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
