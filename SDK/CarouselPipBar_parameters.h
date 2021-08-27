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

// Function CarouselPipBar.CarouselPipBar_C.SetPipCount
struct UCarouselPipBar_C_SetPipCount_Params
{
	int                                                NewCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarouselPipBar.CarouselPipBar_C.Initialize
struct UCarouselPipBar_C_Initialize_Params
{
	int                                                InPipCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InActivePipIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarouselPipBar.CarouselPipBar_C.GetActivePip
struct UCarouselPipBar_C_GetActivePip_Params
{
	class UCarouselPip_C*                              ActivePip;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CarouselPipBar.CarouselPipBar_C.SetActivePip
struct UCarouselPipBar_C_SetActivePip_Params
{
	int                                                PipIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarouselPipBar.CarouselPipBar_C.InitializePips
struct UCarouselPipBar_C_InitializePips_Params
{
};

// Function CarouselPipBar.CarouselPipBar_C.Construct
struct UCarouselPipBar_C_Construct_Params
{
};

// Function CarouselPipBar.CarouselPipBar_C.ExecuteUbergraph_CarouselPipBar
struct UCarouselPipBar_C_ExecuteUbergraph_CarouselPipBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CarouselPipBar.CarouselPipBar_C.OnPipSelectionChanged__DelegateSignature
struct UCarouselPipBar_C_OnPipSelectionChanged__DelegateSignature_Params
{
	int                                                SelectedPipIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
