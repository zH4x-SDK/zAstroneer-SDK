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

// BlueprintGeneratedClass Seat3_Large_SS.Seat3_Large_SS_C
// 0x0020 (0x0740 - 0x0720)
class ASeat3_Large_SS_C : public ASeat_Base_SS_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Passenger_Location_2;                                     // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Passenger_Exit_Location;                                  // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Passenger_Location_1;                                     // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seat3_Large_SS.Seat3_Large_SS_C");
		return ptr;
	}


	void UserConstructionScript();
	void HandlePlayerEnterExit(bool Entered);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ExecuteUbergraph_Seat3_Large_SS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
