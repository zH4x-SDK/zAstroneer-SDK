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

// BlueprintGeneratedClass Seat_Small_Cab.Seat_Small_Cab_C
// 0x001E (0x0718 - 0x06FA)
class ASeat_Small_Cab_C : public ASeat_Base_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x06FA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (Transient, DuplicateTransient)
	float                                              EjectionAngleThreshold;                                   // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	struct FTimerHandle                                CheckEjectTimerHandle;                                    // 0x0710(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seat_Small_Cab.Seat_Small_Cab_C");
		return ptr;
	}


	void UserConstructionScript();
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void HandlePlayerEnterExit(bool Entered);
	void CheckEjectPlayer();
	void MULTICAST_PlayDetachSound();
	void ExecuteUbergraph_Seat_Small_Cab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
