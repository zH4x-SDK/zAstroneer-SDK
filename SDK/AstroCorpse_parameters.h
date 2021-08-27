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

// Function AstroCorpse.AstroCorpse_C.Set Source Controller
struct AAstroCorpse_C_Set_Source_Controller_Params
{
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroCorpse.AstroCorpse_C.UserConstructionScript
struct AAstroCorpse_C_UserConstructionScript_Params
{
};

// Function AstroCorpse.AstroCorpse_C.ReceiveBeginPlay
struct AAstroCorpse_C_ReceiveBeginPlay_Params
{
};

// Function AstroCorpse.AstroCorpse_C.OnClicked_Event_1
struct AAstroCorpse_C_OnClicked_Event_1_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AstroCorpse.AstroCorpse_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature
struct AAstroCorpse_C_BndEvt__Clickable_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroCorpse.AstroCorpse_C.ReceiveTick
struct AAstroCorpse_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroCorpse.AstroCorpse_C.OnReleaseItem_Event_1
struct AAstroCorpse_C_OnReleaseItem_Event_1_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroCorpse.AstroCorpse_C.Check Items
struct AAstroCorpse_C_Check_Items_Params
{
};

// Function AstroCorpse.AstroCorpse_C.ClickUnhandled_Event_1
struct AAstroCorpse_C_ClickUnhandled_Event_1_Params
{
};

// Function AstroCorpse.AstroCorpse_C.ReceiveDestroyed
struct AAstroCorpse_C_ReceiveDestroyed_Params
{
};

// Function AstroCorpse.AstroCorpse_C.EnableLight
struct AAstroCorpse_C_EnableLight_Params
{
};

// Function AstroCorpse.AstroCorpse_C.DisableLight
struct AAstroCorpse_C_DisableLight_Params
{
};

// Function AstroCorpse.AstroCorpse_C.ExecuteUbergraph_AstroCorpse
struct AAstroCorpse_C_ExecuteUbergraph_AstroCorpse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroCorpse.AstroCorpse_C.OnAllItemsCollected__DelegateSignature
struct AAstroCorpse_C_OnAllItemsCollected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
