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

// Function Seat_Base_BP.Seat_Base_BP_C.HandlePlayerEnterExit
struct ASeat_Base_BP_C_HandlePlayerEnterExit_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat_Base_BP.Seat_Base_BP_C.ToggleHeadlamps
struct ASeat_Base_BP_C_ToggleHeadlamps_Params
{
};

// Function Seat_Base_BP.Seat_Base_BP_C.GetBodySlotLegacy
struct ASeat_Base_BP_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Seat_Base_BP.Seat_Base_BP_C.UserConstructionScript
struct ASeat_Base_BP_C_UserConstructionScript_Params
{
};

// Function Seat_Base_BP.Seat_Base_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ASeat_Base_BP_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature
struct ASeat_Base_BP_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_EnterExitSignal__DelegateSignature_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature
struct ASeat_Base_BP_C_BndEvt__Control_K2Node_ComponentBoundEvent_306_ClickQueryDelegate__DelegateSignature_Params
{
	class UClickQuery*                                 ClickQuery;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ASeat_Base_BP_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
	class AAstroPlayerController*                      OriginatingController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ASeat_Base_BP_C_BndEvt__ActorAttachments_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
	class AAstroPlayerController*                      OriginatingController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Seat_Base_BP.Seat_Base_BP_C.ReceiveBeginPlay
struct ASeat_Base_BP_C_ReceiveBeginPlay_Params
{
};

// Function Seat_Base_BP.Seat_Base_BP_C.BndEvt__Damage_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct ASeat_Base_BP_C_BndEvt__Damage_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Seat_Base_BP.Seat_Base_BP_C.ExecuteUbergraph_Seat_Base_BP
struct ASeat_Base_BP_C_ExecuteUbergraph_Seat_Base_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
