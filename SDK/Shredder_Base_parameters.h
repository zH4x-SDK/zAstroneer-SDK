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

// Function Shredder_Base.Shredder_Base_C.FixupInvalidShredSlotItems
struct AShredder_Base_C_FixupInvalidShredSlotItems_Params
{
};

// Function Shredder_Base.Shredder_Base_C.DoesInputSlotHaveAnyItems
struct AShredder_Base_C_DoesInputSlotHaveAnyItems_Params
{
	bool                                               HasItems;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.IsReadyToShred
struct AShredder_Base_C_IsReadyToShred_Params
{
	bool                                               CanShred;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.GetBodySlotLegacy
struct AShredder_Base_C_GetBodySlotLegacy_Params
{
	class UChildSlotComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.UserConstructionScript
struct AShredder_Base_C_UserConstructionScript_Params
{
};

// Function Shredder_Base.Shredder_Base_C.ReceiveBeginPlay
struct AShredder_Base_C_ReceiveBeginPlay_Params
{
};

// Function Shredder_Base.Shredder_Base_C.OnItemSetInInputSlot
struct AShredder_Base_C_OnItemSetInInputSlot_Params
{
	class APhysicalItem*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature
struct AShredder_Base_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_ItemConverterStateChangedEvent__DelegateSignature
struct AShredder_Base_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_ItemConverterStateChangedEvent__DelegateSignature_Params
{
	EItemConverterState                                NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemConverterState                                prevState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
struct AShredder_Base_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params
{
};

// Function Shredder_Base.Shredder_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature
struct AShredder_Base_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature_Params
{
	bool                                               HasAvailablePower;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsAdded__DelegateSignature
struct AShredder_Base_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsAdded__DelegateSignature_Params
{
	TArray<struct FActiveItemConversionProgress>       newActiveConversions;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Shredder_Base.Shredder_Base_C.OnShreddedItemDestroyed
struct AShredder_Base_C_OnShreddedItemDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.ReceiveEndPlay
struct AShredder_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.ExecuteUbergraph_Shredder_Base
struct AShredder_Base_C_ExecuteUbergraph_Shredder_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.ShredderPowerLevelChanged__DelegateSignature
struct AShredder_Base_C_ShredderPowerLevelChanged__DelegateSignature_Params
{
	float                                              NewPowerLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Shredder_Base.Shredder_Base_C.ShredderStateChanged__DelegateSignature
struct AShredder_Base_C_ShredderStateChanged__DelegateSignature_Params
{
	TEnumAsByte<EShredderState>                        NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
