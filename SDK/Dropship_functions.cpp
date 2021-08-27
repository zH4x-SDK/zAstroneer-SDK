
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Dropship.Dropship_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void ADropship_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.UpdateUseContext");

	ADropship_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.PopInteractionOverride
// (Public, BlueprintCallable, BlueprintEvent)

void ADropship_C::PopInteractionOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.PopInteractionOverride");

	ADropship_C_PopInteractionOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.PushInteractionOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADropship_C::PushInteractionOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.PushInteractionOverride");

	ADropship_C_PushInteractionOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.ConvertToNewShelter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADropship_C::ConvertToNewShelter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.ConvertToNewShelter");

	ADropship_C_ConvertToNewShelter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.OnRep_REP Door Open
// (BlueprintCallable, BlueprintEvent)

void ADropship_C::OnRep_REP_Door_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.OnRep_REP Door Open");

	ADropship_C_OnRep_REP_Door_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.OnRep_Rep Planted
// (BlueprintCallable, BlueprintEvent)

void ADropship_C::OnRep_Rep_Planted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.OnRep_Rep Planted");

	ADropship_C_OnRep_Rep_Planted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.Plant Dropship
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Delay_Can_Enter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::Plant_Dropship(bool Delay_Can_Enter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.Plant Dropship");

	ADropship_C_Plant_Dropship_Params params;
	params.Delay_Can_Enter = Delay_Can_Enter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.Attach 
// (Public, BlueprintCallable, BlueprintEvent)

void ADropship_C::Attach_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.Attach ");

	ADropship_C_Attach__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.Set Physics Dropped
// (Public, BlueprintCallable, BlueprintEvent)

void ADropship_C::Set_Physics_Dropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.Set Physics Dropped");

	ADropship_C_Set_Physics_Dropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.Enable Terrain Platform
// (Public, BlueprintCallable, BlueprintEvent)

void ADropship_C::Enable_Terrain_Platform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.Enable Terrain Platform");

	ADropship_C_Enable_Terrain_Platform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.Get All Slots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSlotReference>  slots                          (Parm, OutParm, ZeroConstructor)

void ADropship_C::Get_All_Slots(TArray<struct FSlotReference>* slots)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.Get All Slots");

	ADropship_C_Get_All_Slots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (slots != nullptr)
		*slots = params.slots;
}


// Function Dropship.Dropship_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ADropship_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.GetBodySlotLegacy");

	ADropship_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dropship.Dropship_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADropship_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.UserConstructionScript");

	ADropship_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ADropship_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ADropship_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature");

	ADropship_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.Do Drop
// (BlueprintCallable, BlueprintEvent)

void ADropship_C::Do_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.Do Drop");

	ADropship_C_Do_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ADropship_C::BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ADropship_C_BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void ADropship_C::BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ADropship_C_BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ADropship_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.PickedUpFromWorld");

	ADropship_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADropship_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.DroppedInWorld");

	ADropship_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.Delay Can Enter
// (BlueprintCallable, BlueprintEvent)

void ADropship_C::Delay_Can_Enter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.Delay Can Enter");

	ADropship_C_Delay_Can_Enter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__ItemPad_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void ADropship_C::BndEvt__ItemPad_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__ItemPad_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ADropship_C_BndEvt__ItemPad_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__StorageChassis_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::BndEvt__StorageChassis_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__StorageChassis_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature");

	ADropship_C_BndEvt__StorageChassis_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.ReceiveTick");

	ADropship_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.MULTI Reliable Plant
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ADropship_C::MULTI_Reliable_Plant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.MULTI Reliable Plant");

	ADropship_C_MULTI_Reliable_Plant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature");

	ADropship_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.OnActorEnterExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Entered                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::OnActorEnterExit(bool Entered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.OnActorEnterExit");

	ADropship_C_OnActorEnterExit_Params params;
	params.Entered = Entered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.OnLaunchEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void ADropship_C::OnLaunchEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.OnLaunchEnd_Event_1");

	ADropship_C_OnLaunchEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.ReleasedFromSlot");

	ADropship_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.PlacedInSlot");

	ADropship_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADropship_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.ReceiveBeginPlay");

	ADropship_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_3_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_3_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_3_OxygenChangeDelegate__DelegateSignature");

	ADropship_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_3_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ADropship_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.ReceiveDestroyed");

	ADropship_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachedActorSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  attachedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachedActorSignal__DelegateSignature(class AActor* attachedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachedActorSignal__DelegateSignature");

	ADropship_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachedActorSignal__DelegateSignature_Params params;
	params.attachedActor = attachedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropship.Dropship_C.ExecuteUbergraph_Dropship
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADropship_C::ExecuteUbergraph_Dropship(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship.Dropship_C.ExecuteUbergraph_Dropship");

	ADropship_C_ExecuteUbergraph_Dropship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
