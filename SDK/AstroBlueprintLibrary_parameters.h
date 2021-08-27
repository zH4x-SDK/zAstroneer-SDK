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

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeEmoteComboSelectionData
struct UAstroBlueprintLibrary_C_AstroGameMenuMakeEmoteComboSelectionData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameMenuComboBoxOptionData>         EmoteComboPopoutData;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeWindowModeComboData
struct UAstroBlueprintLibrary_C_AstroGameMenuMakeWindowModeComboData_Params
{
	TArray<EAstroWindowMode>                           SupportedWindowModes;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameMenuComboBoxOptionData>         WindowModeDisplayData;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeResolutionComboData
struct UAstroBlueprintLibrary_C_AstroGameMenuMakeResolutionComboData_Params
{
	TArray<struct FIntPoint>                           AvailableResolutions;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameMenuComboBoxOptionData>         ComboOptions;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuPresentComboBox
struct UAstroBlueprintLibrary_C_AstroGameMenuPresentComboBox_Params
{
	class UObject*                                     WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuFocusItemWidget*               OwningFocusItem;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameMenuComboBoxOptionData>         ComboOptions;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               DismissOnSelection;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAstroGameMenuPopoutWidget*                  PopoutWidget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.CreateOrbitalDropOrigin
struct UAstroBlueprintLibrary_C_CreateOrbitalDropOrigin_Params
{
	class USceneComponent*                             OrbitalDropDestination;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OrbitalDropOriginTransform;                               // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OrbitalDropOriginLocation;                                // (Parm, OutParm, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AnimateStreamingPowerCablePlugGauge
struct UAstroBlueprintLibrary_C_AnimateStreamingPowerCablePlugGauge_Params
{
	class UMaterialInstanceDynamic*                    GenerationGauge;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ConsumptionGauge;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConsumptionRatio;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GenerationRatio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SurplusRatio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Battery Offset
struct UAstroBlueprintLibrary_C_Set_Power_Bar_View_Battery_Offset_Params
{
	class UPowerComponent*                             Battery;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View
struct UAstroBlueprintLibrary_C_Set_Power_Bar_View_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Priority Slot Query
struct UAstroBlueprintLibrary_C_Priority_Slot_Query_Params
{
	struct FSlotReference                              Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Source
struct UAstroBlueprintLibrary_C_Set_Power_Bar_View_Source_Params
{
	class UPowerComponent*                             Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Output;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Actual_Load;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Battery
struct UAstroBlueprintLibrary_C_Set_Power_Bar_View_Battery_Params
{
	class UPowerComponent*                             Battery;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Item Chassis Pad Power Slot
struct UAstroBlueprintLibrary_C_Item_Chassis_Pad_Power_Slot_Params
{
	class UItemPad*                                    Pad;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlotReference                              Slot;                                                     // (Parm, OutParm)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Crane Rig
struct UAstroBlueprintLibrary_C_Set_Crane_Rig_Params
{
	class UPrimitiveComponent*                         Head_Component;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Skinned_Component;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     V;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     A1;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bPickA;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Get Play Widget
struct UAstroBlueprintLibrary_C_Get_Play_Widget_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayWidgetInstance_C*                       Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Chassis Power Slot Click Result
struct UAstroBlueprintLibrary_C_Set_Chassis_Power_Slot_Click_Result_Params
{
	class UClickQuery*                                 Query;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemPad*                                    Pad;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Click Camera Target
struct UAstroBlueprintLibrary_C_Set_Click_Camera_Target_Params
{
	bool                                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.DrawCameraDebugLine
struct UAstroBlueprintLibrary_C_DrawCameraDebugLine_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
