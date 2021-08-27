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

// BlueprintGeneratedClass Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C
// 0x00DC (0x073C - 0x0660)
class APrinter_Breadboards_Vehicles_C : public APhysicalItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            PrintAreaCollider;                                        // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPanel;                                             // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomChildActorComponent*                  Planet_Marker;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ReserveSlot_BackRight;                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ReserveSlot_BackLeft;                                     // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ReserveSlot_FrontLeft;                                    // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         ReserveSlot_FrontRight;                                   // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBreadboardPrinterComponent*                 BreadboardPrinter;                                        // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ModuleMesh;                                               // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Printer_Slot;                                             // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseConfigurationComponent*                WwiseConfiguration;                                       // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UResourceInfoComponent*                      ResourceInfo;                                             // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Directive;                                                // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Facing;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrinterComponent*                           Printer;                                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh3;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Print_Location;                                           // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Area;                                                     // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Printer_Slot_Ref;                                         // 0x0708(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APhysicalItem*                               PrintedItemRef;                                           // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FSlotReference                              BodySlotRef;                                              // 0x0720(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class Uvehicle_crane_large_bp_C*                   AnimBP;                                                   // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasPrintingActive;                                        // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        UseContextPrint;                                          // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        UseContextCancel;                                         // 0x073A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        CurrentUseContext;                                        // 0x073B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Printer_Breadboards_Vehicles.Printer_Breadboards_Vehicles_C");
		return ptr;
	}


	void UpdateUseContext();
	void ManageUseSuppression();
	void GetAlignedPlatformCableSlot(TArray<struct FSlotReference>* PlatformCableSlots, struct FSlotReference* AlignedCableSlot);
	void SetupAnimBP();
	void Get_Power_Slot(struct FSlotReference* Slot);
	void Check_Printer_Slot();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_13_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query);
	void BndEvt__Printer_K2Node_ComponentBoundEvent_0_ItemPrintedSignal__DelegateSignature(class APhysicalItem* Item);
	void BndEvt__Printer_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void MULTI_End_View();
	void PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization);
	void DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal);
	void PickedUpFromWorld();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Printer_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature();
	void BndEvt__BreadboardPrinter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void MULTI_ToggleAudioLoop(bool LoopEnabled);
	void BndEvt__Printer_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void HandleSetPrintingView();
	void ExecuteUbergraph_Printer_Breadboards_Vehicles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
