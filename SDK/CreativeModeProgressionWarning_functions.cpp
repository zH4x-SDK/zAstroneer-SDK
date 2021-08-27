
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

// Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.FadeInCreativeWarning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimDuration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeModeProgressionWarning_C::FadeInCreativeWarning(float* AnimDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.FadeInCreativeWarning");

	UCreativeModeProgressionWarning_C_FadeInCreativeWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimDuration != nullptr)
		*AnimDuration = params.AnimDuration;
}


// Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.FadeOutCreativeWarning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimDuration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeModeProgressionWarning_C::FadeOutCreativeWarning(float* AnimDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.FadeOutCreativeWarning");

	UCreativeModeProgressionWarning_C_FadeOutCreativeWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimDuration != nullptr)
		*AnimDuration = params.AnimDuration;
}


// Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UCreativeModeProgressionWarning_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.SetupStylingData");

	UCreativeModeProgressionWarning_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeModeProgressionWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.Construct");

	UCreativeModeProgressionWarning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.OnAchievementProgressionDisabledChanged
// (BlueprintCallable, BlueprintEvent)

void UCreativeModeProgressionWarning_C::OnAchievementProgressionDisabledChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.OnAchievementProgressionDisabledChanged");

	UCreativeModeProgressionWarning_C_OnAchievementProgressionDisabledChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeModeProgressionWarning_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.Destruct");

	UCreativeModeProgressionWarning_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.ExecuteUbergraph_CreativeModeProgressionWarning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeProgressionWarning_C::ExecuteUbergraph_CreativeModeProgressionWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeModeProgressionWarning.CreativeModeProgressionWarning_C.ExecuteUbergraph_CreativeModeProgressionWarning");

	UCreativeModeProgressionWarning_C_ExecuteUbergraph_CreativeModeProgressionWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
