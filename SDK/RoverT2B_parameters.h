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

// Function RoverT2B.RoverT2B_C.GetUnbundleOriginFromAuxSlot
struct ARoverT2B_C_GetUnbundleOriginFromAuxSlot_Params
{
	struct FSlotReference                              AuxSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SubslotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutForward;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RoverT2B.RoverT2B_C.SetupGenerationGaugeMaterial
struct ARoverT2B_C_SetupGenerationGaugeMaterial_Params
{
	class UMaterialInstanceDynamic*                    MatRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT2B.RoverT2B_C.SetupConsumptionGaugeMaterial
struct ARoverT2B_C_SetupConsumptionGaugeMaterial_Params
{
	class UMaterialInstanceDynamic*                    MatRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT2B.RoverT2B_C.UserConstructionScript
struct ARoverT2B_C_UserConstructionScript_Params
{
};

// Function RoverT2B.RoverT2B_C.SetupAnimBP
struct ARoverT2B_C_SetupAnimBP_Params
{
};

// Function RoverT2B.RoverT2B_C.SetupAuxSlots
struct ARoverT2B_C_SetupAuxSlots_Params
{
};

// Function RoverT2B.RoverT2B_C.SetupCableSlots
struct ARoverT2B_C_SetupCableSlots_Params
{
};

// Function RoverT2B.RoverT2B_C.UpdateAuxSlotAnims
struct ARoverT2B_C_UpdateAuxSlotAnims_Params
{
	bool                                               SlotEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AuxSlotIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT2B.RoverT2B_C.BndEvt__Control_K2Node_ComponentBoundEvent_0_ClickQueryDelegate__DelegateSignature
struct ARoverT2B_C_BndEvt__Control_K2Node_ComponentBoundEvent_0_ClickQueryDelegate__DelegateSignature_Params
{
	class UClickQuery*                                 ClickQuery;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RoverT2B.RoverT2B_C.ExecuteUbergraph_RoverT2B
struct ARoverT2B_C_ExecuteUbergraph_RoverT2B_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
