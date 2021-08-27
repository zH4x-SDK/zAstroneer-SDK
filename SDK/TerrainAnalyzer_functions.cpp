
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

// Function TerrainAnalyzer.TerrainAnalyzer_C.UpdateMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATerrainAnalyzer_C::UpdateMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.UpdateMaterials");

	ATerrainAnalyzer_C_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.SetAugmentEquippedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainAnalyzer_C::SetAugmentEquippedState(bool IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.SetAugmentEquippedState");

	ATerrainAnalyzer_C_SetAugmentEquippedState_Params params;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.SetAugmentActiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainAnalyzer_C::SetAugmentActiveState(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.SetAugmentActiveState");

	ATerrainAnalyzer_C_SetAugmentActiveState_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.SetAnalyzerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETerrainAnalyzerState> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainAnalyzer_C::SetAnalyzerState(TEnumAsByte<ETerrainAnalyzerState> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.SetAnalyzerState");

	ATerrainAnalyzer_C_SetAnalyzerState_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.OnAnalysisContinued
// (Public, BlueprintCallable, BlueprintEvent)

void ATerrainAnalyzer_C::OnAnalysisContinued()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.OnAnalysisContinued");

	ATerrainAnalyzer_C_OnAnalysisContinued_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.OnAnalysisPaused
// (Public, BlueprintCallable, BlueprintEvent)

void ATerrainAnalyzer_C::OnAnalysisPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.OnAnalysisPaused");

	ATerrainAnalyzer_C_OnAnalysisPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATerrainAnalyzer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.UserConstructionScript");

	ATerrainAnalyzer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ATerrainAnalyzer_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ATerrainAnalyzer_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATerrainAnalyzer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.ReceiveBeginPlay");

	ATerrainAnalyzer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.SetView
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATerrainAnalyzer_C::SetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.SetView");

	ATerrainAnalyzer_C_SetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.ReceiveHit
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

void ATerrainAnalyzer_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.ReceiveHit");

	ATerrainAnalyzer_C_ReceiveHit_Params params;
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


// Function TerrainAnalyzer.TerrainAnalyzer_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATerrainAnalyzer_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.DroppedInWorld");

	ATerrainAnalyzer_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainAnalyzer_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.PlacedInSlot");

	ATerrainAnalyzer_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainAnalyzer_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.ReleasedFromSlot");

	ATerrainAnalyzer_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ATerrainAnalyzer_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.PickedUpFromWorld");

	ATerrainAnalyzer_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ATerrainAnalyzer_C::BndEvt__Augment_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void ATerrainAnalyzer_C::BndEvt__Augment_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature
// (BlueprintEvent)

void ATerrainAnalyzer_C::BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature");

	ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_2_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature
// (BlueprintEvent)

void ATerrainAnalyzer_C::BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature");

	ATerrainAnalyzer_C_BndEvt__Augment_K2Node_ComponentBoundEvent_3_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainAnalyzer.TerrainAnalyzer_C.ExecuteUbergraph_TerrainAnalyzer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainAnalyzer_C::ExecuteUbergraph_TerrainAnalyzer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainAnalyzer.TerrainAnalyzer_C.ExecuteUbergraph_TerrainAnalyzer");

	ATerrainAnalyzer_C_ExecuteUbergraph_TerrainAnalyzer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
