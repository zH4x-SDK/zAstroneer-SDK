
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

// Function GameMenuTabBarButtonCreativeSettings.GameMenuTabBarButtonCreativeSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonCreativeSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCreativeSettings.GameMenuTabBarButtonCreativeSettings_C.Construct");

	UGameMenuTabBarButtonCreativeSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonCreativeSettings.GameMenuTabBarButtonCreativeSettings_C.CustomEvent_UsedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonCreativeSettings_C::CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCreativeSettings.GameMenuTabBarButtonCreativeSettings_C.CustomEvent_UsedDelegate");

	UGameMenuTabBarButtonCreativeSettings_C_CustomEvent_UsedDelegate_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonCreativeSettings.GameMenuTabBarButtonCreativeSettings_C.ExecuteUbergraph_GameMenuTabBarButtonCreativeSettings
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonCreativeSettings_C::ExecuteUbergraph_GameMenuTabBarButtonCreativeSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCreativeSettings.GameMenuTabBarButtonCreativeSettings_C.ExecuteUbergraph_GameMenuTabBarButtonCreativeSettings");

	UGameMenuTabBarButtonCreativeSettings_C_ExecuteUbergraph_GameMenuTabBarButtonCreativeSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
