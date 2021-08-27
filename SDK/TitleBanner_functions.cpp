
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

// Function TitleBanner.TitleBanner_C.ShowMOTD
// (Public, BlueprintCallable, BlueprintEvent)

void UTitleBanner_C::ShowMOTD()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleBanner.TitleBanner_C.ShowMOTD");

	UTitleBanner_C_ShowMOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleBanner.TitleBanner_C.SetupEventBindings
// (Public, BlueprintCallable, BlueprintEvent)

void UTitleBanner_C::SetupEventBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleBanner.TitleBanner_C.SetupEventBindings");

	UTitleBanner_C_SetupEventBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleBanner.TitleBanner_C.ClearEventBindings
// (Public, BlueprintCallable, BlueprintEvent)

void UTitleBanner_C::ClearEventBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleBanner.TitleBanner_C.ClearEventBindings");

	UTitleBanner_C_ClearEventBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleBanner.TitleBanner_C.FadeInMOTD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimDuration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTitleBanner_C::FadeInMOTD(float* AnimDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleBanner.TitleBanner_C.FadeInMOTD");

	UTitleBanner_C_FadeInMOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimDuration != nullptr)
		*AnimDuration = params.AnimDuration;
}


// Function TitleBanner.TitleBanner_C.FadeOutMOTD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimDuration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTitleBanner_C::FadeOutMOTD(float* AnimDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleBanner.TitleBanner_C.FadeOutMOTD");

	UTitleBanner_C_FadeOutMOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimDuration != nullptr)
		*AnimDuration = params.AnimDuration;
}


// Function TitleBanner.TitleBanner_C.UpdateMOTD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMessageOfTheDay*        MOTD                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitleBanner_C::UpdateMOTD(class UMessageOfTheDay* MOTD)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleBanner.TitleBanner_C.UpdateMOTD");

	UTitleBanner_C_UpdateMOTD_Params params;
	params.MOTD = MOTD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TitleBanner.TitleBanner_C.ExecuteUbergraph_TitleBanner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTitleBanner_C::ExecuteUbergraph_TitleBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TitleBanner.TitleBanner_C.ExecuteUbergraph_TitleBanner");

	UTitleBanner_C_ExecuteUbergraph_TitleBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
