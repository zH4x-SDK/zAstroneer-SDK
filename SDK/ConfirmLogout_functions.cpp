
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

// Function ConfirmLogout.ConfirmLogout_C.SetTextHovered
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UConfirmLogout_C::SetTextHovered(bool IsHovered, class UTextBlock** Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.SetTextHovered");

	UConfirmLogout_C_SetTextHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function ConfirmLogout.ConfirmLogout_C.SetupButtonStyles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfirmLogout_C::SetupButtonStyles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.SetupButtonStyles");

	UConfirmLogout_C_SetupButtonStyles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfirmLogout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.Construct");

	UConfirmLogout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConfirmLogout_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.Destruct");

	UConfirmLogout_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_225_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmLogout_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_225_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_225_OnButtonHoverEvent__DelegateSignature");

	UConfirmLogout_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_225_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_282_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmLogout_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_282_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_282_OnButtonHoverEvent__DelegateSignature");

	UConfirmLogout_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_282_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_295_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmLogout_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_295_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_295_OnButtonHoverEvent__DelegateSignature");

	UConfirmLogout_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_295_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_312_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmLogout_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_312_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_312_OnButtonHoverEvent__DelegateSignature");

	UConfirmLogout_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_312_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmLogout_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature");

	UConfirmLogout_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_347_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UConfirmLogout_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_347_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_347_OnButtonClickedEvent__DelegateSignature");

	UConfirmLogout_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_347_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmLogout.ConfirmLogout_C.ExecuteUbergraph_ConfirmLogout
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmLogout_C::ExecuteUbergraph_ConfirmLogout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConfirmLogout.ConfirmLogout_C.ExecuteUbergraph_ConfirmLogout");

	UConfirmLogout_C_ExecuteUbergraph_ConfirmLogout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
