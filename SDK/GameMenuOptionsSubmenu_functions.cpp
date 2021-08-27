
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

// Function GameMenuOptionsSubmenu.GameMenuOptionsSubmenu_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuOptionsSubmenu_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuOptionsSubmenu.GameMenuOptionsSubmenu_C.LayoutWidget");

	UGameMenuOptionsSubmenu_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuOptionsSubmenu.GameMenuOptionsSubmenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuOptionsSubmenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuOptionsSubmenu.GameMenuOptionsSubmenu_C.Construct");

	UGameMenuOptionsSubmenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuOptionsSubmenu.GameMenuOptionsSubmenu_C.ExecuteUbergraph_GameMenuOptionsSubmenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuOptionsSubmenu_C::ExecuteUbergraph_GameMenuOptionsSubmenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuOptionsSubmenu.GameMenuOptionsSubmenu_C.ExecuteUbergraph_GameMenuOptionsSubmenu");

	UGameMenuOptionsSubmenu_C_ExecuteUbergraph_GameMenuOptionsSubmenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
