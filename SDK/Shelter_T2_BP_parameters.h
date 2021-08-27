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

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_GetTetherCircularAttachPoints
struct AShelter_T2_BP_C_CHILD_GetTetherCircularAttachPoints_Params
{
	TArray<struct FCircularAttachPoint>                Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.UserConstructionScript
struct AShelter_T2_BP_C_UserConstructionScript_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.ReceiveBeginPlay
struct AShelter_T2_BP_C_ReceiveBeginPlay_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupCableSlots
struct AShelter_T2_BP_C_CHILD_SetupCableSlots_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupCableSlotMaterials
struct AShelter_T2_BP_C_CHILD_SetupCableSlotMaterials_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetAnimDoorOpen
struct AShelter_T2_BP_C_CHILD_SetAnimDoorOpen_Params
{
	bool                                               IsDoorOpen;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetupAnimRef
struct AShelter_T2_BP_C_CHILD_SetupAnimRef_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_SetAnimUnpackedState
struct AShelter_T2_BP_C_CHILD_SetAnimUnpackedState_Params
{
	bool                                               IsPreUnpacked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AShelter_T2_BP_C_BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AShelter_T2_BP_C_BndEvt__SunlightDetector_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.SetLightsEnabled
struct AShelter_T2_BP_C_SetLightsEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_PlayOxygenSoundLoop
struct AShelter_T2_BP_C_CHILD_PlayOxygenSoundLoop_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.CHILD_PlayPowerSoundLoop
struct AShelter_T2_BP_C_CHILD_PlayPowerSoundLoop_Params
{
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.ReceiveEndPlay
struct AShelter_T2_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shelter_T2_BP.Shelter_T2_BP_C.ExecuteUbergraph_Shelter_T2_BP
struct AShelter_T2_BP_C_ExecuteUbergraph_Shelter_T2_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
