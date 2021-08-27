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

// BlueprintGeneratedClass Seat3_Large.Seat3_Large_C
// 0x0026 (0x0720 - 0x06FA)
class ASeat3_Large_C : public ASeat_Base_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x06FA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Passenger_Location_2;                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Passenger_Exit_Location;                                  // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Passenger_Location_1;                                     // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seat3_Large.Seat3_Large_C");
		return ptr;
	}


	void UserConstructionScript();
	void HandlePlayerEnterExit(bool Entered);
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Seat3_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
