
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

// Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.GetPivotForUserWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UAstroPopupBadgeWidgetBP_C::GetPivotForUserWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.GetPivotForUserWidget");

	UAstroPopupBadgeWidgetBP_C_GetPivotForUserWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.GetDrawSizeForUserWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UAstroPopupBadgeWidgetBP_C::GetDrawSizeForUserWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.GetDrawSizeForUserWidget");

	UAstroPopupBadgeWidgetBP_C_GetDrawSizeForUserWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.LayoutWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroPopupBadgeWidgetBP_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.LayoutWidget");

	UAstroPopupBadgeWidgetBP_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAstroPopupBadgeWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.Construct");

	UAstroPopupBadgeWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.ExecuteUbergraph_AstroPopupBadgeWidgetBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroPopupBadgeWidgetBP_C::ExecuteUbergraph_AstroPopupBadgeWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPopupBadgeWidgetBP.AstroPopupBadgeWidgetBP_C.ExecuteUbergraph_AstroPopupBadgeWidgetBP");

	UAstroPopupBadgeWidgetBP_C_ExecuteUbergraph_AstroPopupBadgeWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
