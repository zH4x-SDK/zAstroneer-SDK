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

// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.SetVentingEffectsActive
struct ATutorial_BrokenOxygenBar_C_SetVentingEffectsActive_Params
{
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.UserConstructionScript
struct ATutorial_BrokenOxygenBar_C_UserConstructionScript_Params
{
};

// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.BndEvt__OxygenVent_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
struct ATutorial_BrokenOxygenBar_C_BndEvt__OxygenVent_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.BndEvt__OxygenVent_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature
struct ATutorial_BrokenOxygenBar_C_BndEvt__OxygenVent_K2Node_ComponentBoundEvent_1_ActorComponentDeactivateSignature__DelegateSignature_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_BrokenOxygenBar.Tutorial_BrokenOxygenBar_C.ExecuteUbergraph_Tutorial_BrokenOxygenBar
struct ATutorial_BrokenOxygenBar_C_ExecuteUbergraph_Tutorial_BrokenOxygenBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
