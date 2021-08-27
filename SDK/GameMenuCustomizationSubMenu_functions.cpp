
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

// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.OnFocusIndexChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewFocusIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubMenu_C::OnFocusIndexChanged(int NewFocusIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.OnFocusIndexChanged");

	UGameMenuCustomizationSubMenu_C_OnFocusIndexChanged_Params params;
	params.NewFocusIndex = NewFocusIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.NavigatedAwayFrom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isNavigateBack                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubMenu_C::NavigatedAwayFrom(bool isNavigateBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.NavigatedAwayFrom");

	UGameMenuCustomizationSubMenu_C_NavigatedAwayFrom_Params params;
	params.isNavigateBack = isNavigateBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuCustomizationSubMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.Construct");

	UGameMenuCustomizationSubMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.MenuBeingClosed
// (Event, Public, BlueprintEvent)

void UGameMenuCustomizationSubMenu_C::MenuBeingClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.MenuBeingClosed");

	UGameMenuCustomizationSubMenu_C_MenuBeingClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.ExecuteUbergraph_GameMenuCustomizationSubMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuCustomizationSubMenu_C::ExecuteUbergraph_GameMenuCustomizationSubMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuCustomizationSubMenu.GameMenuCustomizationSubMenu_C.ExecuteUbergraph_GameMenuCustomizationSubMenu");

	UGameMenuCustomizationSubMenu_C_ExecuteUbergraph_GameMenuCustomizationSubMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
