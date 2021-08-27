
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

// Function GameMenuCoOpSubmenuClientTitle.GameMenuCoOpSubmenuClientTitle_C.BndEvt__JoinGameEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCoOpSubmenuClientTitle_C::BndEvt__JoinGameEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCoOpSubmenuClientTitle.GameMenuCoOpSubmenuClientTitle_C.BndEvt__JoinGameEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuCoOpSubmenuClientTitle_C_BndEvt__JoinGameEntry_K2Node_ComponentBoundEvent_0_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCoOpSubmenuClientTitle.GameMenuCoOpSubmenuClientTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuCoOpSubmenuClientTitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCoOpSubmenuClientTitle.GameMenuCoOpSubmenuClientTitle_C.Construct");

	UGameMenuCoOpSubmenuClientTitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCoOpSubmenuClientTitle.GameMenuCoOpSubmenuClientTitle_C.ExecuteUbergraph_GameMenuCoOpSubmenuClientTitle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCoOpSubmenuClientTitle_C::ExecuteUbergraph_GameMenuCoOpSubmenuClientTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCoOpSubmenuClientTitle.GameMenuCoOpSubmenuClientTitle_C.ExecuteUbergraph_GameMenuCoOpSubmenuClientTitle");

	UGameMenuCoOpSubmenuClientTitle_C_ExecuteUbergraph_GameMenuCoOpSubmenuClientTitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
