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

// Function Smelter_Large.Smelter_Large_C.UpdateAnimationState
struct ASmelter_Large_C_UpdateAnimationState_Params
{
};

// Function Smelter_Large.Smelter_Large_C.UpdateUseContext
struct ASmelter_Large_C_UpdateUseContext_Params
{
};

// Function Smelter_Large.Smelter_Large_C.GetBodySlotLegacy
struct ASmelter_Large_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Smelter_Large.Smelter_Large_C.UserConstructionScript
struct ASmelter_Large_C_UserConstructionScript_Params
{
};

// Function Smelter_Large.Smelter_Large_C.InpActEvt_Use_K2Node_InputActionEvent_1
struct ASmelter_Large_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Smelter_Large.Smelter_Large_C.ReceiveBeginPlay
struct ASmelter_Large_C_ReceiveBeginPlay_Params
{
};

// Function Smelter_Large.Smelter_Large_C.ReceiveEndPlay
struct ASmelter_Large_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Smelter_Large.Smelter_Large_C.Multiplay Smelter Finish SFX
struct ASmelter_Large_C_Multiplay_Smelter_Finish_SFX_Params
{
};

// Function Smelter_Large.Smelter_Large_C.DroppedInWorld
struct ASmelter_Large_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Smelter_Large.Smelter_Large_C.PickedUpFromWorld
struct ASmelter_Large_C_PickedUpFromWorld_Params
{
};

// Function Smelter_Large.Smelter_Large_C.ReceiveHit
struct ASmelter_Large_C_ReceiveHit_Params
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

// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_OnItemConverterStateChanged__DelegateSignature
struct ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_OnItemConverterStateChanged__DelegateSignature_Params
{
	EItemConverterState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemConverterState                                prevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_2_OnItemConversionComplete__DelegateSignature
struct ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_2_OnItemConversionComplete__DelegateSignature_Params
{
	TArray<class UClass*>                              outputItemTypes;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsListChanged__DelegateSignature
struct ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsListChanged__DelegateSignature_Params
{
	TArray<struct FActiveItemConversionProgress>       newActiveConversions;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature
struct ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Smelter_Large.Smelter_Large_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature
struct ASmelter_Large_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature_Params
{
	bool                                               HasAvailablePower;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Smelter_Large.Smelter_Large_C.ExecuteUbergraph_Smelter_Large
struct ASmelter_Large_C_ExecuteUbergraph_Smelter_Large_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Smelter_Large.Smelter_Large_C.OnSmeltItemRefined__DelegateSignature
struct ASmelter_Large_C_OnSmeltItemRefined__DelegateSignature_Params
{
};

// Function Smelter_Large.Smelter_Large_C.OnSmeltOperationStarted__DelegateSignature
struct ASmelter_Large_C_OnSmeltOperationStarted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
