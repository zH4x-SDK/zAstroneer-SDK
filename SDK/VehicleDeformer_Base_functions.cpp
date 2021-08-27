
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

// Function VehicleDeformer_Base.VehicleDeformer_Base_C.CHILD_UpdateSedimentGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentSedimentAvailable       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentSedimentCapacity        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::CHILD_UpdateSedimentGauge(float CurrentSedimentAvailable, float CurrentSedimentCapacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.CHILD_UpdateSedimentGauge");

	AVehicleDeformer_Base_C_CHILD_UpdateSedimentGauge_Params params;
	params.CurrentSedimentAvailable = CurrentSedimentAvailable;
	params.CurrentSedimentCapacity = CurrentSedimentCapacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetStencilValueFromPlayerIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutputPin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::GetStencilValueFromPlayerIndex(int InputPin, int* OutputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetStencilValueFromPlayerIndex");

	AVehicleDeformer_Base_C_GetStencilValueFromPlayerIndex_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputPin != nullptr)
		*OutputPin = params.OutputPin;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateGroundPlaneIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SlopeDegree                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::UpdateGroundPlaneIndicator(float SlopeDegree)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateGroundPlaneIndicator");

	AVehicleDeformer_Base_C_UpdateGroundPlaneIndicator_Params params;
	params.SlopeDegree = SlopeDegree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetSubtractParticleEffect
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HardnessDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* AVehicleDeformer_Base_C::GetSubtractParticleEffect(int HardnessDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetSubtractParticleEffect");

	AVehicleDeformer_Base_C_GetSubtractParticleEffect_Params params;
	params.HardnessDelta = HardnessDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetCursorTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TerrainHardness                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::GetCursorTexture(int TerrainHardness, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetCursorTexture");

	AVehicleDeformer_Base_C_GetCursorTexture_Params params;
	params.TerrainHardness = TerrainHardness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.CHILD_UpdateToolVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void AVehicleDeformer_Base_C::CHILD_UpdateToolVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.CHILD_UpdateToolVisualState");

	AVehicleDeformer_Base_C_CHILD_UpdateToolVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleToolIsActiveChanged
// (BlueprintCallable, BlueprintEvent)

void AVehicleDeformer_Base_C::HandleToolIsActiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleToolIsActiveChanged");

	AVehicleDeformer_Base_C_HandleToolIsActiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AVehicleDeformer_Base_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.GetBodySlotLegacy");

	AVehicleDeformer_Base_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVehicleDeformer_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.UserConstructionScript");

	AVehicleDeformer_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehicleDeformer_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveBeginPlay");

	AVehicleDeformer_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AVehicleDeformer_Base_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.PickedUpFromWorld");

	AVehicleDeformer_Base_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVehicleDeformer_Base_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.DroppedInWorld");

	AVehicleDeformer_Base_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_0_OnResourceSlotFull__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass*                  Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::BndEvt__ResourceCache_K2Node_ComponentBoundEvent_0_OnResourceSlotFull__DelegateSignature(class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.BndEvt__ResourceCache_K2Node_ComponentBoundEvent_0_OnResourceSlotFull__DelegateSignature");

	AVehicleDeformer_Base_C_BndEvt__ResourceCache_K2Node_ComponentBoundEvent_0_OnResourceSlotFull__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveEndPlay");

	AVehicleDeformer_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleToolActivationChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::HandleToolActivationChanged(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleToolActivationChanged");

	AVehicleDeformer_Base_C_HandleToolActivationChanged_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.PerformAuxUseOverride
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>       InputEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::PerformAuxUseOverride(TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.PerformAuxUseOverride");

	AVehicleDeformer_Base_C_PerformAuxUseOverride_Params params;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleDrillCollectedExcessTerrain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::HandleDrillCollectedExcessTerrain(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleDrillCollectedExcessTerrain");

	AVehicleDeformer_Base_C_HandleDrillCollectedExcessTerrain_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdatePlayerAccentIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            PlayerAccentIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::UpdatePlayerAccentIndex(int PlayerAccentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdatePlayerAccentIndex");

	AVehicleDeformer_Base_C_UpdatePlayerAccentIndex_Params params;
	params.PlayerAccentIndex = PlayerAccentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleTerrainBeingDrilledAudioChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AudioEventIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::HandleTerrainBeingDrilledAudioChanged(int AudioEventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleTerrainBeingDrilledAudioChanged");

	AVehicleDeformer_Base_C_HandleTerrainBeingDrilledAudioChanged_Params params;
	params.AudioEventIndex = AudioEventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleDrillMotorAudioChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AudioEventIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::HandleDrillMotorAudioChanged(int AudioEventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.HandleDrillMotorAudioChanged");

	AVehicleDeformer_Base_C_HandleDrillMotorAudioChanged_Params params;
	params.AudioEventIndex = AudioEventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHardness                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AVehicleDeformer_Base_C::CustomEvent_1(float NewHardness, const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.CustomEvent_1");

	AVehicleDeformer_Base_C_CustomEvent_1_Params params;
	params.NewHardness = NewHardness;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.PlayDrillStartWithInsufficientPowerEffect
// (Event, Protected, BlueprintEvent)

void AVehicleDeformer_Base_C::PlayDrillStartWithInsufficientPowerEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.PlayDrillStartWithInsufficientPowerEffect");

	AVehicleDeformer_Base_C_PlayDrillStartWithInsufficientPowerEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveHit
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

void AVehicleDeformer_Base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.ReceiveHit");

	AVehicleDeformer_Base_C_ReceiveHit_Params params;
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


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateSlopeIndicator
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          SlopeDegree                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::UpdateSlopeIndicator(float SlopeDegree)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateSlopeIndicator");

	AVehicleDeformer_Base_C_UpdateSlopeIndicator_Params params;
	params.SlopeDegree = SlopeDegree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateSedimentGauge
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          CurrentSedimentAvailalbe       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentSedimentCapacity        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::UpdateSedimentGauge(float CurrentSedimentAvailalbe, float CurrentSedimentCapacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.UpdateSedimentGauge");

	AVehicleDeformer_Base_C_UpdateSedimentGauge_Params params;
	params.CurrentSedimentAvailalbe = CurrentSedimentAvailalbe;
	params.CurrentSedimentCapacity = CurrentSedimentCapacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleDeformer_Base.VehicleDeformer_Base_C.ExecuteUbergraph_VehicleDeformer_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVehicleDeformer_Base_C::ExecuteUbergraph_VehicleDeformer_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDeformer_Base.VehicleDeformer_Base_C.ExecuteUbergraph_VehicleDeformer_Base");

	AVehicleDeformer_Base_C_ExecuteUbergraph_VehicleDeformer_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
