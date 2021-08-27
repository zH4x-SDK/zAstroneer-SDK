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

// BlueprintGeneratedClass Seat_Medium_SS.Seat_Medium_SS_C
// 0x0008 (0x0728 - 0x0720)
class ASeat_Medium_SS_C : public ASeat_Base_SS_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seat_Medium_SS.Seat_Medium_SS_C");
		return ptr;
	}


	void UserConstructionScript();
	void CustomEvent(bool Entered);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ExecuteUbergraph_Seat_Medium_SS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
