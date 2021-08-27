
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

// Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonServerList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.Construct");

	UGameMenuTabBarButtonServerList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.CustomEvent_UsedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerList_C::CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.CustomEvent_UsedDelegate");

	UGameMenuTabBarButtonServerList_C_CustomEvent_UsedDelegate_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.ExecuteUbergraph_GameMenuTabBarButtonServerList
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerList_C::ExecuteUbergraph_GameMenuTabBarButtonServerList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerList.GameMenuTabBarButtonServerList_C.ExecuteUbergraph_GameMenuTabBarButtonServerList");

	UGameMenuTabBarButtonServerList_C_ExecuteUbergraph_GameMenuTabBarButtonServerList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
