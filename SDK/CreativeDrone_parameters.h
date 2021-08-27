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

// Function CreativeDrone.CreativeDrone_C.UpdateVFX
struct ACreativeDrone_C_UpdateVFX_Params
{
};

// Function CreativeDrone.CreativeDrone_C.GetBodySlotLegacy
struct ACreativeDrone_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CreativeDrone.CreativeDrone_C.UserConstructionScript
struct ACreativeDrone_C_UserConstructionScript_Params
{
};

// Function CreativeDrone.CreativeDrone_C.ReceiveBeginPlay
struct ACreativeDrone_C_ReceiveBeginPlay_Params
{
};

// Function CreativeDrone.CreativeDrone_C.ReceiveEndPlay
struct ACreativeDrone_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeDrone.CreativeDrone_C.HandleFlightStateChanged
struct ACreativeDrone_C_HandleFlightStateChanged_Params
{
};

// Function CreativeDrone.CreativeDrone_C.OnCreativeModeChanged
struct ACreativeDrone_C_OnCreativeModeChanged_Params
{
	bool                                               CreativeMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeDrone.CreativeDrone_C.UpdateDroneVisibility
struct ACreativeDrone_C_UpdateDroneVisibility_Params
{
};

// Function CreativeDrone.CreativeDrone_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature
struct ACreativeDrone_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_3_ComponentOnClickedSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CreativeDrone.CreativeDrone_C.UpdateClickability
struct ACreativeDrone_C_UpdateClickability_Params
{
};

// Function CreativeDrone.CreativeDrone_C.HandlePictureTaken
struct ACreativeDrone_C_HandlePictureTaken_Params
{
};

// Function CreativeDrone.CreativeDrone_C.TakePhoto
struct ACreativeDrone_C_TakePhoto_Params
{
};

// Function CreativeDrone.CreativeDrone_C.ExecuteUbergraph_CreativeDrone
struct ACreativeDrone_C_ExecuteUbergraph_CreativeDrone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
