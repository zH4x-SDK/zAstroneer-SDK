
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

// Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector2D               MousePosition                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroMenuScrollBarContainer_C::BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(const struct FVector2D& MousePosition, class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UAstroMenuScrollBarContainer_C_BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.MousePosition = MousePosition;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroMenuScrollBarContainer_C::BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature");

	UAstroMenuScrollBarContainer_C_BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_1_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroMenuScrollBarContainer_C::BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature");

	UAstroMenuScrollBarContainer_C_BndEvt__AstroMenuScrollBar_K2Node_ComponentBoundEvent_2_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.ExecuteUbergraph_AstroMenuScrollBarContainer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroMenuScrollBarContainer_C::ExecuteUbergraph_AstroMenuScrollBarContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.ExecuteUbergraph_AstroMenuScrollBarContainer");

	UAstroMenuScrollBarContainer_C_ExecuteUbergraph_AstroMenuScrollBarContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.ScrollbarDragEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAstroMenuScrollBarContainer_C::ScrollbarDragEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.ScrollbarDragEnded__DelegateSignature");

	UAstroMenuScrollBarContainer_C_ScrollbarDragEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.ScrollbarDragStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAstroMenuScrollBarContainer_C::ScrollbarDragStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroMenuScrollBarContainer.AstroMenuScrollBarContainer_C.ScrollbarDragStarted__DelegateSignature");

	UAstroMenuScrollBarContainer_C_ScrollbarDragStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
