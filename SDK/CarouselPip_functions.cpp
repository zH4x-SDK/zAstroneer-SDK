
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

// Function CarouselPip.CarouselPip_C.On_InactiveBorder_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCarouselPip_C::On_InactiveBorder_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPip.CarouselPip_C.On_InactiveBorder_MouseButtonDown_1");

	UCarouselPip_C_On_InactiveBorder_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function CarouselPip.CarouselPip_C.DeactivatePip
// (Public, BlueprintCallable, BlueprintEvent)

void UCarouselPip_C::DeactivatePip()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPip.CarouselPip_C.DeactivatePip");

	UCarouselPip_C_DeactivatePip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPip.CarouselPip_C.ActivatePip
// (Public, BlueprintCallable, BlueprintEvent)

void UCarouselPip_C::ActivatePip()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPip.CarouselPip_C.ActivatePip");

	UCarouselPip_C_ActivatePip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPip.CarouselPip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCarouselPip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPip.CarouselPip_C.Construct");

	UCarouselPip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPip.CarouselPip_C.ExecuteUbergraph_CarouselPip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCarouselPip_C::ExecuteUbergraph_CarouselPip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPip.CarouselPip_C.ExecuteUbergraph_CarouselPip");

	UCarouselPip_C_ExecuteUbergraph_CarouselPip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarouselPip.CarouselPip_C.OnPipClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PipIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCarouselPip_C::OnPipClicked__DelegateSignature(int PipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarouselPip.CarouselPip_C.OnPipClicked__DelegateSignature");

	UCarouselPip_C_OnPipClicked__DelegateSignature_Params params;
	params.PipIndex = PipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
