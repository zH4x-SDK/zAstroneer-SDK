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

// Function RealityTearFlicker.RealityTearFlicker_C.UserConstructionScript
struct ARealityTearFlicker_C_UserConstructionScript_Params
{
};

// Function RealityTearFlicker.RealityTearFlicker_C.BndEvt__PortalOpenAndClose_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
struct ARealityTearFlicker_C_BndEvt__PortalOpenAndClose_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RealityTearFlicker.RealityTearFlicker_C.ReceiveBeginPlay
struct ARealityTearFlicker_C_ReceiveBeginPlay_Params
{
};

// Function RealityTearFlicker.RealityTearFlicker_C.ReceiveEndPlay
struct ARealityTearFlicker_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RealityTearFlicker.RealityTearFlicker_C.ExecuteUbergraph_RealityTearFlicker
struct ARealityTearFlicker_C_ExecuteUbergraph_RealityTearFlicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
