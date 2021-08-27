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

// BlueprintGeneratedClass BuiltInVehicleSeatSlot_T1.BuiltInVehicleSeatSlot_T1_C
// 0x0018 (0x0448 - 0x0430)
class ABuiltInVehicleSeatSlot_T1_C : public APowerSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Visible_Mesh;                                             // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BuiltInVehicleSeatSlot_T1.BuiltInVehicleSeatSlot_T1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BuiltInVehicleSeatSlot_T1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
