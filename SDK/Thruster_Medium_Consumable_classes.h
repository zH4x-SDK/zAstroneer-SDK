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

// BlueprintGeneratedClass Thruster_Medium_Consumable.Thruster_Medium_Consumable_C
// 0x0031 (0x0751 - 0x0720)
class AThruster_Medium_Consumable_C : public AThruster_BASE_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             PrinterHeightMarker;                                      // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Body;                                                     // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cone_used;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cone_fresh;                                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ThrusterDebrisItem;                                       // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_ThrusterUsed;                                         // 0x0750(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thruster_Medium_Consumable.Thruster_Medium_Consumable_C");
		return ptr;
	}


	void UpdateConeMesh();
	void OnRep_REP_ThrusterUsed();
	void SwapToThrusterDebris();
	void UpdateThrusterVisuals();
	void TakeFuelAmount_Internal(int Amount, int* Taken);
	void Take_Fuel_Internal(float Rate, int* Taken);
	void GetAvailableFuel_Internal(float* Fuel);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FuelDrained(class AThruster_BASE_C* Thruster);
	void ThrusterDebrisItemSwapped(class APhysicalItem* DebrisItem);
	void ExecuteUbergraph_Thruster_Medium_Consumable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
