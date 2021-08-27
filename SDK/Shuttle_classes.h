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

// BlueprintGeneratedClass Shuttle.Shuttle_C
// 0x01E8 (0x08B8 - 0x06D0)
class AShuttle_C : public AVehicleBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	class UOxygenatorComponent*                        oxygenator;                                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleTetherAttachComponent*               VehicleTetherAttach;                                      // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem8;                                          // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem7;                                          // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem9;                                          // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Fuel_Animation;                                           // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSlotComponent*                       VehicleSlot;                                              // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Fuel_Slot_2;                                              // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem4;                                          // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem6;                                          // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem5;                                          // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Center;                                            // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Seat_Slot_1;                                              // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOrbitalNavigationComponent*                 OrbitalNavigation;                                        // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Fuel_Slot;                                                // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Interact;                                                 // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Parts;                                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpawnLocationComponent*                     spawnLocation;                                            // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Indicator_Slot;                                    // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UThrusterComponent_C*                        ThrusterComponent;                                        // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Chassis_Slot;                                             // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Point;                                             // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Tether_Slot;                                              // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomCameraRigComponent*                   CustomCameraRig;                                          // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Spawn;                                                    // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ASolarBody*                                  Target_Body;                                              // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASolarBody*                                  Orbital_Body;                                             // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelNeededForLaunch;                                      // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RCSVolume;                                                // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<bool>                                       RCSEnabled;                                               // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Taken_Fuel;                                               // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Default_Seat;                                             // 0x0821(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0822(0x0006) MISSED OFFSET
	class UClass*                                      Seat_Type;                                                // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Orbiting;                                                 // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	TArray<struct FSlotReference>                      Fuel_Slot_Ref;                                            // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlotReference                              Seat_Slot_1_Ref;                                          // 0x0848(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AllocatedFuel;                                            // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_FillingFuel;                                          // 0x085C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	float                                              Fuel_Animation_Length;                                    // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0864(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          Leg_Transforms;                                           // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               Leg_Names;                                                // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          Leg_Origins_Local;                                        // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Animation_BP;                                             // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LaunchIsAllowed;                                          // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class ASeatBase*                                   PilotSeatThatHasTooltipOverride;                          // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       UseSuppressionID;                                         // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Shuttle.Shuttle_C");
		return ptr;
	}


	void ExecuteLaunchSequence();
	void UpdatePilotSeatTooltipOverride();
	void HandleLaunchRequest();
	void UpgradeOldFuelTank();
	void Setup_Legs();
	void CLIENT_Update_Legs();
	void Do_Launch();
	void Do_Launch_End();
	void Update_Save_Game_Permitted();
	void Show_Indicators();
	void ExpendFuel(float Delta_Time);
	class UChildSlotComponent* GetBodySlotLegacy();
	void Launch_View();
	void CLIENT_Set_Bars();
	void SERVER_Create_Default_Equipment();
	void Can_Launch(bool* Can);
	void Take_Fuel();
	void CLIENT_Launch(bool Launched);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLaunchEnd_Event_1();
	void BndEvt__Control_K2Node_ComponentBoundEvent_206_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery);
	void MULTI_DoLaunch(bool Launched);
	void Save_Game();
	void CustomEvent_1(bool Can, bool Orbiting);
	void OnLaunch_Event_1();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_14_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void Save_Completed(ESaveGameOperationResult saveOperationResult);
	void VehicleLostPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat);
	void VehicleGainedPilotInSeat(class AAstroPlayerController* Driver, class ASeatBase* Seat);
	void CustomEvent_2();
	void CustomEvent_3(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType);
	void ExecuteLaunchSequenceServer();
	void Multi_PlayTakeFuelFX();
	void ReceiveDestroyed();
	void BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_2_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void ExecuteUbergraph_Shuttle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
