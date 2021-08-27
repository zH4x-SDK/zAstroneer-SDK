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

// BlueprintGeneratedClass Thruster_Medium.Thruster_Medium_C
// 0x0038 (0x0758 - 0x0720)
class AThruster_Medium_C : public AThruster_BASE_C
{
public:
	class USceneComponent*                             PrintHeightMarker;                                        // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_3;                                          // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_2;                                          // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot_1;                                          // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSlotReference>                      Fuel_Slots;                                               // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPrimitiveComponent*                         OwnerPrimativeComponent_1;                                // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thruster_Medium.Thruster_Medium_C");
		return ptr;
	}


	void GetAvailableFuel_Internal(float* Fuel);
	void TakeFuelAmount_Internal(int Amount, int* Taken);
	void GetHasFuel_Internal(bool* HasFuel);
	void Take_Fuel_Internal(float Rate, int* Taken);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
