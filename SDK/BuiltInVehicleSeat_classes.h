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

// BlueprintGeneratedClass BuiltInVehicleSeat.BuiltInVehicleSeat_C
// 0x000E (0x0708 - 0x06FA)
class ABuiltInVehicleSeat_C : public ASeat_Base_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x06FA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BuiltInVehicleSeat.BuiltInVehicleSeat_C");
		return ptr;
	}


	void UserConstructionScript();
	void PickedUpFromWorld();
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void HandlePlayerEnterExit(bool Entered);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BuiltInVehicleSeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
