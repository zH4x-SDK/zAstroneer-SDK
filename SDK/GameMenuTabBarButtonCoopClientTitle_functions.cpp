
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

// Function GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonCoopClientTitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C.Construct");

	UGameMenuTabBarButtonCoopClientTitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C.CustomEvent_UsedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonCoopClientTitle_C::CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C.CustomEvent_UsedDelegate");

	UGameMenuTabBarButtonCoopClientTitle_C_CustomEvent_UsedDelegate_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C.ExecuteUbergraph_GameMenuTabBarButtonCoopClientTitle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonCoopClientTitle_C::ExecuteUbergraph_GameMenuTabBarButtonCoopClientTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCoopClientTitle.GameMenuTabBarButtonCoopClientTitle_C.ExecuteUbergraph_GameMenuTabBarButtonCoopClientTitle");

	UGameMenuTabBarButtonCoopClientTitle_C_ExecuteUbergraph_GameMenuTabBarButtonCoopClientTitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
