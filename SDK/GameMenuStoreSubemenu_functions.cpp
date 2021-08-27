
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

// Function GameMenuStoreSubemenu.GameMenuStoreSubemenu_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_98_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuStoreSubemenu_C::BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_98_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuStoreSubemenu.GameMenuStoreSubemenu_C.BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_98_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuStoreSubemenu_C_BndEvt__GameMenuEntryDoubleText_K2Node_ComponentBoundEvent_98_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuStoreSubemenu.GameMenuStoreSubemenu_C.ExecuteUbergraph_GameMenuStoreSubemenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuStoreSubemenu_C::ExecuteUbergraph_GameMenuStoreSubemenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuStoreSubemenu.GameMenuStoreSubemenu_C.ExecuteUbergraph_GameMenuStoreSubemenu");

	UGameMenuStoreSubemenu_C_ExecuteUbergraph_GameMenuStoreSubemenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
