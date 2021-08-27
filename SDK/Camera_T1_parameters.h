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

// Function Camera_T1.Camera_T1_C.SetFlashLightEnabled
struct ACamera_T1_C_SetFlashLightEnabled_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Camera_T1.Camera_T1_C.SetCountdownLightEnabled
struct ACamera_T1_C_SetCountdownLightEnabled_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Camera_T1.Camera_T1_C.GetBodySlotLegacy
struct ACamera_T1_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Camera_T1.Camera_T1_C.UserConstructionScript
struct ACamera_T1_C_UserConstructionScript_Params
{
};

// Function Camera_T1.Camera_T1_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ACamera_T1_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Camera_T1.Camera_T1_C.PictureTakenFXDelay
struct ACamera_T1_C_PictureTakenFXDelay_Params
{
};

// Function Camera_T1.Camera_T1_C.PictureCountdownPing
struct ACamera_T1_C_PictureCountdownPing_Params
{
};

// Function Camera_T1.Camera_T1_C.PictureTakenFXInstant
struct ACamera_T1_C_PictureTakenFXInstant_Params
{
};

// Function Camera_T1.Camera_T1_C.PickedUpFromWorld
struct ACamera_T1_C_PickedUpFromWorld_Params
{
};

// Function Camera_T1.Camera_T1_C.DroppedInWorld
struct ACamera_T1_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Camera_T1.Camera_T1_C.ReceiveHit
struct ACamera_T1_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Camera_T1.Camera_T1_C.ReceiveBeginPlay
struct ACamera_T1_C_ReceiveBeginPlay_Params
{
};

// Function Camera_T1.Camera_T1_C.MULTI_PlayCountdownSounds
struct ACamera_T1_C_MULTI_PlayCountdownSounds_Params
{
};

// Function Camera_T1.Camera_T1_C.ExecuteUbergraph_Camera_T1
struct ACamera_T1_C_ExecuteUbergraph_Camera_T1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
