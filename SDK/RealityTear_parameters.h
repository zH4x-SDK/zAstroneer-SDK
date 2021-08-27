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

// Function RealityTear.RealityTear_C.UserConstructionScript
struct ARealityTear_C_UserConstructionScript_Params
{
};

// Function RealityTear.RealityTear_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ARealityTear_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RealityTear.RealityTear_C.BndEvt__PS_Portal_Close02_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
struct ARealityTear_C_BndEvt__PS_Portal_Close02_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RealityTear.RealityTear_C.OnWandererIntroVideoEnded
struct ARealityTear_C_OnWandererIntroVideoEnded_Params
{
};

// Function RealityTear.RealityTear_C.LoopVideoEnded
struct ARealityTear_C_LoopVideoEnded_Params
{
};

// Function RealityTear.RealityTear_C.PlayOutroParticles
struct ARealityTear_C_PlayOutroParticles_Params
{
};

// Function RealityTear.RealityTear_C.ReceiveBeginPlay
struct ARealityTear_C_ReceiveBeginPlay_Params
{
};

// Function RealityTear.RealityTear_C.PopWormholeUI
struct ARealityTear_C_PopWormholeUI_Params
{
};

// Function RealityTear.RealityTear_C.PushWormholeUI
struct ARealityTear_C_PushWormholeUI_Params
{
};

// Function RealityTear.RealityTear_C.BndEvt__WandererRealityTear_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ARealityTear_C_BndEvt__WandererRealityTear_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function RealityTear.RealityTear_C.OnUsedByActivatingPlayer
struct ARealityTear_C_OnUsedByActivatingPlayer_Params
{
};

// Function RealityTear.RealityTear_C.ReceiveEndPlay
struct ARealityTear_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RealityTear.RealityTear_C.ExecuteUbergraph_RealityTear
struct ARealityTear_C_ExecuteUbergraph_RealityTear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
