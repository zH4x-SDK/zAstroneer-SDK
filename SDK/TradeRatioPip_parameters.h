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

// Function TradeRatioPip.TradeRatioPip_C.DeactivatePip
struct UTradeRatioPip_C_DeactivatePip_Params
{
};

// Function TradeRatioPip.TradeRatioPip_C.ActivatePip
struct UTradeRatioPip_C_ActivatePip_Params
{
};

// Function TradeRatioPip.TradeRatioPip_C.Construct
struct UTradeRatioPip_C_Construct_Params
{
};

// Function TradeRatioPip.TradeRatioPip_C.ExecuteUbergraph_TradeRatioPip
struct UTradeRatioPip_C_ExecuteUbergraph_TradeRatioPip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TradeRatioPip.TradeRatioPip_C.OnPipClicked__DelegateSignature
struct UTradeRatioPip_C_OnPipClicked__DelegateSignature_Params
{
	int                                                PipIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
