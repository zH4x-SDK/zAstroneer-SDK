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

// Function PowerSlot_Body.PowerSlot_Body_C.Do View Target
struct APowerSlot_Body_C_Do_View_Target_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.AcceptsConnection
struct APowerSlot_Body_C_AcceptsConnection_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.Do Connection Destroy
struct APowerSlot_Body_C_Do_Connection_Destroy_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.Do Connection Built
struct APowerSlot_Body_C_Do_Connection_Built_Params
{
	bool                                               Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_Body.PowerSlot_Body_C.UserConstructionScript
struct APowerSlot_Body_C_UserConstructionScript_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.ReceiveActorBeginCursorOver
struct APowerSlot_Body_C_ReceiveActorBeginCursorOver_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.ReceiveActorEndCursorOver
struct APowerSlot_Body_C_ReceiveActorEndCursorOver_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.Connection Destroyed
struct APowerSlot_Body_C_Connection_Destroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_Body.PowerSlot_Body_C.OnConnectionBuilt
struct APowerSlot_Body_C_OnConnectionBuilt_Params
{
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_Body.PowerSlot_Body_C.OnConnectionDestroyed
struct APowerSlot_Body_C_OnConnectionDestroyed_Params
{
	class UChildSlotComponent*                         Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_Body.PowerSlot_Body_C.OnBuildingConnection
struct APowerSlot_Body_C_OnBuildingConnection_Params
{
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_Body.PowerSlot_Body_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature
struct APowerSlot_Body_C_BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PowerSlot_Body.PowerSlot_Body_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature
struct APowerSlot_Body_C_BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.Set View Timer
struct APowerSlot_Body_C_Set_View_Timer_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.Clear View Timer
struct APowerSlot_Body_C_Clear_View_Timer_Params
{
};

// Function PowerSlot_Body.PowerSlot_Body_C.ExecuteUbergraph_PowerSlot_Body
struct APowerSlot_Body_C_ExecuteUbergraph_PowerSlot_Body_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
