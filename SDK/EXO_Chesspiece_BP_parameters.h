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

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.GetBodySlotLegacy
struct AEXO_Chesspiece_BP_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.UpdateSelectedPiece
struct AEXO_Chesspiece_BP_C_UpdateSelectedPiece_Params
{
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.OnRep_ChessPiece
struct AEXO_Chesspiece_BP_C_OnRep_ChessPiece_Params
{
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.CyclePiece
struct AEXO_Chesspiece_BP_C_CyclePiece_Params
{
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.UserConstructionScript
struct AEXO_Chesspiece_BP_C_UserConstructionScript_Params
{
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct AEXO_Chesspiece_BP_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.PickedUpFromWorld
struct AEXO_Chesspiece_BP_C_PickedUpFromWorld_Params
{
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.DroppedInWorld
struct AEXO_Chesspiece_BP_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.PlacedInSlot
struct AEXO_Chesspiece_BP_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.ReceiveBeginPlay
struct AEXO_Chesspiece_BP_C_ReceiveBeginPlay_Params
{
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.ReleasedFromSlot
struct AEXO_Chesspiece_BP_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.ReceiveHit
struct AEXO_Chesspiece_BP_C_ReceiveHit_Params
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

// Function EXO_Chesspiece_BP.EXO_Chesspiece_BP_C.ExecuteUbergraph_EXO_Chesspiece_BP
struct AEXO_Chesspiece_BP_C_ExecuteUbergraph_EXO_Chesspiece_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
