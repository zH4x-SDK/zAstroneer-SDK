
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

// Function ResourceTradeRatio.ResourceTradeRatio_C.SetOutputCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceTradeRatio_C::SetOutputCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceTradeRatio.ResourceTradeRatio_C.SetOutputCount");

	UResourceTradeRatio_C_SetOutputCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceTradeRatio.ResourceTradeRatio_C.SetActivePipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceTradeRatio_C::SetActivePipCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceTradeRatio.ResourceTradeRatio_C.SetActivePipCount");

	UResourceTradeRatio_C_SetActivePipCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceTradeRatio.ResourceTradeRatio_C.SetPipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceTradeRatio_C::SetPipCount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceTradeRatio.ResourceTradeRatio_C.SetPipCount");

	UResourceTradeRatio_C_SetPipCount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceTradeRatio.ResourceTradeRatio_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResourceTradeRatio_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceTradeRatio.ResourceTradeRatio_C.Construct");

	UResourceTradeRatio_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceTradeRatio.ResourceTradeRatio_C.ExecuteUbergraph_ResourceTradeRatio
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResourceTradeRatio_C::ExecuteUbergraph_ResourceTradeRatio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceTradeRatio.ResourceTradeRatio_C.ExecuteUbergraph_ResourceTradeRatio");

	UResourceTradeRatio_C_ExecuteUbergraph_ResourceTradeRatio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
