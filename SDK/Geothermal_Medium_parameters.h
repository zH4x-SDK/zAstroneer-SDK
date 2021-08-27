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

// Function Geothermal_Medium.Geothermal_Medium_C.GetBodySlotLegacy
struct AGeothermal_Medium_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Geothermal_Medium.Geothermal_Medium_C.UserConstructionScript
struct AGeothermal_Medium_C_UserConstructionScript_Params
{
};

// Function Geothermal_Medium.Geothermal_Medium_C.ReceiveTick
struct AGeothermal_Medium_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Geothermal_Medium.Geothermal_Medium_C.PlacedInSlot
struct AGeothermal_Medium_C_PlacedInSlot_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SlottedDuringInitialization;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Geothermal_Medium.Geothermal_Medium_C.ReleasedFromSlot
struct AGeothermal_Medium_C_ReleasedFromSlot_Params
{
	bool                                               FromTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewOwner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Geothermal_Medium.Geothermal_Medium_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_9_ClickableDelegateNew__DelegateSignature
struct AGeothermal_Medium_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_9_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Geothermal_Medium.Geothermal_Medium_C.ExecuteUbergraph_Geothermal_Medium
struct AGeothermal_Medium_C_ExecuteUbergraph_Geothermal_Medium_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
