
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

// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeEmoteComboSelectionData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameMenuComboBoxOptionData> EmoteComboPopoutData           (Parm, OutParm, ZeroConstructor)

void UAstroBlueprintLibrary_C::STATIC_AstroGameMenuMakeEmoteComboSelectionData(class UObject* __WorldContext, TArray<struct FGameMenuComboBoxOptionData>* EmoteComboPopoutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeEmoteComboSelectionData");

	UAstroBlueprintLibrary_C_AstroGameMenuMakeEmoteComboSelectionData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmoteComboPopoutData != nullptr)
		*EmoteComboPopoutData = params.EmoteComboPopoutData;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeWindowModeComboData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EAstroWindowMode>       SupportedWindowModes           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameMenuComboBoxOptionData> WindowModeDisplayData          (Parm, OutParm, ZeroConstructor)

void UAstroBlueprintLibrary_C::STATIC_AstroGameMenuMakeWindowModeComboData(class UObject* __WorldContext, TArray<EAstroWindowMode>* SupportedWindowModes, TArray<struct FGameMenuComboBoxOptionData>* WindowModeDisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeWindowModeComboData");

	UAstroBlueprintLibrary_C_AstroGameMenuMakeWindowModeComboData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SupportedWindowModes != nullptr)
		*SupportedWindowModes = params.SupportedWindowModes;
	if (WindowModeDisplayData != nullptr)
		*WindowModeDisplayData = params.WindowModeDisplayData;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeResolutionComboData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FIntPoint>       AvailableResolutions           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameMenuComboBoxOptionData> ComboOptions                   (Parm, OutParm, ZeroConstructor)

