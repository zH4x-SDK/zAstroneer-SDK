
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

// Function GameMenuTabBarButtonServerAdmin.GameMenuTabBarButtonServerAdmin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonServerAdmin_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerAdmin.GameMenuTabBarButtonServerAdmin_C.Construct");

	UGameMenuTabBarButtonServerAdmin_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerAdmin.GameMenuTabBarButtonServerAdmin_C.CustomEvent_UsedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerAdmin_C::CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerAdmin.GameMenuTabBarButtonServerAdmin_C.CustomEvent_UsedDelegate");

	UGameMenuTabBarButtonServerAdmin_C_CustomEvent_UsedDelegate_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerAdmin.GameMenuTabBarButtonServerAdmin_C.ExecuteUbergraph_GameMenuTabBarButtonServerAdmin
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerAdmin_C::ExecuteUbergraph_GameMenuTabBarButtonServerAdmin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerAdmin.GameMenuTabBarButtonServerAdmin_C.ExecuteUbergraph_GameMenuTabBarButtonServerAdmin");

	UGameMenuTabBarButtonServerAdmin_C_ExecuteUbergraph_GameMenuTabBarButtonServerAdmin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
