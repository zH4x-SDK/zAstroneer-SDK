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

// BlueprintGeneratedClass NaturalLandingPad.NaturalLandingPad_C
// 0x0038 (0x03E0 - 0x03A8)
class ANaturalLandingPad_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class ULandingPadComponent*                        LandingPad;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         LandingPadSlot;                                           // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              LandingPadSlotRef;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NaturalLandingPad.NaturalLandingPad_C");
		return ptr;
	}


	void UserConstructionScript();
	void ItemSetOnLandingPad(class APhysicalItem* Item);
	void ItemRemovedFromLandingPad(class APhysicalItem* Item);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NaturalLandingPad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
