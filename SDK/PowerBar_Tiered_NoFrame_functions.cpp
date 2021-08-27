
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

// Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.Reset Meshes
// (Public, BlueprintCallable, BlueprintEvent)

void APowerBar_Tiered_NoFrame_C::Reset_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.Reset Meshes");

	APowerBar_Tiered_NoFrame_C_Reset_Meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.Set Ticks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ticks                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBar_Tiered_NoFrame_C::Set_Ticks(int Ticks)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.Set Ticks");

	APowerBar_Tiered_NoFrame_C_Set_Ticks_Params params;
	params.Ticks = Ticks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerBar_Tiered_NoFrame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.UserConstructionScript");

	APowerBar_Tiered_NoFrame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerBar_Tiered_NoFrame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.ReceiveBeginPlay");

	APowerBar_Tiered_NoFrame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.Set View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBar_Tiered_NoFrame_C::Set_View(float Alpha, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.Set View");

	APowerBar_Tiered_NoFrame_C_Set_View_Params params;
	params.Alpha = Alpha;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.ExecuteUbergraph_PowerBar_Tiered_NoFrame
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APowerBar_Tiered_NoFrame_C::ExecuteUbergraph_PowerBar_Tiered_NoFrame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C.ExecuteUbergraph_PowerBar_Tiered_NoFrame");

	APowerBar_Tiered_NoFrame_C_ExecuteUbergraph_PowerBar_Tiered_NoFrame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
