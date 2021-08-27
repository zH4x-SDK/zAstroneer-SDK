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

// Function TerrainAnalyzer.TerrainAnalyzer_C.UpdateMaterials
struct ATerrainAnalyzer_C_UpdateMaterials_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.SetAugmentEquippedState
struct ATerrainAnalyzer_C_SetAugmentEquippedState_Params
{
	bool                                               IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.SetAugmentActiveState
struct ATerrainAnalyzer_C_SetAugmentActiveState_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.SetAnalyzerState
struct ATerrainAnalyzer_C_SetAnalyzerState_Params
{
	TEnumAsByte<ETerrainAnalyzerState>                 NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.OnAnalysisContinued
struct ATerrainAnalyzer_C_OnAnalysisContinued_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.OnAnalysisPaused
struct ATerrainAnalyzer_C_OnAnalysisPaused_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.UserConstructionScript
struct ATerrainAnalyzer_C_UserConstructionScript_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ATerrainAnalyzer_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.ReceiveBeginPlay
struct ATerrainAnalyzer_C_ReceiveBeginPlay_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.SetView
struct ATerrainAnalyzer_C_SetView_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.ReceiveHit
struct ATerrainAnalyzer_C_ReceiveHit_Params
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

// Function TerrainAnalyzer.TerrainAnalyzer_C.DroppedInWorld
struct ATerrainAnalyzer_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.PlacedInSlot
struct ATerrainAnalyzer_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.ReleasedFromSlot
struct ATerrainAnalyzer_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.PickedUpFromWorld
struct ATerrainAnalyzer_C_PickedUpFromWorld_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
struct ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params
{
};

// Function TerrainAnalyzer.TerrainAnalyzer_C.ExecuteUbergraph_TerrainAnalyzer
struct ATerrainAnalyzer_C_ExecuteUbergraph_TerrainAnalyzer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
