
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

// Function CarouselPipBar.CarouselPipBar_C.SetPipCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCarouselPipBar_C::SetPipCount(int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.SetPipCount");

	UCarouselPipBar_C_SetPipCount_Params params;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPipBar.CarouselPipBar_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InPipCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InActivePipIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCarouselPipBar_C::Initialize(int InPipCount, int InActivePipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.Initialize");

	UCarouselPipBar_C_Initialize_Params params;
	params.InPipCount = InPipCount;
	params.InActivePipIndex = InActivePipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPipBar.CarouselPipBar_C.GetActivePip
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCarouselPip_C*          ActivePip                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCarouselPipBar_C::GetActivePip(class UCarouselPip_C** ActivePip)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.GetActivePip");

	UCarouselPipBar_C_GetActivePip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActivePip != nullptr)
		*ActivePip = params.ActivePip;
}


// Function CarouselPipBar.CarouselPipBar_C.SetActivePip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PipIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCarouselPipBar_C::SetActivePip(int PipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.SetActivePip");

	UCarouselPipBar_C_SetActivePip_Params params;
	params.PipIndex = PipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPipBar.CarouselPipBar_C.InitializePips
// (Private, BlueprintCallable, BlueprintEvent)

void UCarouselPipBar_C::InitializePips()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.InitializePips");

	UCarouselPipBar_C_InitializePips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPipBar.CarouselPipBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCarouselPipBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.Construct");

	UCarouselPipBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPipBar.CarouselPipBar_C.ExecuteUbergraph_CarouselPipBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCarouselPipBar_C::ExecuteUbergraph_CarouselPipBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.ExecuteUbergraph_CarouselPipBar");

	UCarouselPipBar_C_ExecuteUbergraph_CarouselPipBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPipBar.CarouselPipBar_C.OnPipSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedPipIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCarouselPipBar_C::OnPipSelectionChanged__DelegateSignature(int SelectedPipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPipBar.CarouselPipBar_C.OnPipSelectionChanged__DelegateSignature");

	UCarouselPipBar_C_OnPipSelectionChanged__DelegateSignature_Params params;
	params.SelectedPipIndex = SelectedPipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
