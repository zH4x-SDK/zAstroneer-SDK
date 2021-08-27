
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

// Function GameMenuTabBarButtonServerSessionManagement.GameMenuTabBarButtonServerSessionManagement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonServerSessionManagement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerSessionManagement.GameMenuTabBarButtonServerSessionManagement_C.Construct");

	UGameMenuTabBarButtonServerSessionManagement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerSessionManagement.GameMenuTabBarButtonServerSessionManagement_C.CustomEvent_UsedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerSessionManagement_C::CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerSessionManagement.GameMenuTabBarButtonServerSessionManagement_C.CustomEvent_UsedDelegate");

	UGameMenuTabBarButtonServerSessionManagement_C_CustomEvent_UsedDelegate_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerSessionManagement.GameMenuTabBarButtonServerSessionManagement_C.ExecuteUbergraph_GameMenuTabBarButtonServerSessionManagement
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerSessionManagement_C::ExecuteUbergraph_GameMenuTabBarButtonServerSessionManagement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerSessionManagement.GameMenuTabBarButtonServerSessionManagement_C.ExecuteUbergraph_GameMenuTabBarButtonServerSessionManagement");

	UGameMenuTabBarButtonServerSessionManagement_C_ExecuteUbergraph_GameMenuTabBarButtonServerSessionManagement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
