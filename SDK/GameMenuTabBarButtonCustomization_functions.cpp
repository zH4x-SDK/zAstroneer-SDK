
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

// Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonCustomization_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.Construct");

	UGameMenuTabBarButtonCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.CustomEvent_UsedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonCustomization_C::CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.CustomEvent_UsedDelegate");

	UGameMenuTabBarButtonCustomization_C_CustomEvent_UsedDelegate_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.HandleAllCosmeticsSeen
// (BlueprintCallable, BlueprintEvent)

void UGameMenuTabBarButtonCustomization_C::HandleAllCosmeticsSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.HandleAllCosmeticsSeen");

	UGameMenuTabBarButtonCustomization_C_HandleAllCosmeticsSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.ExecuteUbergraph_GameMenuTabBarButtonCustomization
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonCustomization_C::ExecuteUbergraph_GameMenuTabBarButtonCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonCustomization.GameMenuTabBarButtonCustomization_C.ExecuteUbergraph_GameMenuTabBarButtonCustomization");

	UGameMenuTabBarButtonCustomization_C_ExecuteUbergraph_GameMenuTabBarButtonCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
