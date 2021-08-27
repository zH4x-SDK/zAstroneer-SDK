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

// BlueprintGeneratedClass PowerSlot_Body.PowerSlot_Body_C
// 0x0048 (0x0478 - 0x0430)
class APowerSlot_Body_C : public APowerSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           collision_Capsule;                                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target_Slot_Location;                                     // 0x0448(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_View_Update;                                         // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Sound_Event_Drop_In_World;                                // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Sound_Event_Picked_Up;                                    // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PowerSlot_Body.PowerSlot_Body_C");
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
	void ExecuteUbergraph_PowerSlot_Body(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
