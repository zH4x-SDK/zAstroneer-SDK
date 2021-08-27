
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

// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuEntry_DiscreteInputBinding_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.LayoutWidget");

	UGameMenuEntry_DiscreteInputBinding_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuEntry_DiscreteInputBinding_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.Construct");

	UGameMenuEntry_DiscreteInputBinding_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    KeyPressed                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_DiscreteInputBinding_C::CustomEvent_3(const struct FKey& KeyPressed, class UAstroGameMenuFocusItemWidget* FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.CustomEvent_3");

	UGameMenuEntry_DiscreteInputBinding_C_CustomEvent_3_Params params;
	params.KeyPressed = KeyPressed;
	params.FocusableWidget = FocusableWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.CustomEvent_11
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_DiscreteInputBinding_C::CustomEvent_11(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.CustomEvent_11");

	UGameMenuEntry_DiscreteInputBinding_C_CustomEvent_11_Params params;
	params.MousePosition = MousePosition;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnFocusItemDiscreteEditCommitted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_DiscreteInputBinding_C::OnFocusItemDiscreteEditCommitted_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnFocusItemDiscreteEditCommitted_Event_1");

	UGameMenuEntry_DiscreteInputBinding_C_OnFocusItemDiscreteEditCommitted_Event_1_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnFocusItemDiscreteEditCanceled_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_DiscreteInputBinding_C::OnFocusItemDiscreteEditCanceled_Event_1(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnFocusItemDiscreteEditCanceled_Event_1");

	UGameMenuEntry_DiscreteInputBinding_C_OnFocusItemDiscreteEditCanceled_Event_1_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.ExecuteUbergraph_GameMenuEntry_DiscreteInputBinding
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuEntry_DiscreteInputBinding_C::ExecuteUbergraph_GameMenuEntry_DiscreteInputBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.ExecuteUbergraph_GameMenuEntry_DiscreteInputBinding");

	UGameMenuEntry_DiscreteInputBinding_C_ExecuteUbergraph_GameMenuEntry_DiscreteInputBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnKeyboardBindingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGameMenuEntry_DiscreteInputBinding_C::OnKeyboardBindingChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuEntry_DiscreteInputBinding.GameMenuEntry_DiscreteInputBinding_C.OnKeyboardBindingChanged__DelegateSignature");

	UGameMenuEntry_DiscreteInputBinding_C_OnKeyboardBindingChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
