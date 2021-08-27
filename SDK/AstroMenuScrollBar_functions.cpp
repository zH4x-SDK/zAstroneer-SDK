
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

// Function AstroMenuScrollBar.AstroMenuScrollBar_C.GetScrollBarWidth
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAstroMenuScrollBar_C::GetScrollBarWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBar.AstroMenuScrollBar_C.GetScrollBarWidth");

	UAstroMenuScrollBar_C_GetScrollBarWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroMenuScrollBar.AstroMenuScrollBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAstroMenuScrollBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBar.AstroMenuScrollBar_C.Construct");

	UAstroMenuScrollBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBar.AstroMenuScrollBar_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               MousePosDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusableWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroMenuScrollBar_C::CustomEvent_1(const struct FVector2D& MousePosition, const struct FVector2D& MousePosDelta, class UAstroGameMenuFocusItemWidget* FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBar.AstroMenuScrollBar_C.CustomEvent_1");

	UAstroMenuScrollBar_C_CustomEvent_1_Params params;
	params.MousePosition = MousePosition;
	params.MousePosDelta = MousePosDelta;
	params.FocusableWidget = FocusableWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBar.AstroMenuScrollBar_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAstroMenuScrollBar_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBar.AstroMenuScrollBar_C.SetupStylingData");

	UAstroMenuScrollBar_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBar.AstroMenuScrollBar_C.ExecuteUbergraph_AstroMenuScrollBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroMenuScrollBar_C::ExecuteUbergraph_AstroMenuScrollBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBar.AstroMenuScrollBar_C.ExecuteUbergraph_AstroMenuScrollBar");

	UAstroMenuScrollBar_C_ExecuteUbergraph_AstroMenuScrollBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
