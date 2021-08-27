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

// Function GameMenuRoot.GameMenuRoot_C.UpdateVisibilityOfSaveFailedWarning
struct UGameMenuRoot_C_UpdateVisibilityOfSaveFailedWarning_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.HideSaveFailedWarning
struct UGameMenuRoot_C_HideSaveFailedWarning_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.GetAchievementProgressionWarningWidget
struct UGameMenuRoot_C_GetAchievementProgressionWarningWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetMOTDWidget
struct UGameMenuRoot_C_GetMOTDWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetVerticalPaddingForContentSubPaneRegion
struct UGameMenuRoot_C_GetVerticalPaddingForContentSubPaneRegion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetLowerBoundOfMenu
struct UGameMenuRoot_C_GetLowerBoundOfMenu_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetOriginOfActiveSubPaneContentsRegion
struct UGameMenuRoot_C_GetOriginOfActiveSubPaneContentsRegion_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetPopoutWrapper
struct UGameMenuRoot_C_GetPopoutWrapper_Params
{
	class UCanvasPanel*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.LayoutWidget
struct UGameMenuRoot_C_LayoutWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetMaxHeightOfContentSubPaneRegion
struct UGameMenuRoot_C_GetMaxHeightOfContentSubPaneRegion_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetDimsionsExcludingContentsSubPaneRegion
struct UGameMenuRoot_C_GetDimsionsExcludingContentsSubPaneRegion_Params
{
	struct FVector2D                                   Dimensions;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetMaxMenuHeight
struct UGameMenuRoot_C_GetMaxMenuHeight_Params
{
	float                                              MaxMenuHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetBoundedSizeOfMenu
struct UGameMenuRoot_C_GetBoundedSizeOfMenu_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetMenuContentsWrapper
struct UGameMenuRoot_C_GetMenuContentsWrapper_Params
{
	class UVerticalBox*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetTabBarWidget
struct UGameMenuRoot_C_GetTabBarWidget_Params
{
	class UAstroGameMenuTabBarWidget*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetCurrentSubPane
struct UGameMenuRoot_C_GetCurrentSubPane_Params
{
	class UAstroGameMenuSubPaneWidget*                 CurrentSubPane;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.GetSubPaneWrapper
struct UGameMenuRoot_C_GetSubPaneWrapper_Params
{
	class UBorder*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.Construct
struct UGameMenuRoot_C_Construct_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.SetupStylingData
struct UGameMenuRoot_C_SetupStylingData_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.HandleMenuOpened
struct UGameMenuRoot_C_HandleMenuOpened_Params
{
	EAstroGameMenuContext                              GameMenuContext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.HandleMenuClosed
struct UGameMenuRoot_C_HandleMenuClosed_Params
{
	EAstroGameMenuContext                              GameMenuContext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameMenuRoot.GameMenuRoot_C.OnScrollbarDragStarted
struct UGameMenuRoot_C_OnScrollbarDragStarted_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.OnScrollbarDragEnded
struct UGameMenuRoot_C_OnScrollbarDragEnded_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.DisplayMOTD
struct UGameMenuRoot_C_DisplayMOTD_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.Destruct
struct UGameMenuRoot_C_Destruct_Params
{
};

// Function GameMenuRoot.GameMenuRoot_C.ExecuteUbergraph_GameMenuRoot
struct UGameMenuRoot_C_ExecuteUbergraph_GameMenuRoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
