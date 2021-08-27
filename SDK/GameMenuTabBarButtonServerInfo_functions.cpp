
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

// Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuTabBarButtonServerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.Construct");

	UGameMenuTabBarButtonServerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.CustomEvent_UsedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerInfo_C::CustomEvent_UsedDelegate(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.CustomEvent_UsedDelegate");

	UGameMenuTabBarButtonServerInfo_C_CustomEvent_UsedDelegate_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.ExecuteUbergraph_GameMenuTabBarButtonServerInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuTabBarButtonServerInfo_C::ExecuteUbergraph_GameMenuTabBarButtonServerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuTabBarButtonServerInfo.GameMenuTabBarButtonServerInfo_C.ExecuteUbergraph_GameMenuTabBarButtonServerInfo");

	UGameMenuTabBarButtonServerInfo_C_ExecuteUbergraph_GameMenuTabBarButtonServerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
