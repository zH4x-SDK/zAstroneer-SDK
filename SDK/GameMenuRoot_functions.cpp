
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

// Function GameMenuRoot.GameMenuRoot_C.UpdateVisibilityOfSaveFailedWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuRoot_C::UpdateVisibilityOfSaveFailedWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.UpdateVisibilityOfSaveFailedWarning");

	UGameMenuRoot_C_UpdateVisibilityOfSaveFailedWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.HideSaveFailedWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UGameMenuRoot_C::HideSaveFailedWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.HideSaveFailedWarning");

	UGameMenuRoot_C_HideSaveFailedWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.GetAchievementProgressionWarningWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UGameMenuRoot_C::GetAchievementProgressionWarningWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetAchievementProgressionWarningWidget");

	UGameMenuRoot_C_GetAchievementProgressionWarningWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetMOTDWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UGameMenuRoot_C::GetMOTDWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetMOTDWidget");

	UGameMenuRoot_C_GetMOTDWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetVerticalPaddingForContentSubPaneRegion
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameMenuRoot_C::GetVerticalPaddingForContentSubPaneRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetVerticalPaddingForContentSubPaneRegion");

	UGameMenuRoot_C_GetVerticalPaddingForContentSubPaneRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetLowerBoundOfMenu
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameMenuRoot_C::GetLowerBoundOfMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetLowerBoundOfMenu");

	UGameMenuRoot_C_GetLowerBoundOfMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetOriginOfActiveSubPaneContentsRegion
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuRoot_C::GetOriginOfActiveSubPaneContentsRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetOriginOfActiveSubPaneContentsRegion");

	UGameMenuRoot_C_GetOriginOfActiveSubPaneContentsRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetPopoutWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCanvasPanel* UGameMenuRoot_C::GetPopoutWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetPopoutWrapper");

	UGameMenuRoot_C_GetPopoutWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuRoot_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.LayoutWidget");

	UGameMenuRoot_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetMaxHeightOfContentSubPaneRegion
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameMenuRoot_C::GetMaxHeightOfContentSubPaneRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetMaxHeightOfContentSubPaneRegion");

	UGameMenuRoot_C_GetMaxHeightOfContentSubPaneRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetDimsionsExcludingContentsSubPaneRegion
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Dimensions                     (Parm, OutParm, IsPlainOldData)

void UGameMenuRoot_C::GetDimsionsExcludingContentsSubPaneRegion(struct FVector2D* Dimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetDimsionsExcludingContentsSubPaneRegion");

	UGameMenuRoot_C_GetDimsionsExcludingContentsSubPaneRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dimensions != nullptr)
		*Dimensions = params.Dimensions;
}


// Function GameMenuRoot.GameMenuRoot_C.GetMaxMenuHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          MaxMenuHeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuRoot_C::GetMaxMenuHeight(float* MaxMenuHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetMaxMenuHeight");

	UGameMenuRoot_C_GetMaxMenuHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxMenuHeight != nullptr)
		*MaxMenuHeight = params.MaxMenuHeight;
}


// Function GameMenuRoot.GameMenuRoot_C.GetBoundedSizeOfMenu
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UGameMenuRoot_C::GetBoundedSizeOfMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetBoundedSizeOfMenu");

	UGameMenuRoot_C_GetBoundedSizeOfMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetMenuContentsWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVerticalBox* UGameMenuRoot_C::GetMenuContentsWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetMenuContentsWrapper");

	UGameMenuRoot_C_GetMenuContentsWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetTabBarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuTabBarWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAstroGameMenuTabBarWidget* UGameMenuRoot_C::GetTabBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetTabBarWidget");

	UGameMenuRoot_C_GetTabBarWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.GetCurrentSubPane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAstroGameMenuSubPaneWidget* CurrentSubPane                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuRoot_C::GetCurrentSubPane(class UAstroGameMenuSubPaneWidget** CurrentSubPane)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetCurrentSubPane");

	UGameMenuRoot_C_GetCurrentSubPane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSubPane != nullptr)
		*CurrentSubPane = params.CurrentSubPane;
}


// Function GameMenuRoot.GameMenuRoot_C.GetSubPaneWrapper
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBorder* UGameMenuRoot_C::GetSubPaneWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.GetSubPaneWrapper");

	UGameMenuRoot_C_GetSubPaneWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuRoot.GameMenuRoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuRoot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.Construct");

	UGameMenuRoot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.SetupStylingData
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGameMenuRoot_C::SetupStylingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.SetupStylingData");

	UGameMenuRoot_C_SetupStylingData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.HandleMenuOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAstroGameMenuContext          GameMenuContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuRoot_C::HandleMenuOpened(EAstroGameMenuContext GameMenuContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.HandleMenuOpened");

	UGameMenuRoot_C_HandleMenuOpened_Params params;
	params.GameMenuContext = GameMenuContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.HandleMenuClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAstroGameMenuContext          GameMenuContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuRoot_C::HandleMenuClosed(EAstroGameMenuContext GameMenuContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.HandleMenuClosed");

	UGameMenuRoot_C_HandleMenuClosed_Params params;
	params.GameMenuContext = GameMenuContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.OnScrollbarDragStarted
// (BlueprintCallable, BlueprintEvent)

void UGameMenuRoot_C::OnScrollbarDragStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.OnScrollbarDragStarted");

	UGameMenuRoot_C_OnScrollbarDragStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.OnScrollbarDragEnded
// (BlueprintCallable, BlueprintEvent)

void UGameMenuRoot_C::OnScrollbarDragEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.OnScrollbarDragEnded");

	UGameMenuRoot_C_OnScrollbarDragEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.DisplayMOTD
// (BlueprintCallable, BlueprintEvent)

void UGameMenuRoot_C::DisplayMOTD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.DisplayMOTD");

	UGameMenuRoot_C_DisplayMOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuRoot_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.Destruct");

	UGameMenuRoot_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuRoot.GameMenuRoot_C.ExecuteUbergraph_GameMenuRoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuRoot_C::ExecuteUbergraph_GameMenuRoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuRoot.GameMenuRoot_C.ExecuteUbergraph_GameMenuRoot");

	UGameMenuRoot_C_ExecuteUbergraph_GameMenuRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
