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

// Function HolidayGift_ShippingContainer1.HolidayGift_ShippingContainer1_C.UserConstructionScript
struct AHolidayGift_ShippingContainer1_C_UserConstructionScript_Params
{
};

// Function HolidayGift_ShippingContainer1.HolidayGift_ShippingContainer1_C.ReceiveBeginPlay
struct AHolidayGift_ShippingContainer1_C_ReceiveBeginPlay_Params
{
};

// Function HolidayGift_ShippingContainer1.HolidayGift_ShippingContainer1_C.PickedUpFromWorld
struct AHolidayGift_ShippingContainer1_C_PickedUpFromWorld_Params
{
};

// Function HolidayGift_ShippingContainer1.HolidayGift_ShippingContainer1_C.DroppedInWorld
struct AHolidayGift_ShippingContainer1_C_DroppedInWorld_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               terrainComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HolidayGift_ShippingContainer1.HolidayGift_ShippingContainer1_C.ReceiveHit
struct AHolidayGift_ShippingContainer1_C_ReceiveHit_Params
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

// Function HolidayGift_ShippingContainer1.HolidayGift_ShippingContainer1_C.ExecuteUbergraph_HolidayGift_ShippingContainer1
struct AHolidayGift_ShippingContainer1_C_ExecuteUbergraph_HolidayGift_ShippingContainer1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
