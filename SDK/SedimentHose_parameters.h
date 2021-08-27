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

// Function SedimentHose.SedimentHose_C.CreateWireMaterial
struct ASedimentHose_C_CreateWireMaterial_Params
{
};

// Function SedimentHose.SedimentHose_C.OnRep_REP FlowActive
struct ASedimentHose_C_OnRep_REP_FlowActive_Params
{
};

// Function SedimentHose.SedimentHose_C.SetSedimentFlowActive
struct ASedimentHose_C_SetSedimentFlowActive_Params
{
	bool                                               FlowActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SedimentHose.SedimentHose_C.SetSedimentFlowRate
struct ASedimentHose_C_SetSedimentFlowRate_Params
{
	float                                              FlowRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SedimentHose.SedimentHose_C.SetSedimentColor
struct ASedimentHose_C_SetSedimentColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SedimentHose.SedimentHose_C.UpdateConnectorSpeed
struct ASedimentHose_C_UpdateConnectorSpeed_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SedimentHose.SedimentHose_C.Set Flow
struct ASedimentHose_C_Set_Flow_Params
{
};

// Function SedimentHose.SedimentHose_C.UserConstructionScript
struct ASedimentHose_C_UserConstructionScript_Params
{
};

// Function SedimentHose.SedimentHose_C.OnHoverOtherSlot
struct ASedimentHose_C_OnHoverOtherSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SedimentHose.SedimentHose_C.ReceiveTick
struct ASedimentHose_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SedimentHose.SedimentHose_C.BndEvt__Rail_K2Node_ComponentBoundEvent_0_OnUpdateRailCart__DelegateSignature
struct ASedimentHose_C_BndEvt__Rail_K2Node_ComponentBoundEvent_0_OnUpdateRailCart__DelegateSignature_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SedimentHose.SedimentHose_C.ReceiveBeginPlay
struct ASedimentHose_C_ReceiveBeginPlay_Params
{
};

// Function SedimentHose.SedimentHose_C.ExecuteUbergraph_SedimentHose
struct ASedimentHose_C_ExecuteUbergraph_SedimentHose_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
