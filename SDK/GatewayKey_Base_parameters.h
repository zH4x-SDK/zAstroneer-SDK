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

// Function GatewayKey_Base.GatewayKey_Base_C.OnRep_WantsPhasedIn
struct AGatewayKey_Base_C_OnRep_WantsPhasedIn_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.Initiate Build-out Animation
struct AGatewayKey_Base_C_Initiate_Build_out_Animation_Params
{
	bool                                               DestroyWhenDone;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayKey_Base.GatewayKey_Base_C.Initiate Build-in Animation
struct AGatewayKey_Base_C_Initiate_Build_in_Animation_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.Setup Dynamic Materials
struct AGatewayKey_Base_C_Setup_Dynamic_Materials_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.Update Material Animation
struct AGatewayKey_Base_C_Update_Material_Animation_Params
{
	float                                              Printer_Progress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Glyph_Opacity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayKey_Base.GatewayKey_Base_C.GetBodySlotLegacy
struct AGatewayKey_Base_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GatewayKey_Base.GatewayKey_Base_C.UserConstructionScript
struct AGatewayKey_Base_C_UserConstructionScript_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.Build-in Timeline__FinishedFunc
struct AGatewayKey_Base_C_Build_in_Timeline__FinishedFunc_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.Build-in Timeline__UpdateFunc
struct AGatewayKey_Base_C_Build_in_Timeline__UpdateFunc_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.Build-out Timeline__FinishedFunc
struct AGatewayKey_Base_C_Build_out_Timeline__FinishedFunc_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.Build-out Timeline__UpdateFunc
struct AGatewayKey_Base_C_Build_out_Timeline__UpdateFunc_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.ReceiveBeginPlay
struct AGatewayKey_Base_C_ReceiveBeginPlay_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.AuthorityPhaseIn
struct AGatewayKey_Base_C_AuthorityPhaseIn_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.AuthorityPhaseOut
struct AGatewayKey_Base_C_AuthorityPhaseOut_Params
{
	bool                                               DestroyWhenDone;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayKey_Base.GatewayKey_Base_C.ReceiveHit
struct AGatewayKey_Base_C_ReceiveHit_Params
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

// Function GatewayKey_Base.GatewayKey_Base_C.DroppedInWorld
struct AGatewayKey_Base_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GatewayKey_Base.GatewayKey_Base_C.PickedUpFromWorld
struct AGatewayKey_Base_C_PickedUpFromWorld_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.WantsPhasedInChanged
struct AGatewayKey_Base_C_WantsPhasedInChanged_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.ExecuteUbergraph_GatewayKey_Base
struct AGatewayKey_Base_C_ExecuteUbergraph_GatewayKey_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GatewayKey_Base.GatewayKey_Base_C.OnPhasedOutCompleted__DelegateSignature
struct AGatewayKey_Base_C_OnPhasedOutCompleted__DelegateSignature_Params
{
};

// Function GatewayKey_Base.GatewayKey_Base_C.OnPhasedInCompleted__DelegateSignature
struct AGatewayKey_Base_C_OnPhasedInCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
