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

// Function SmallDeform.SmallDeform_C.StopTerrainStreamingEffect
struct ASmallDeform_C_StopTerrainStreamingEffect_Params
{
};

// Function SmallDeform.SmallDeform_C.StartTerrainStreamingEffect
struct ASmallDeform_C_StartTerrainStreamingEffect_Params
{
};

// Function SmallDeform.SmallDeform_C.GetTerrainHardnessSwitchValue
struct ASmallDeform_C_GetTerrainHardnessSwitchValue_Params
{
	int                                                TerrainHardness;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TerrainHardnessSwitchValue;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.GetBodySlotLegacy
struct ASmallDeform_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.Stop Effects
struct ASmallDeform_C_Stop_Effects_Params
{
};

// Function SmallDeform.SmallDeform_C.Start Effects
struct ASmallDeform_C_Start_Effects_Params
{
	EDeformType                                        Op;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.UpdateDeformEffects
struct ASmallDeform_C_UpdateDeformEffects_Params
{
};

// Function SmallDeform.SmallDeform_C.End Audio
struct ASmallDeform_C_End_Audio_Params
{
};

// Function SmallDeform.SmallDeform_C.Apply Power
struct ASmallDeform_C_Apply_Power_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Store;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.Apply Oxygen
struct ASmallDeform_C_Apply_Oxygen_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Store;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.OnRep_Rep Switched On
struct ASmallDeform_C_OnRep_Rep_Switched_On_Params
{
};

// Function SmallDeform.SmallDeform_C.GetIsActive
struct ASmallDeform_C_GetIsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.GetPercentNuggetMined
struct ASmallDeform_C_GetPercentNuggetMined_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.Update Deform Audio
struct ASmallDeform_C_Update_Deform_Audio_Params
{
};

// Function SmallDeform.SmallDeform_C.StartAudio
struct ASmallDeform_C_StartAudio_Params
{
	EDeformType                                        Op;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.Update Operation View
struct ASmallDeform_C_Update_Operation_View_Params
{
};

// Function SmallDeform.SmallDeform_C.TakeTerrainResource
struct ASmallDeform_C_TakeTerrainResource_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.Set Power Indicator
struct ASmallDeform_C_Set_Power_Indicator_Params
{
};

// Function SmallDeform.SmallDeform_C.UserConstructionScript
struct ASmallDeform_C_UserConstructionScript_Params
{
};

// Function SmallDeform.SmallDeform_C.InpActEvt_Add_K2Node_InputKeyEvent_4
struct ASmallDeform_C_InpActEvt_Add_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmallDeform.SmallDeform_C.InpActEvt_Subtract_K2Node_InputKeyEvent_3
struct ASmallDeform_C_InpActEvt_Subtract_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmallDeform.SmallDeform_C.InpActEvt_Nine_K2Node_InputKeyEvent_2
struct ASmallDeform_C_InpActEvt_Nine_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmallDeform.SmallDeform_C.InpActEvt_Zero_K2Node_InputKeyEvent_1
struct ASmallDeform_C_InpActEvt_Zero_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmallDeform.SmallDeform_C.ReceiveBeginPlay
struct ASmallDeform_C_ReceiveBeginPlay_Params
{
};

// Function SmallDeform.SmallDeform_C.CLIENT Ping Symbol
struct ASmallDeform_C_CLIENT_Ping_Symbol_Params
{
	class UClass*                                      ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BackpackAddSucceeded;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.OnInteraction
struct ASmallDeform_C_OnInteraction_Params
{
	struct FClickResult                                Click;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SmallDeform.SmallDeform_C.Bind Audio
struct ASmallDeform_C_Bind_Audio_Params
{
};

// Function SmallDeform.SmallDeform_C.Using Start
struct ASmallDeform_C_Using_Start_Params
{
};

// Function SmallDeform.SmallDeform_C.Using End
struct ASmallDeform_C_Using_End_Params
{
};

// Function SmallDeform.SmallDeform_C.Mined Timer
struct ASmallDeform_C_Mined_Timer_Params
{
};

// Function SmallDeform.SmallDeform_C.Control Activate
struct ASmallDeform_C_Control_Activate_Params
{
};

// Function SmallDeform.SmallDeform_C.Control Deactivate
struct ASmallDeform_C_Control_Deactivate_Params
{
};

// Function SmallDeform.SmallDeform_C.SERVER Start FX
struct ASmallDeform_C_SERVER_Start_FX_Params
{
	EDeformType                                        Op;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.MULTI Start FX
struct ASmallDeform_C_MULTI_Start_FX_Params
{
	EDeformType                                        Op;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.SERVER End FX
struct ASmallDeform_C_SERVER_End_FX_Params
{
};

// Function SmallDeform.SmallDeform_C.MULTI End FX
struct ASmallDeform_C_MULTI_End_FX_Params
{
};

// Function SmallDeform.SmallDeform_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_1_OnResourceSlotFull__DelegateSignature
struct ASmallDeform_C_BndEvt__ResourceCache_K2Node_ComponentBoundEvent_1_OnResourceSlotFull__DelegateSignature_Params
{
	class UClass*                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_2_OnResourceStored__DelegateSignature
struct ASmallDeform_C_BndEvt__ResourceCache_K2Node_ComponentBoundEvent_2_OnResourceStored__DelegateSignature_Params
{
	class UClass*                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.BndEvt__CrackableActor_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature
struct ASmallDeform_C_BndEvt__CrackableActor_K2Node_ComponentBoundEvent_0_OnCrackedStateChanged__DelegateSignature_Params
{
	class UCrackableActorComponent*                    CrackableActorComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCracked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.HandleCreativeModeEnabledChanged
struct ASmallDeform_C_HandleCreativeModeEnabledChanged_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.HandleActiveCreativeTerrainColorChanged
struct ASmallDeform_C_HandleActiveCreativeTerrainColorChanged_Params
{
	bool                                               PickedWithEyedropperTool;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.UpdateActiveTerrainColor
struct ASmallDeform_C_UpdateActiveTerrainColor_Params
{
};

// Function SmallDeform.SmallDeform_C.OnAttemptedToPickColor
struct ASmallDeform_C_OnAttemptedToPickColor_Params
{
};

// Function SmallDeform.SmallDeform_C.HandleCreativeTerrainLightChanged
struct ASmallDeform_C_HandleCreativeTerrainLightChanged_Params
{
	bool                                               Light_Active;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmallDeform.SmallDeform_C.ExecuteUbergraph_SmallDeform
struct ASmallDeform_C_ExecuteUbergraph_SmallDeform_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
