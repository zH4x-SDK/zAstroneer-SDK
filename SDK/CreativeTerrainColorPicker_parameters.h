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

// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.UpdateWithNewColorArray
struct UCreativeTerrainColorPicker_C_UpdateWithNewColorArray_Params
{
	TArray<struct FLinearColor>                        InColorArray;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UMaterialInterface*>                  ButtonMaterialArray;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.Construct
struct UCreativeTerrainColorPicker_C_Construct_Params
{
};

// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorButtonPressed
struct UCreativeTerrainColorPicker_C_OnColorButtonPressed_Params
{
	int                                                ClickedColorIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.ExecuteUbergraph_CreativeTerrainColorPicker
struct UCreativeTerrainColorPicker_C_ExecuteUbergraph_CreativeTerrainColorPicker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorSelectedWithType__DelegateSignature
struct UCreativeTerrainColorPicker_C_OnColorSelectedWithType__DelegateSignature_Params
{
	struct FLinearColor                                SelectedColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                SelectedColorIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPaintIndexType                                    PaintType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorSelected__DelegateSignature
struct UCreativeTerrainColorPicker_C_OnColorSelected__DelegateSignature_Params
{
	struct FLinearColor                                SelectedColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                SelectedColorIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
