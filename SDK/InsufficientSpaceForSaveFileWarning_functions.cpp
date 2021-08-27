
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

// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.UpdateSaveSizeWarningText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            FileSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInsufficientSpaceForSaveFileWarning_C::UpdateSaveSizeWarningText(const struct FString& Filename, int FileSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.UpdateSaveSizeWarningText");

	UInsufficientSpaceForSaveFileWarning_C_UpdateSaveSizeWarningText_Params params;
	params.Filename = Filename;
	params.FileSize = FileSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.UpdateSaveErrorText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            FileSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESaveGameErrorType             SizeError                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInsufficientSpaceForSaveFileWarning_C::UpdateSaveErrorText(const struct FString& Filename, int FileSize, ESaveGameErrorType SizeError)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.UpdateSaveErrorText");

	UInsufficientSpaceForSaveFileWarning_C_UpdateSaveErrorText_Params params;
	params.Filename = Filename;
	params.FileSize = FileSize;
	params.SizeError = SizeError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.FadeInCreativeWarning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimDuration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInsufficientSpaceForSaveFileWarning_C::FadeInCreativeWarning(float* AnimDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.FadeInCreativeWarning");

	UInsufficientSpaceForSaveFileWarning_C_FadeInCreativeWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimDuration != nullptr)
		*AnimDuration = params.AnimDuration;
}


// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.FadeOutCreativeWarning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimDuration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInsufficientSpaceForSaveFileWarning_C::FadeOutCreativeWarning(float* AnimDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.FadeOutCreativeWarning");

	UInsufficientSpaceForSaveFileWarning_C_FadeOutCreativeWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimDuration != nullptr)
		*AnimDuration = params.AnimDuration;
}


// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UInsufficientSpaceForSaveFileWarning_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.SetupStylingData");

	UInsufficientSpaceForSaveFileWarning_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.ExecuteUbergraph_InsufficientSpaceForSaveFileWarning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInsufficientSpaceForSaveFileWarning_C::ExecuteUbergraph_InsufficientSpaceForSaveFileWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.ExecuteUbergraph_InsufficientSpaceForSaveFileWarning");

	UInsufficientSpaceForSaveFileWarning_C_ExecuteUbergraph_InsufficientSpaceForSaveFileWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
