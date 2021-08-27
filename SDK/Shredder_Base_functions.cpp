
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

// Function Shredder_Base.Shredder_Base_C.FixupInvalidShredSlotItems
// (Public, BlueprintCallable, BlueprintEvent)

void AShredder_Base_C::FixupInvalidShredSlotItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.FixupInvalidShredSlotItems");

	AShredder_Base_C_FixupInvalidShredSlotItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.DoesInputSlotHaveAnyItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasItems                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::DoesInputSlotHaveAnyItems(bool* HasItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.DoesInputSlotHaveAnyItems");

	AShredder_Base_C_DoesInputSlotHaveAnyItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasItems != nullptr)
		*HasItems = params.HasItems;
}


// Function Shredder_Base.Shredder_Base_C.IsReadyToShred
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CanShred                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::IsReadyToShred(bool* CanShred)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.IsReadyToShred");

	AShredder_Base_C_IsReadyToShred_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanShred != nullptr)
		*CanShred = params.CanShred;
}


// Function Shredder_Base.Shredder_Base_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AShredder_Base_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.GetBodySlotLegacy");

	AShredder_Base_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Shredder_Base.Shredder_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShredder_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.UserConstructionScript");

	AShredder_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShredder_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.ReceiveBeginPlay");

	AShredder_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.OnItemSetInInputSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::OnItemSetInInputSlot(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.OnItemSetInInputSlot");

	AShredder_Base_C_OnItemSetInInputSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature");

	AShredder_Base_C_BndEvt__ClickableComponent_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_ItemConverterStateChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EItemConverterState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemConverterState            prevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_ItemConverterStateChangedEvent__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_ItemConverterStateChangedEvent__DelegateSignature");

	AShredder_Base_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_ItemConverterStateChangedEvent__DelegateSignature_Params params;
	params.NewState = NewState;
	params.prevState = prevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AShredder_Base_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AShredder_Base_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           HasAvailablePower              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature(bool HasAvailablePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature");

	AShredder_Base_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature_Params params;
	params.HasAvailablePower = HasAvailablePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsAdded__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FActiveItemConversionProgress> newActiveConversions           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AShredder_Base_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsAdded__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsAdded__DelegateSignature");

	AShredder_Base_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsAdded__DelegateSignature_Params params;
	params.newActiveConversions = newActiveConversions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.OnShreddedItemDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::OnShreddedItemDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.OnShreddedItemDestroyed");

	AShredder_Base_C_OnShreddedItemDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.ReceiveEndPlay");

	AShredder_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.ExecuteUbergraph_Shredder_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::ExecuteUbergraph_Shredder_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.ExecuteUbergraph_Shredder_Base");

	AShredder_Base_C_ExecuteUbergraph_Shredder_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.ShredderPowerLevelChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewPowerLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::ShredderPowerLevelChanged__DelegateSignature(float NewPowerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.ShredderPowerLevelChanged__DelegateSignature");

	AShredder_Base_C_ShredderPowerLevelChanged__DelegateSignature_Params params;
	params.NewPowerLevel = NewPowerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shredder_Base.Shredder_Base_C.ShredderStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShredderState>    NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShredder_Base_C::ShredderStateChanged__DelegateSignature(TEnumAsByte<EShredderState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shredder_Base.Shredder_Base_C.ShredderStateChanged__DelegateSignature");

	AShredder_Base_C_ShredderStateChanged__DelegateSignature_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
