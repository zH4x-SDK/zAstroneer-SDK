
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

// Function ServerNewGamePopoutContents.ServerNewGamePopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerNewGamePopoutContents_C::BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerNewGamePopoutContents.ServerNewGamePopoutContents_C.BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature");

	UServerNewGamePopoutContents_C_BndEvt__AddServer_K2Node_ComponentBoundEvent_1502_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerNewGamePopoutContents.ServerNewGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerNewGamePopoutContents_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerNewGamePopoutContents.ServerNewGamePopoutContents_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature");

	UServerNewGamePopoutContents_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_1553_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerNewGamePopoutContents.ServerNewGamePopoutContents_C.ExecuteUbergraph_ServerNewGamePopoutContents
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerNewGamePopoutContents_C::ExecuteUbergraph_ServerNewGamePopoutContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerNewGamePopoutContents.ServerNewGamePopoutContents_C.ExecuteUbergraph_ServerNewGamePopoutContents");

	UServerNewGamePopoutContents_C_ExecuteUbergraph_ServerNewGamePopoutContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
