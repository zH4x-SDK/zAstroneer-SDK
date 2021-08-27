
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

// Function Smelter_Large.Smelter_Large_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void ASmelter_Large_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.UpdateAnimationState");

	ASmelter_Large_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void ASmelter_Large_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.UpdateUseContext");

	ASmelter_Large_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ASmelter_Large_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.GetBodySlotLegacy");

	ASmelter_Large_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Smelter_Large.Smelter_Large_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASmelter_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.UserConstructionScript");

	ASmelter_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASmelter_Large_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ASmelter_Large_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASmelter_Large_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.ReceiveBeginPlay");

	ASmelter_Large_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmelter_Large_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.ReceiveEndPlay");

	ASmelter_Large_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.Multiplay Smelter Finish SFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ASmelter_Large_C::Multiplay_Smelter_Finish_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.Multiplay Smelter Finish SFX");

	ASmelter_Large_C_Multiplay_Smelter_Finish_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASmelter_Large_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.DroppedInWorld");

	ASmelter_Large_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ASmelter_Large_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.PickedUpFromWorld");

	ASmelter_Large_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASmelter_Large_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.ReceiveHit");

	ASmelter_Large_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_OnItemConverterStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EItemConverterState            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemConverterState            prevState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmelter_Large_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_OnItemConverterStateChanged__DelegateSignature(EItemConverterState NewState, EItemConverterState prevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_OnItemConverterStateChanged__DelegateSignature");

	ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_1_OnItemConverterStateChanged__DelegateSignature_Params params;
	params.NewState = NewState;
	params.prevState = prevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_2_OnItemConversionComplete__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          outputItemTypes                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASmelter_Large_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_2_OnItemConversionComplete__DelegateSignature(TArray<class UClass*> outputItemTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_2_OnItemConversionComplete__DelegateSignature");

	ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_2_OnItemConversionComplete__DelegateSignature_Params params;
	params.outputItemTypes = outputItemTypes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ASmelter_Large_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsListChanged__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FActiveItemConversionProgress> newActiveConversions           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASmelter_Large_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsListChanged__DelegateSignature(TArray<struct FActiveItemConversionProgress> newActiveConversions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsListChanged__DelegateSignature");

	ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_OnItemConverterActiveConversionsListChanged__DelegateSignature_Params params;
	params.newActiveConversions = newActiveConversions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmelter_Large_C::BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature");

	ASmelter_Large_C_BndEvt__ItemConverter_K2Node_ComponentBoundEvent_0_EnableSignal__DelegateSignature_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           HasAvailablePower              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmelter_Large_C::BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature(bool HasAvailablePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature");

	ASmelter_Large_C_BndEvt__Power_K2Node_ComponentBoundEvent_0_PowerStateChangeEvent__DelegateSignature_Params params;
	params.HasAvailablePower = HasAvailablePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.ExecuteUbergraph_Smelter_Large
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASmelter_Large_C::ExecuteUbergraph_Smelter_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.ExecuteUbergraph_Smelter_Large");

	ASmelter_Large_C_ExecuteUbergraph_Smelter_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.OnSmeltItemRefined__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASmelter_Large_C::OnSmeltItemRefined__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.OnSmeltItemRefined__DelegateSignature");

	ASmelter_Large_C_OnSmeltItemRefined__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Smelter_Large.Smelter_Large_C.OnSmeltOperationStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASmelter_Large_C::OnSmeltOperationStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Smelter_Large.Smelter_Large_C.OnSmeltOperationStarted__DelegateSignature");

	ASmelter_Large_C_OnSmeltOperationStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
