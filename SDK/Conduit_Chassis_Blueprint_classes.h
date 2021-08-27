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

// BlueprintGeneratedClass Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C
// 0x0159 (0x0501 - 0x03A8)
class AConduit_Chassis_Blueprint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Resource_Slot;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        Item_Name;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            Print_Button;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            Right_Button;                                             // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButtonComponent*                            Left_Button;                                              // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Front_Power_Slot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Back_Power_Slot;                                          // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Reserve_Slot_1;                                           // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Reserve_Slot_2;                                           // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Center_2;                                          // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Center_1;                                          // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Center;                                            // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainPlatformComponent*                   TerrainPlatform;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Tether_Collision;                                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      TetherAttach;                                             // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Slot;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Chassis_Slot;                                             // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrinterComponent*                           Printer;                                                  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Chassis_Slot_Ref;                                         // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Printed;                                                  // 0x0498(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FSlotReference                              Reserve_Slot_1_Ref;                                       // 0x04A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              Reserve_Slot_2_Ref;                                       // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Printing;                                                 // 0x04C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	struct FSlotReference                              Back_Power_Ref;                                           // 0x04C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Start_Item;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Front_Power_Ref;                                          // 0x04E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              Resource_Slot_Ref;                                        // 0x04F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NoPower;                                                  // 0x0500(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C");
		return ptr;
	}


	void RedirectOldClasses(class UClass* InClass, class UClass** OutClass);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Conduit_Chassis_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
