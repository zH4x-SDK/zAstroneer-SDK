
#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TradeRatioPip.TradeRatioPip_C.DeactivatePip
// (Public, BlueprintCallable, BlueprintEvent)

void UTradeRatioPip_C::DeactivatePip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeRatioPip.TradeRatioPip_C.DeactivatePip");

	UTradeRatioPip_C_DeactivatePip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TradeRatioPip.TradeRatioPip_C.ActivatePip
// (Public, BlueprintCallable, BlueprintEvent)

void UTradeRatioPip_C::ActivatePip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeRatioPip.TradeRatioPip_C.ActivatePip");

	UTradeRatioPip_C_ActivatePip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TradeRatioPip.TradeRatioPip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTradeRatioPip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeRatioPip.TradeRatioPip_C.Construct");

	UTradeRatioPip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TradeRatioPip.TradeRatioPip_C.ExecuteUbergraph_TradeRatioPip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTradeRatioPip_C::ExecuteUbergraph_TradeRatioPip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeRatioPip.TradeRatioPip_C.ExecuteUbergraph_TradeRatioPip");

	UTradeRatioPip_C_ExecuteUbergraph_TradeRatioPip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TradeRatioPip.TradeRatioPip_C.OnPipClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PipIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTradeRatioPip_C::OnPipClicked__DelegateSignature(int PipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeRatioPip.TradeRatioPip_C.OnPipClicked__DelegateSignature");

	UTradeRatioPip_C_OnPipClicked__DelegateSignature_Params params;
	params.PipIndex = PipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
