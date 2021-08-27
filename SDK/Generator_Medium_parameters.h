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

// Function Generator_Medium.Generator_Medium_C.LoadSoundBank
struct AGenerator_Medium_C_LoadSoundBank_Params
{
};

// Function Generator_Medium.Generator_Medium_C.DestroyPartialInputItem
struct AGenerator_Medium_C_DestroyPartialInputItem_Params
{
};

// Function Generator_Medium.Generator_Medium_C.UpdateUseContext
struct AGenerator_Medium_C_UpdateUseContext_Params
{
};

// Function Generator_Medium.Generator_Medium_C.OnRep_REP GeneratorEnabled
struct AGenerator_Medium_C_OnRep_REP_GeneratorEnabled_Params
{
};

// Function Generator_Medium.Generator_Medium_C.SetGeneratorEnabled
struct AGenerator_Medium_C_SetGeneratorEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.TryGetFuel
struct AGenerator_Medium_C_TryGetFuel_Params
{
	bool                                               HasFuel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.StopGenerating
struct AGenerator_Medium_C_StopGenerating_Params
{
};

// Function Generator_Medium.Generator_Medium_C.StartGenerating
struct AGenerator_Medium_C_StartGenerating_Params
{
};

// Function Generator_Medium.Generator_Medium_C.OnRep_REP IsGenerating
struct AGenerator_Medium_C_OnRep_REP_IsGenerating_Params
{
};

// Function Generator_Medium.Generator_Medium_C.UpdateGeneratingAudio
struct AGenerator_Medium_C_UpdateGeneratingAudio_Params
{
};

// Function Generator_Medium.Generator_Medium_C.UpdateFuelIndicator
struct AGenerator_Medium_C_UpdateFuelIndicator_Params
{
	bool                                               ShowFuelIndicator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.CheckShowFuelIndicator
struct AGenerator_Medium_C_CheckShowFuelIndicator_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Generator_Medium.Generator_Medium_C.Can Use
struct AGenerator_Medium_C_Can_Use_Params
{
	bool                                               Can;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.GetBodySlotLegacy
struct AGenerator_Medium_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.CheckPowered
struct AGenerator_Medium_C_CheckPowered_Params
{
	bool                                               Powered;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.UserConstructionScript
struct AGenerator_Medium_C_UserConstructionScript_Params
{
};

// Function Generator_Medium.Generator_Medium_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AGenerator_Medium_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Generator_Medium.Generator_Medium_C.ReceiveTick
struct AGenerator_Medium_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.On Powered
struct AGenerator_Medium_C_On_Powered_Params
{
};

// Function Generator_Medium.Generator_Medium_C.OnUnpowered
struct AGenerator_Medium_C_OnUnpowered_Params
{
};

// Function Generator_Medium.Generator_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_2_ClickableDelegateNew__DelegateSignature
struct AGenerator_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_2_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.ReceiveBeginPlay
struct AGenerator_Medium_C_ReceiveBeginPlay_Params
{
};

// Function Generator_Medium.Generator_Medium_C.PlacedInSlot
struct AGenerator_Medium_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.DroppedInWorld
struct AGenerator_Medium_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.PickedUpFromWorld
struct AGenerator_Medium_C_PickedUpFromWorld_Params
{
};

// Function Generator_Medium.Generator_Medium_C.ReleasedFromSlot
struct AGenerator_Medium_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.ReceiveEndPlay
struct AGenerator_Medium_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.PowerButtonToggled
struct AGenerator_Medium_C_PowerButtonToggled_Params
{
};

// Function Generator_Medium.Generator_Medium_C.ReceiveDestroyed
struct AGenerator_Medium_C_ReceiveDestroyed_Params
{
};

// Function Generator_Medium.Generator_Medium_C.ReceiveHit
struct AGenerator_Medium_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.ExecuteUbergraph_Generator_Medium
struct AGenerator_Medium_C_ExecuteUbergraph_Generator_Medium_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.OnGeneratorPoweredChanged__DelegateSignature
struct AGenerator_Medium_C_OnGeneratorPoweredChanged__DelegateSignature_Params
{
	bool                                               Powered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Generator_Medium.Generator_Medium_C.OnGeneratorEnabledChanged__DelegateSignature
struct AGenerator_Medium_C_OnGeneratorEnabledChanged__DelegateSignature_Params
{
	bool                                               NewEnabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
