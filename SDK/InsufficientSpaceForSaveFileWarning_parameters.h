#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.UpdateSaveSizeWarningText
struct UInsufficientSpaceForSaveFileWarning_C_UpdateSaveSizeWarningText_Params
{
	struct FString                                     Filename;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                FileSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.UpdateSaveErrorText
struct UInsufficientSpaceForSaveFileWarning_C_UpdateSaveErrorText_Params
{
	struct FString                                     Filename;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                FileSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESaveGameErrorType                                 SizeError;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.FadeInCreativeWarning
struct UInsufficientSpaceForSaveFileWarning_C_FadeInCreativeWarning_Params
{
	float                                              AnimDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.FadeOutCreativeWarning
struct UInsufficientSpaceForSaveFileWarning_C_FadeOutCreativeWarning_Params
{
	float                                              AnimDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.SetupStylingData
struct UInsufficientSpaceForSaveFileWarning_C_SetupStylingData_Params
{
};

// Function InsufficientSpaceForSaveFileWarning.InsufficientSpaceForSaveFileWarning_C.ExecuteUbergraph_InsufficientSpaceForSaveFileWarning
struct UInsufficientSpaceForSaveFileWarning_C_ExecuteUbergraph_InsufficientSpaceForSaveFileWarning_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
