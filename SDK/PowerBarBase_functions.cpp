
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

// Function PowerBarBase.PowerBarBase_C.Set View Values
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBarBase_C::Set_View_Values(float Alpha, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBarBase.PowerBarBase_C.Set View Values");

	APowerBarBase_C_Set_View_Values_Params params;
	params.Alpha = Alpha;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBarBase.PowerBarBase_C.Set View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBarBase_C::Set_View(float Alpha, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBarBase.PowerBarBase_C.Set View");

	APowerBarBase_C_Set_View_Params params;
	params.Alpha = Alpha;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBarBase.PowerBarBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerBarBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBarBase.PowerBarBase_C.UserConstructionScript");

	APowerBarBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBarBase.PowerBarBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBarBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBarBase.PowerBarBase_C.ReceiveTick");

	APowerBarBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBarBase.PowerBarBase_C.ExecuteUbergraph_PowerBarBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBarBase_C::ExecuteUbergraph_PowerBarBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBarBase.PowerBarBase_C.ExecuteUbergraph_PowerBarBase");

	APowerBarBase_C_ExecuteUbergraph_PowerBarBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
