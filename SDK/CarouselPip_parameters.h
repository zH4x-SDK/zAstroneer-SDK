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

// Function CarouselPip.CarouselPip_C.On_InactiveBorder_MouseButtonDown_1
struct UCarouselPip_C_On_InactiveBorder_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CarouselPip.CarouselPip_C.DeactivatePip
struct UCarouselPip_C_DeactivatePip_Params
{
};

// Function CarouselPip.CarouselPip_C.ActivatePip
struct UCarouselPip_C_ActivatePip_Params
{
};

// Function CarouselPip.CarouselPip_C.Construct
struct UCarouselPip_C_Construct_Params
{
};

// Function CarouselPip.CarouselPip_C.ExecuteUbergraph_CarouselPip
struct UCarouselPip_C_ExecuteUbergraph_CarouselPip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarouselPip.CarouselPip_C.OnPipClicked__DelegateSignature
struct UCarouselPip_C_OnPipClicked__DelegateSignature_Params
{
	int                                                PipIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
