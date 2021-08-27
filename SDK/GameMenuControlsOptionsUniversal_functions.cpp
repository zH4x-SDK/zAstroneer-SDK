
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

// Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuControlsOptionsUniversal_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.LayoutWidget");

	UGameMenuControlsOptionsUniversal_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.BndEvt__AbsoluteSteering_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuControlsOptionsUniversal_C::BndEvt__AbsoluteSteering_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.BndEvt__AbsoluteSteering_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature");

	UGameMenuControlsOptionsUniversal_C_BndEvt__AbsoluteSteering_K2Node_ComponentBoundEvent_3_OnFocusItemUsed__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.BndEvt__VehicleAirControls_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuControlsOptionsUniversal_C::BndEvt__VehicleAirControls_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.BndEvt__VehicleAirControls_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuControlsOptionsUniversal_C_BndEvt__VehicleAirControls_K2Node_ComponentBoundEvent_308_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.ExecuteUbergraph_GameMenuControlsOptionsUniversal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuControlsOptionsUniversal_C::ExecuteUbergraph_GameMenuControlsOptionsUniversal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuControlsOptionsUniversal.GameMenuControlsOptionsUniversal_C.ExecuteUbergraph_GameMenuControlsOptionsUniversal");

	UGameMenuControlsOptionsUniversal_C_ExecuteUbergraph_GameMenuControlsOptionsUniversal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
