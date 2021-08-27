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

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.UserConstructionScript
struct APrinter_Breadboards_T3_C_UserConstructionScript_Params
{
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ReceiveBeginPlay
struct APrinter_Breadboards_T3_C_ReceiveBeginPlay_Params
{
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.AnimationStateChanged
struct APrinter_Breadboards_T3_C_AnimationStateChanged_Params
{
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.SetupPrinterSlots
struct APrinter_Breadboards_T3_C_SetupPrinterSlots_Params
{
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.UpdateAnim_Printing
struct APrinter_Breadboards_T3_C_UpdateAnim_Printing_Params
{
	bool                                               Printing;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.SetupAnimBP
struct APrinter_Breadboards_T3_C_SetupAnimBP_Params
{
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.DroppedInWorld
struct APrinter_Breadboards_T3_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.PickedUpFromWorld
struct APrinter_Breadboards_T3_C_PickedUpFromWorld_Params
{
};

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ReceiveHit
struct APrinter_Breadboards_T3_C_ReceiveHit_Params
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

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ExecuteUbergraph_Printer_Breadboards_T3
struct APrinter_Breadboards_T3_C_ExecuteUbergraph_Printer_Breadboards_T3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
