#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Dropship.Dropship_C.UpdateUseContext
struct ADropship_C_UpdateUseContext_Params
{
};

// Function Dropship.Dropship_C.PopInteractionOverride
struct ADropship_C_PopInteractionOverride_Params
{
};

// Function Dropship.Dropship_C.PushInteractionOverride
struct ADropship_C_PushInteractionOverride_Params
{
};

// Function Dropship.Dropship_C.ConvertToNewShelter
struct ADropship_C_ConvertToNewShelter_Params
{
};

// Function Dropship.Dropship_C.OnRep_REP Door Open
struct ADropship_C_OnRep_REP_Door_Open_Params
{
};

// Function Dropship.Dropship_C.OnRep_Rep Planted
struct ADropship_C_OnRep_Rep_Planted_Params
{
};

// Function Dropship.Dropship_C.Plant Dropship
struct ADropship_C_Plant_Dropship_Params
{
	bool                                               Delay_Can_Enter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.Attach 
struct ADropship_C_Attach__Params
{
};

// Function Dropship.Dropship_C.Set Physics Dropped
struct ADropship_C_Set_Physics_Dropped_Params
{
};

// Function Dropship.Dropship_C.Enable Terrain Platform
struct ADropship_C_Enable_Terrain_Platform_Params
{
};

// Function Dropship.Dropship_C.Get All Slots
struct ADropship_C_Get_All_Slots_Params
{
	TArray<struct FSlotReference>                      slots;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Dropship.Dropship_C.GetBodySlotLegacy
struct ADropship_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dropship.Dropship_C.UserConstructionScript
struct ADropship_C_UserConstructionScript_Params
{
};

// Function Dropship.Dropship_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ADropship_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Dropship.Dropship_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature
struct ADropship_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_0_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.Do Drop
struct ADropship_C_Do_Drop_Params
{
};

// Function Dropship.Dropship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ADropship_C_BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Dropship.Dropship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ADropship_C_BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Dropship.Dropship_C.PickedUpFromWorld
struct ADropship_C_PickedUpFromWorld_Params
{
};

// Function Dropship.Dropship_C.DroppedInWorld
struct ADropship_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Dropship.Dropship_C.Delay Can Enter
struct ADropship_C_Delay_Can_Enter_Params
{
};

// Function Dropship.Dropship_C.BndEvt__ItemPad_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ADropship_C_BndEvt__ItemPad_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Dropship.Dropship_C.BndEvt__StorageChassis_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
struct ADropship_C_BndEvt__StorageChassis_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.ReceiveTick
struct ADropship_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.MULTI Reliable Plant
struct ADropship_C_MULTI_Reliable_Plant_Params
{
};

// Function Dropship.Dropship_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
struct ADropship_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.OnActorEnterExit
struct ADropship_C_OnActorEnterExit_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.OnLaunchEnd_Event_1
struct ADropship_C_OnLaunchEnd_Event_1_Params
{
};

// Function Dropship.Dropship_C.ReleasedFromSlot
struct ADropship_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.PlacedInSlot
struct ADropship_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.ReceiveBeginPlay
struct ADropship_C_ReceiveBeginPlay_Params
{
};

// Function Dropship.Dropship_C.BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_3_OxygenChangeDelegate__DelegateSignature
struct ADropship_C_BndEvt__VehicleTetherAttach_K2Node_ComponentBoundEvent_3_OxygenChangeDelegate__DelegateSignature_Params
{
	bool                                               Oxygen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.ReceiveDestroyed
struct ADropship_C_ReceiveDestroyed_Params
{
};

// Function Dropship.Dropship_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachedActorSignal__DelegateSignature
struct ADropship_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_AttachedActorSignal__DelegateSignature_Params
{
	class AActor*                                      attachedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropship.Dropship_C.ExecuteUbergraph_Dropship
struct ADropship_C_ExecuteUbergraph_Dropship_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
