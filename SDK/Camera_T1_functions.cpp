
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

// Function Camera_T1.Camera_T1_C.SetFlashLightEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACamera_T1_C::SetFlashLightEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.SetFlashLightEnabled");

	ACamera_T1_C_SetFlashLightEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.SetCountdownLightEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACamera_T1_C::SetCountdownLightEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.SetCountdownLightEnabled");

	ACamera_T1_C_SetCountdownLightEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ACamera_T1_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.GetBodySlotLegacy");

	ACamera_T1_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Camera_T1.Camera_T1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACamera_T1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.UserConstructionScript");

	ACamera_T1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ACamera_T1_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	ACamera_T1_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.PictureTakenFXDelay
// (BlueprintCallable, BlueprintEvent)

void ACamera_T1_C::PictureTakenFXDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.PictureTakenFXDelay");

	ACamera_T1_C_PictureTakenFXDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.PictureCountdownPing
// (BlueprintCallable, BlueprintEvent)

void ACamera_T1_C::PictureCountdownPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.PictureCountdownPing");

	ACamera_T1_C_PictureCountdownPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.PictureTakenFXInstant
// (BlueprintCallable, BlueprintEvent)

void ACamera_T1_C::PictureTakenFXInstant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.PictureTakenFXInstant");

	ACamera_T1_C_PictureTakenFXInstant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ACamera_T1_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.PickedUpFromWorld");

	ACamera_T1_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACamera_T1_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.DroppedInWorld");

	ACamera_T1_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.ReceiveHit
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

void ACamera_T1_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.ReceiveHit");

	ACamera_T1_C_ReceiveHit_Params params;
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


// Function Camera_T1.Camera_T1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACamera_T1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.ReceiveBeginPlay");

	ACamera_T1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.MULTI_PlayCountdownSounds
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACamera_T1_C::MULTI_PlayCountdownSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.MULTI_PlayCountdownSounds");

	ACamera_T1_C_MULTI_PlayCountdownSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Camera_T1.Camera_T1_C.ExecuteUbergraph_Camera_T1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACamera_T1_C::ExecuteUbergraph_Camera_T1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Camera_T1.Camera_T1_C.ExecuteUbergraph_Camera_T1");

	ACamera_T1_C_ExecuteUbergraph_Camera_T1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
