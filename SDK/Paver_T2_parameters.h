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

// Function Paver_T2.Paver_T2_C.UserConstructionScript
struct APaver_T2_C_UserConstructionScript_Params
{
};

// Function Paver_T2.Paver_T2_C.PaverRollerSpinAnim__FinishedFunc
struct APaver_T2_C_PaverRollerSpinAnim__FinishedFunc_Params
{
};

// Function Paver_T2.Paver_T2_C.PaverRollerSpinAnim__UpdateFunc
struct APaver_T2_C_PaverRollerSpinAnim__UpdateFunc_Params
{
};

// Function Paver_T2.Paver_T2_C.ReceiveBeginPlay
struct APaver_T2_C_ReceiveBeginPlay_Params
{
};

// Function Paver_T2.Paver_T2_C.UpdateDeformationNormal
struct APaver_T2_C_UpdateDeformationNormal_Params
{
	struct FVector                                     DeformationNormal;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Paver_T2.Paver_T2_C.CHILD_UpdateToolVisualState
struct APaver_T2_C_CHILD_UpdateToolVisualState_Params
{
};

// Function Paver_T2.Paver_T2_C.CHILD_UpdateSedimentGauge
struct APaver_T2_C_CHILD_UpdateSedimentGauge_Params
{
	float                                              CurrentSedimentAvailable;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentSedimentCapacity;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paver_T2.Paver_T2_C.PlayDrillStartWithInsufficientSoilEffect
struct APaver_T2_C_PlayDrillStartWithInsufficientSoilEffect_Params
{
};

// Function Paver_T2.Paver_T2_C.ExecuteUbergraph_Paver_T2
struct APaver_T2_C_ExecuteUbergraph_Paver_T2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
