
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

// Function FloodLight_BP.FloodLight_BP_C.OnRep_REP_LightIsOn
// (BlueprintCallable, BlueprintEvent)

void AFloodLight_BP_C::OnRep_REP_LightIsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.OnRep_REP_LightIsOn");

	AFloodLight_BP_C_OnRep_REP_LightIsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.UpdateUseContext
// (Public, BlueprintCallable, BlueprintEvent)

void AFloodLight_BP_C::UpdateUseContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.UpdateUseContext");

	AFloodLight_BP_C_UpdateUseContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.TurnLightOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFloodLight_BP_C::TurnLightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.TurnLightOff");

	AFloodLight_BP_C_TurnLightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.TurnLightOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFloodLight_BP_C::TurnLightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.TurnLightOn");

	AFloodLight_BP_C_TurnLightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AFloodLight_BP_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.GetBodySlotLegacy");

	AFloodLight_BP_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FloodLight_BP.FloodLight_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFloodLight_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.UserConstructionScript");

	AFloodLight_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AFloodLight_BP_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AFloodLight_BP_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFloodLight_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.ReceiveTick");

	AFloodLight_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFloodLight_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.ReceiveBeginPlay");

	AFloodLight_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFloodLight_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.ReceiveEndPlay");

	AFloodLight_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFloodLight_BP_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.PlacedInSlot");

	AFloodLight_BP_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFloodLight_BP_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.ReleasedFromSlot");

	AFloodLight_BP_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.OnAvailablePowerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAvailablePower              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFloodLight_BP_C::OnAvailablePowerChanged(bool HasAvailablePower)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.OnAvailablePowerChanged");

	AFloodLight_BP_C_OnAvailablePowerChanged_Params params;
	params.HasAvailablePower = HasAvailablePower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFloodLight_BP_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.DroppedInWorld");

	AFloodLight_BP_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AFloodLight_BP_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.PickedUpFromWorld");

	AFloodLight_BP_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FloodLight_BP.FloodLight_BP_C.ReceiveHit
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

void AFloodLight_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.ReceiveHit");

	AFloodLight_BP_C_ReceiveHit_Params params;
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


// Function FloodLight_BP.FloodLight_BP_C.ExecuteUbergraph_FloodLight_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFloodLight_BP_C::ExecuteUbergraph_FloodLight_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FloodLight_BP.FloodLight_BP_C.ExecuteUbergraph_FloodLight_BP");

	AFloodLight_BP_C_ExecuteUbergraph_FloodLight_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
