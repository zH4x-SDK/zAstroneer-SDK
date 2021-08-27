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

// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.CleanupSlottedItem
struct AModernPOI_Firework_Delivery_Base_C_CleanupSlottedItem_Params
{
	struct FSlotReference                              SlotRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.UserConstructionScript
struct AModernPOI_Firework_Delivery_Base_C_UserConstructionScript_Params
{
};

// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.ReceiveTick
struct AModernPOI_Firework_Delivery_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.ExecuteUbergraph_ModernPOI_Firework_Delivery_Base
struct AModernPOI_Firework_Delivery_Base_C_ExecuteUbergraph_ModernPOI_Firework_Delivery_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