void UAstroBlueprintLibrary_C::STATIC_AstroGameMenuMakeResolutionComboData(class UObject* __WorldContext, TArray<struct FIntPoint>* AvailableResolutions, TArray<struct FGameMenuComboBoxOptionData>* ComboOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuMakeResolutionComboData");

	UAstroBlueprintLibrary_C_AstroGameMenuMakeResolutionComboData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableResolutions != nullptr)
		*AvailableResolutions = params.AvailableResolutions;
	if (ComboOptions != nullptr)
		*ComboOptions = params.ComboOptions;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuPresentComboBox
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuFocusItemWidget* OwningFocusItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameMenuComboBoxOptionData> ComboOptions                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           DismissOnSelection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAstroGameMenuPopoutWidget* PopoutWidget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_AstroGameMenuPresentComboBox(class UObject* WorldContextObject, class UAstroGameMenuFocusItemWidget* OwningFocusItem, bool DismissOnSelection, class UObject* __WorldContext, TArray<struct FGameMenuComboBoxOptionData>* ComboOptions, class UAstroGameMenuPopoutWidget** PopoutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AstroGameMenuPresentComboBox");

	UAstroBlueprintLibrary_C_AstroGameMenuPresentComboBox_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OwningFocusItem = OwningFocusItem;
	params.DismissOnSelection = DismissOnSelection;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboOptions != nullptr)
		*ComboOptions = params.ComboOptions;
	if (PopoutWidget != nullptr)
		*PopoutWidget = params.PopoutWidget;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.CreateOrbitalDropOrigin
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         OrbitalDropDestination         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OrbitalDropOriginTransform     (Parm, OutParm, IsPlainOldData)
// struct FVector                 OrbitalDropOriginLocation      (Parm, OutParm, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_CreateOrbitalDropOrigin(class USceneComponent* OrbitalDropDestination, class UObject* __WorldContext, struct FTransform* OrbitalDropOriginTransform, struct FVector* OrbitalDropOriginLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.CreateOrbitalDropOrigin");

	UAstroBlueprintLibrary_C_CreateOrbitalDropOrigin_Params params;
	params.OrbitalDropDestination = OrbitalDropDestination;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrbitalDropOriginTransform != nullptr)
		*OrbitalDropOriginTransform = params.OrbitalDropOriginTransform;
	if (OrbitalDropOriginLocation != nullptr)
		*OrbitalDropOriginLocation = params.OrbitalDropOriginLocation;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AnimateStreamingPowerCablePlugGauge
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* GenerationGauge                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ConsumptionGauge               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ConsumptionRatio               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenerationRatio                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SurplusRatio                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_AnimateStreamingPowerCablePlugGauge(class UMaterialInstanceDynamic* GenerationGauge, class UMaterialInstanceDynamic* ConsumptionGauge, float ConsumptionRatio, float GenerationRatio, float SurplusRatio, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.AnimateStreamingPowerCablePlugGauge");

	UAstroBlueprintLibrary_C_AnimateStreamingPowerCablePlugGauge_Params params;
	params.GenerationGauge = GenerationGauge;
	params.ConsumptionGauge = ConsumptionGauge;
	params.ConsumptionRatio = ConsumptionRatio;
	params.GenerationRatio = GenerationRatio;
	params.SurplusRatio = SurplusRatio;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Battery Offset
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPowerComponent*         Battery                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Set_Power_Bar_View_Battery_Offset(class UPowerComponent* Battery, class UChildActorComponent* Bar, float Offset, float Count, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Battery Offset");

	UAstroBlueprintLibrary_C_Set_Power_Bar_View_Battery_Offset_Params params;
	params.Battery = Battery;
	params.Bar = Bar;
	params.Offset = Offset;
	params.Count = Count;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Set_Power_Bar_View(float Alpha, class UChildActorComponent* Bar, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View");

	UAstroBlueprintLibrary_C_Set_Power_Bar_View_Params params;
	params.Alpha = Alpha;
	params.Bar = Bar;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Priority Slot Query
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Priority_Slot_Query(const struct FSlotReference& Slot, class UClickQuery* Query, class UObject* __WorldContext, bool* Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Priority Slot Query");

	UAstroBlueprintLibrary_C_Priority_Slot_Query_Params params;
	params.Slot = Slot;
	params.Query = Query;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Set != nullptr)
		*Set = params.Set;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Source
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPowerComponent*         Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max_Output                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Use_Actual_Load                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Set_Power_Bar_View_Source(class UPowerComponent* Source, class UChildActorComponent* Bar, float Max_Output, bool Use_Actual_Load, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Source");

	UAstroBlueprintLibrary_C_Set_Power_Bar_View_Source_Params params;
	params.Source = Source;
	params.Bar = Bar;
	params.Max_Output = Max_Output;
	params.Use_Actual_Load = Use_Actual_Load;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Battery
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPowerComponent*         Battery                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Set_Power_Bar_View_Battery(class UPowerComponent* Battery, class UChildActorComponent* Bar, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Power Bar View Battery");

	UAstroBlueprintLibrary_C_Set_Power_Bar_View_Battery_Params params;
	params.Battery = Battery;
	params.Bar = Bar;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Item Chassis Pad Power Slot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemPad*                Pad                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlotReference          Slot                           (Parm, OutParm)

void UAstroBlueprintLibrary_C::STATIC_Item_Chassis_Pad_Power_Slot(class UItemPad* Pad, class UObject* __WorldContext, struct FSlotReference* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Item Chassis Pad Power Slot");

	UAstroBlueprintLibrary_C_Item_Chassis_Pad_Power_Slot_Params params;
	params.Pad = Pad;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Crane Rig
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Head_Component                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Skinned_Component              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 V                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 A1                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              B                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bPickA                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Set_Crane_Rig(class UPrimitiveComponent* Head_Component, class USkeletalMeshComponent* Skinned_Component, const struct FVector& V, const struct FVector& A1, bool bPickA, class AActor* Actor, class UObject* __WorldContext, struct FTransform* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Crane Rig");

	UAstroBlueprintLibrary_C_Set_Crane_Rig_Params params;
	params.Head_Component = Head_Component;
	params.Skinned_Component = Skinned_Component;
	params.V = V;
	params.A1 = A1;
	params.bPickA = bPickA;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (B != nullptr)
		*B = params.B;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Get Play Widget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayWidgetInstance_C*   Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Get_Play_Widget(class UObject* __WorldContext, class UPlayWidgetInstance_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Get Play Widget");

	UAstroBlueprintLibrary_C_Get_Play_Widget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Chassis Power Slot Click Result
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemPad*                Pad                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Set_Chassis_Power_Slot_Click_Result(class UClickQuery* Query, class UItemPad* Pad, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Chassis Power Slot Click Result");

	UAstroBlueprintLibrary_C_Set_Chassis_Power_Slot_Click_Result_Params params;
	params.Query = Query;
	params.Pad = Pad;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Click Camera Target
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_Set_Click_Camera_Target(bool Target, class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.Set Click Camera Target");

	UAstroBlueprintLibrary_C_Set_Click_Camera_Target_Params params;
	params.Target = Target;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.DrawCameraDebugLine
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAstroBlueprintLibrary_C::STATIC_DrawCameraDebugLine(const struct FVector& Start, const struct FVector& End, float Size, const struct FLinearColor& Color, class UObject* Object, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroBlueprintLibrary.AstroBlueprintLibrary_C.DrawCameraDebugLine");

	UAstroBlueprintLibrary_C_DrawCameraDebugLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Size = Size;
	params.Color = Color;
	params.Object = Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
