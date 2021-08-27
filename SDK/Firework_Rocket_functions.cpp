
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

// Function Firework_Rocket.Firework_Rocket_C.TrackActivatingPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void AFirework_Rocket_C::TrackActivatingPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.TrackActivatingPlayer");

	AFirework_Rocket_C_TrackActivatingPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AFirework_Rocket_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.GetBodySlotLegacy");

	AFirework_Rocket_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Firework_Rocket.Firework_Rocket_C.Set FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFirework_Rocket_C::Set_FX(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.Set FX");

	AFirework_Rocket_C_Set_FX_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFirework_Rocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.UserConstructionScript");

	AFirework_Rocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AFirework_Rocket_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	AFirework_Rocket_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFirework_Rocket_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.DroppedInWorld");

	AFirework_Rocket_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AFirework_Rocket_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.PickedUpFromWorld");

	AFirework_Rocket_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFirework_Rocket_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.ReceiveTick");

	AFirework_Rocket_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFirework_Rocket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.ReceiveBeginPlay");

	AFirework_Rocket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.ReceiveHit
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

void AFirework_Rocket_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.ReceiveHit");

	AFirework_Rocket_C_ReceiveHit_Params params;
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


// Function Firework_Rocket.Firework_Rocket_C.LaunchRocket
// (BlueprintCallable, BlueprintEvent)

void AFirework_Rocket_C::LaunchRocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.LaunchRocket");

	AFirework_Rocket_C_LaunchRocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.MULTI Instant Particles
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AFirework_Rocket_C::MULTI_Instant_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.MULTI Instant Particles");

	AFirework_Rocket_C_MULTI_Instant_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.MULTI__Activate Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AFirework_Rocket_C::MULTI__Activate_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.MULTI__Activate Effects");

	AFirework_Rocket_C_MULTI__Activate_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Firework_Rocket.Firework_Rocket_C.ExecuteUbergraph_Firework_Rocket
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFirework_Rocket_C::ExecuteUbergraph_Firework_Rocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Firework_Rocket.Firework_Rocket_C.ExecuteUbergraph_Firework_Rocket");

	AFirework_Rocket_C_ExecuteUbergraph_Firework_Rocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
