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

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.Do View Target
struct APowerSlot_StreamingCable_C_Do_View_Target_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.AcceptsConnection
struct APowerSlot_StreamingCable_C_AcceptsConnection_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.Do Connection Destroy
struct APowerSlot_StreamingCable_C_Do_Connection_Destroy_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.Do Connection Built
struct APowerSlot_StreamingCable_C_Do_Connection_Built_Params
{
	bool                                               Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.UserConstructionScript
struct APowerSlot_StreamingCable_C_UserConstructionScript_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.ReceiveActorBeginCursorOver
struct APowerSlot_StreamingCable_C_ReceiveActorBeginCursorOver_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.ReceiveActorEndCursorOver
struct APowerSlot_StreamingCable_C_ReceiveActorEndCursorOver_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.Connection Destroyed
struct APowerSlot_StreamingCable_C_Connection_Destroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.OnConnectionBuilt
struct APowerSlot_StreamingCable_C_OnConnectionBuilt_Params
{
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.OnConnectionDestroyed
struct APowerSlot_StreamingCable_C_OnConnectionDestroyed_Params
{
	class UChildSlotComponent*                         Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.OnBuildingConnection
struct APowerSlot_StreamingCable_C_OnBuildingConnection_Params
{
	class ASlotConnection*                             Connection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature
struct APowerSlot_StreamingCable_C_BndEvt__BodySlot_K2Node_ComponentBoundEvent_182_DropInWorldDelegate__DelegateSignature_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature
struct APowerSlot_StreamingCable_C_BndEvt__BodySlot_K2Node_ComponentBoundEvent_196_Signal__DelegateSignature_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.Set View Timer
struct APowerSlot_StreamingCable_C_Set_View_Timer_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.Clear View Timer
struct APowerSlot_StreamingCable_C_Clear_View_Timer_Params
{
};

// Function PowerSlot_StreamingCable.PowerSlot_StreamingCable_C.ExecuteUbergraph_PowerSlot_StreamingCable
struct APowerSlot_StreamingCable_C_ExecuteUbergraph_PowerSlot_StreamingCable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
