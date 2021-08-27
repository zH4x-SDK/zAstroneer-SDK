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

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.SetBackpackCameraStateEnabled
struct AAstroCorpse_Discovery_C_SetBackpackCameraStateEnabled_Params
{
	bool                                               BackpackEnabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.UserConstructionScript
struct AAstroCorpse_Discovery_C_UserConstructionScript_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveBeginPlay
struct AAstroCorpse_Discovery_C_ReceiveBeginPlay_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.OnClicked_Event_1
struct AAstroCorpse_Discovery_C_OnClicked_Event_1_Params
{
	class AActor*                                      TouchedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ButtonPressed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveTick
struct AAstroCorpse_Discovery_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ClickUnhandled_Event_1
struct AAstroCorpse_Discovery_C_ClickUnhandled_Event_1_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ReceiveDestroyed
struct AAstroCorpse_Discovery_C_ReceiveDestroyed_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.EnableLight
struct AAstroCorpse_Discovery_C_EnableLight_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.DisableLight
struct AAstroCorpse_Discovery_C_DisableLight_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
struct AAstroCorpse_Discovery_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.BndEvt__Crackable_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
struct AAstroCorpse_Discovery_C_BndEvt__Crackable_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params
{
};

// Function AstroCorpse_Discovery.AstroCorpse_Discovery_C.ExecuteUbergraph_AstroCorpse_Discovery
struct AAstroCorpse_Discovery_C_ExecuteUbergraph_AstroCorpse_Discovery_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
