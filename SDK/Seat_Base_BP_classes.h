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

// BlueprintGeneratedClass Seat_Base_BP.Seat_Base_BP_C
// 0x008A (0x06FA - 0x0670)
class ASeat_Base_BP_C : public ASeatBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             NotificationOrigin;                                       // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TooltipAnchor;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UControlComponent*                           Control;                                                  // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Interact;                                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageChassisComponent*                    StorageChassis;                                           // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Back_Transform;                                           // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Bottom_Transform;                                         // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Driver_Exit_Location;                                     // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Driver_Location;                                          // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActorAttachmentsComponent*                  ActorAttachments;                                         // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         Body_Slot;                                                // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Back_Slot;                                                // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06E1(0x0007) MISSED OFFSET
	struct FSlotReference                              Body_Ref;                                                 // 0x06E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	EUseContext                                        UseContextEnter;                                          // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EUseContext                                        UseContextExit;                                           // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seat_Base_BP.Seat_Base_BP_C");
		return ptr;
	}


	void HandlePlayerEnterExit(bool Entered);
	void ToggleHeadlamps();
	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key);
	void BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature(bool Entered);
	void BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature(class UClickQuery* ClickQuery);
	void BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType);
	void BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature(class AAstroPlayerController* OriginatingController, TEnumAsByte<EInputEvent> EventType);
	void ReceiveBeginPlay();
	void BndEvt__Damage_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature();
	void ExecuteUbergraph_Seat_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
