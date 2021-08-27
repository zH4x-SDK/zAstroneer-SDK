
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

// Function LEMPhotoWidget.LEMPhotoWidget_C.GetBrush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush ULEMPhotoWidget_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LEMPhotoWidget.LEMPhotoWidget_C.GetBrush_1");

	ULEMPhotoWidget_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LEMPhotoWidget.LEMPhotoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULEMPhotoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LEMPhotoWidget.LEMPhotoWidget_C.Construct");

	ULEMPhotoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LEMPhotoWidget.LEMPhotoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULEMPhotoWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LEMPhotoWidget.LEMPhotoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	ULEMPhotoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LEMPhotoWidget.LEMPhotoWidget_C.ExecuteUbergraph_LEMPhotoWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULEMPhotoWidget_C::ExecuteUbergraph_LEMPhotoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LEMPhotoWidget.LEMPhotoWidget_C.ExecuteUbergraph_LEMPhotoWidget");

	ULEMPhotoWidget_C_ExecuteUbergraph_LEMPhotoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
