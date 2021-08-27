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

// BlueprintGeneratedClass PowerSlot_StreamingCable.PowerSlot_StreamingCable_C
// 0x0030 (0x0460 - 0x0430)
class APowerSlot_StreamingCable_C : public APowerSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UTooltipComponent*                           ToolTip;                                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           collision_Capsule;                                        // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Connector;                                                // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target_Slot_Location;                                     // 0x0450(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_View_Update;                                         // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PowerSlot_StreamingCable.PowerSlot_StreamingCable_C");
		return ptr;
	}


	void Do_View_Target();
	void AcceptsConnection();
	void Do_Connection_Destroy();
	void Do_Connection_Built(bool Source);
	void UserConstructionScript();
	void ReceiveActorBeginCursorOver();
	void ReceiveActorEndCursorOver();
	void Connection_Destroyed(class AActor* DestroyedActor);
	void OnConnectionBuilt(class ASlotConnection* Connection, bool IsSource);
	void OnConnectionDestroyed(class UChildSlotComponent* Other, bool IsSource);
	void OnBuildingConnection(class ASlotConnection* Connection);
	void BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature(class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal);
	void BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature();
	void Set_View_Timer();
	void Clear_View_Timer();
	void ExecuteUbergraph_PowerSlot_StreamingCable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
