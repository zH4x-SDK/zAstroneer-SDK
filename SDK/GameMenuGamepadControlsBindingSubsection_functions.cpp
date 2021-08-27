
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

// Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuGamepadControlsBindingSubsection_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.LayoutWidget");

	UGameMenuGamepadControlsBindingSubsection_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.BndEvt__HoldToSprintEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuGamepadControlsBindingSubsection_C::BndEvt__HoldToSprintEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.BndEvt__HoldToSprintEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature");

	UGameMenuGamepadControlsBindingSubsection_C_BndEvt__HoldToSprintEntry_K2Node_ComponentBoundEvent_0_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuGamepadControlsBindingSubsection_C::BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature");

	UGameMenuGamepadControlsBindingSubsection_C_BndEvt__InvertCameraYEntry_K2Node_ComponentBoundEvent_1_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuGamepadControlsBindingSubsection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.Construct");

	UGameMenuGamepadControlsBindingSubsection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.ExecuteUbergraph_GameMenuGamepadControlsBindingSubsection
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuGamepadControlsBindingSubsection_C::ExecuteUbergraph_GameMenuGamepadControlsBindingSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuGamepadControlsBindingSubsection.GameMenuGamepadControlsBindingSubsection_C.ExecuteUbergraph_GameMenuGamepadControlsBindingSubsection");

	UGameMenuGamepadControlsBindingSubsection_C_ExecuteUbergraph_GameMenuGamepadControlsBindingSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
