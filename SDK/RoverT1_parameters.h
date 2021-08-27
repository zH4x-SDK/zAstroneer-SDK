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

// Function RoverT1.RoverT1_C.UpdateUseContext
struct ARoverT1_C_UpdateUseContext_Params
{
	bool                                               Flipped;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SeatOccupied;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.OnRep_REP_INIT_BuiltInSeatRef
struct ARoverT1_C_OnRep_REP_INIT_BuiltInSeatRef_Params
{
};

// Function RoverT1.RoverT1_C.SERVER_CreateBuiltInSeat
struct ARoverT1_C_SERVER_CreateBuiltInSeat_Params
{
};

// Function RoverT1.RoverT1_C.GetUnbundleOriginFromAuxSlot
struct ARoverT1_C_GetUnbundleOriginFromAuxSlot_Params
{
	struct FSlotReference                              AuxSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SubslotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutForward;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.SetupGenerationGaugeMaterial
struct ARoverT1_C_SetupGenerationGaugeMaterial_Params
{
	class UMaterialInstanceDynamic*                    MatRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.SetupConsumptionGaugeMaterial
struct ARoverT1_C_SetupConsumptionGaugeMaterial_Params
{
	class UMaterialInstanceDynamic*                    MatRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.UserConstructionScript
struct ARoverT1_C_UserConstructionScript_Params
{
};

// Function RoverT1.RoverT1_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ARoverT1_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RoverT1.RoverT1_C.SetupAuxSlots
struct ARoverT1_C_SetupAuxSlots_Params
{
};

// Function RoverT1.RoverT1_C.SetupCableSlots
struct ARoverT1_C_SetupCableSlots_Params
{
};

// Function RoverT1.RoverT1_C.OnBuiltInSeatEnterExit
struct ARoverT1_C_OnBuiltInSeatEnterExit_Params
{
	bool                                               Entered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.ReceiveBeginPlay
struct ARoverT1_C_ReceiveBeginPlay_Params
{
};

// Function RoverT1.RoverT1_C.ReceiveEndPlay
struct ARoverT1_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.OnPowerCableConnectionChanged
struct ARoverT1_C_OnPowerCableConnectionChanged_Params
{
	struct FSlotReference                              cableSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ConnectionMade;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.UpdateAuxSlotAnims
struct ARoverT1_C_UpdateAuxSlotAnims_Params
{
	bool                                               SlotEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AuxSlotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.SetupAnimBP
struct ARoverT1_C_SetupAnimBP_Params
{
};

// Function RoverT1.RoverT1_C.InitializeAuxSlotsEnabled
struct ARoverT1_C_InitializeAuxSlotsEnabled_Params
{
};

// Function RoverT1.RoverT1_C.UpdateUseSuppression
struct ARoverT1_C_UpdateUseSuppression_Params
{
	bool                                               ShouldBeSuppressed;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT1.RoverT1_C.ExecuteUbergraph_RoverT1
struct ARoverT1_C_ExecuteUbergraph_RoverT1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
