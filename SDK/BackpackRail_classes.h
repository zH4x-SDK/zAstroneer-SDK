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

// BlueprintGeneratedClass BackpackRail.BackpackRail_C
// 0x02F1 (0x0721 - 0x0430)
class ABackpackRail_C : public ABackpack
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UChildSlotComponent*                         Creative_Drone_Slot;                                      // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        catalogCreative;                                          // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTooltipComponent*                           PrinterControlsTooltip_Gamepad;                           // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PrinterControls_TooltipAnchor;                            // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         tetherslot;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            TetherCollision;                                          // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTetherAttachComponent*                      TetherAttach;                                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Reserve_Slot;                                             // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Printer_Slot;                                             // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PrinterSlots;                                             // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             NotificationMarker;                                       // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorStreamingPowerNodeComponent*           ActorStreamingPowerNode;                                  // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorEntityLinkComponent*                   ActorEntityLink;                                          // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Catalog;                                                  // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      backpack_mk2;                                             // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Controlled_Slot_Right;                                    // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Item_Slots;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Power_Bar;                                                // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Oxygen_Bar;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         SedimentHoseSlot;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Printer_Scene;                                            // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Printer_Head;                                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlotsComponent*                             slots;                                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrinterComponent*                           Printer;                                                  // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCrackedActivationComponent*                 CrackedActivation;                                        // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power_Battery;                                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemComponent*                              Oxygen_Item_Component;                                    // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_8;                                              // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_7;                                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_6;                                              // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_5;                                              // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_4;                                              // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_3;                                              // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_2;                                              // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Item_Slot_1;                                              // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Backpack_Storage;                                         // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Open;                                                     // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	class UChildActorComponent*                        Active_Slot;                                              // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefaultsCreated;                                          // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Give_Lock;                                                // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Powered;                                                  // 0x058A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fully_Charged;                                            // 0x058B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Low_Power;                                                // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	TArray<struct FSlotReference>                      Resource_Slots;                                           // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Use_Oxygen;                                               // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              Aux_Print_Types;                                          // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET
	struct FTransform                                  Left_Slot_Collapsed;                                      // 0x05C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Left_Slot_Raised;                                         // 0x05F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              Control_Slot_Right;                                       // 0x0620(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              Printer_Reserve_Slot;                                     // 0x0630(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlotReference                              Printer_Output_Slot;                                      // 0x0640(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransform                                  Right_Slot_Collapsed;                                     // 0x0650(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Right_Slot_Raised;                                        // 0x0680(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSlotReference>                      ResourceAndReserve_Slots;                                 // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSlotReference>                      ResourceAndAux_Slots;                                     // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ASmallDeform_C*                              Deform_Tool;                                              // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Intensity;                                          // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightEnabled;                                             // 0x06DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06DD(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PlayerColorMaterial;                                      // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRaised;                                                 // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	class ASlotConnection*                             HoseConnection;                                           // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              LightInterpSpeed;                                         // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_ShowPrinterOutputSlotTooltip;                         // 0x06FC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	TArray<struct FSlotReference>                      AuxSlots;                                                 // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlotReference                              CreativeDroneSlot;                                        // 0x0710(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DroneSpawned;                                             // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BackpackRail.BackpackRail_C");
		return ptr;
	}


	class USceneComponent* GetLeftAuxSlotUnbundleItemCastOrigin();
	class USceneComponent* GetRightAuxSlotUnbundleItemCastOrigin();
	void CanPrinterReserveSlotAcceptItem(class APhysicalItem* Item, bool* CanAcceptItem);
	void ShouldSpawnWithTerrainTool(bool* ShouldSpawnTerrainTool);
	void AddDeformToolSlotsToSlotRefs();
	void UpdateStorageSlotRefs();
	void SetBackpackLightVisibility(bool IsVisible);
	void GetAstro(class ADesignAstro_C** Astro);
	void GetSedimentHoseRef(bool* SuccesfullyRetrieved);
	void SERVER_UpdateSedimentHose();
	void GetBackpackMesh(class UMeshComponent** BackpackMesh);
	void ApplyPlayerColor();
	void GetDeformToolRef(bool* success);
	void ShowAllItems(bool show);
	void Set_Control_Slot(int Index);
	void Finish_Print();
	void CLIENT_Printer_View();
	void SERVER_Bind_Printer();
	void Get_Character(class ADesignAstro_C** Astro);
	void Is_Powered(bool* Powered);
	void CLIENT_Set_Indicator();
	void Backpack_Closed();
	void Backpack_Cracked();
	void Prereq();
	void CLIENT_Do_Resources();
	void SERVER_Do_Resources();
	void CreateTerrainTool();
	void UserConstructionScript();
	void InpActEvt_NavigateLeft_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_NavigateRight_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Confirm_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Bind_Cracked();
	void OnActivate_Event_1();
	void OnDeactivate_Event_1();
	void OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void On_Power_Depleted();
	void On_Power_Restored();
	void On_Low_Power();
	void On_Fully_Charged();
	void Bind_Printer();
	void OnFinishPrint_Event_1(class APhysicalItem* Item);
	void OnStartPrint_Event_1();
	void OnCancelPrint();
	void OnOxygenTankPropertiesChanged();
	void BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature(bool Oxygen);
	void PlayFinishPrintFX();
	void PlayStartPrintFX();
	void PlayCancelPrintFX();
	void HandleCreativeModeChanged(bool Enable);
	void ExecuteUbergraph_BackpackRail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
