
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

// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.UpdateWithNewColorArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>    InColorArray                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInterface*> ButtonMaterialArray            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeTerrainColorPicker_C::UpdateWithNewColorArray(TArray<struct FLinearColor>* InColorArray, TArray<class UMaterialInterface*>* ButtonMaterialArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.UpdateWithNewColorArray");

	UCreativeTerrainColorPicker_C_UpdateWithNewColorArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InColorArray != nullptr)
		*InColorArray = params.InColorArray;
	if (ButtonMaterialArray != nullptr)
		*ButtonMaterialArray = params.ButtonMaterialArray;
}


// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeTerrainColorPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.Construct");

	UCreativeTerrainColorPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClickedColorIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeTerrainColorPicker_C::OnColorButtonPressed(int ClickedColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorButtonPressed");

	UCreativeTerrainColorPicker_C_OnColorButtonPressed_Params params;
	params.ClickedColorIndex = ClickedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.ExecuteUbergraph_CreativeTerrainColorPicker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeTerrainColorPicker_C::ExecuteUbergraph_CreativeTerrainColorPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.ExecuteUbergraph_CreativeTerrainColorPicker");

	UCreativeTerrainColorPicker_C_ExecuteUbergraph_CreativeTerrainColorPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorSelectedWithType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SelectedColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            SelectedColorIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPaintIndexType                PaintType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeTerrainColorPicker_C::OnColorSelectedWithType__DelegateSignature(const struct FLinearColor& SelectedColor, int SelectedColorIndex, EPaintIndexType PaintType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorSelectedWithType__DelegateSignature");

	UCreativeTerrainColorPicker_C_OnColorSelectedWithType__DelegateSignature_Params params;
	params.SelectedColor = SelectedColor;
	params.SelectedColorIndex = SelectedColorIndex;
	params.PaintType = PaintType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SelectedColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            SelectedColorIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeTerrainColorPicker_C::OnColorSelected__DelegateSignature(const struct FLinearColor& SelectedColor, int SelectedColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeTerrainColorPicker.CreativeTerrainColorPicker_C.OnColorSelected__DelegateSignature");

	UCreativeTerrainColorPicker_C_OnColorSelected__DelegateSignature_Params params;
	params.SelectedColor = SelectedColor;
	params.SelectedColorIndex = SelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
