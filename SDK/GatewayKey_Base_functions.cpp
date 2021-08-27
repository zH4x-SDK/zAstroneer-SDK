
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

// Function GatewayKey_Base.GatewayKey_Base_C.OnRep_WantsPhasedIn
// (BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::OnRep_WantsPhasedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.OnRep_WantsPhasedIn");

	AGatewayKey_Base_C_OnRep_WantsPhasedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Initiate Build-out Animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DestroyWhenDone                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayKey_Base_C::Initiate_Build_out_Animation(bool DestroyWhenDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Initiate Build-out Animation");

	AGatewayKey_Base_C_Initiate_Build_out_Animation_Params params;
	params.DestroyWhenDone = DestroyWhenDone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Initiate Build-in Animation
// (Public, BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::Initiate_Build_in_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Initiate Build-in Animation");

	AGatewayKey_Base_C_Initiate_Build_in_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Setup Dynamic Materials
// (Public, BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::Setup_Dynamic_Materials()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Setup Dynamic Materials");

	AGatewayKey_Base_C_Setup_Dynamic_Materials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Update Material Animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Printer_Progress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Glyph_Opacity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayKey_Base_C::Update_Material_Animation(float Printer_Progress, float Glyph_Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Update Material Animation");

	AGatewayKey_Base_C_Update_Material_Animation_Params params;
	params.Printer_Progress = Printer_Progress;
	params.Glyph_Opacity = Glyph_Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* AGatewayKey_Base_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.GetBodySlotLegacy");

	AGatewayKey_Base_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GatewayKey_Base.GatewayKey_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.UserConstructionScript");

	AGatewayKey_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Build-in Timeline__FinishedFunc
// (BlueprintEvent)

void AGatewayKey_Base_C::Build_in_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Build-in Timeline__FinishedFunc");

	AGatewayKey_Base_C_Build_in_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Build-in Timeline__UpdateFunc
// (BlueprintEvent)

void AGatewayKey_Base_C::Build_in_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Build-in Timeline__UpdateFunc");

	AGatewayKey_Base_C_Build_in_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Build-out Timeline__FinishedFunc
// (BlueprintEvent)

void AGatewayKey_Base_C::Build_out_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Build-out Timeline__FinishedFunc");

	AGatewayKey_Base_C_Build_out_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.Build-out Timeline__UpdateFunc
// (BlueprintEvent)

void AGatewayKey_Base_C::Build_out_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.Build-out Timeline__UpdateFunc");

	AGatewayKey_Base_C_Build_out_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGatewayKey_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.ReceiveBeginPlay");

	AGatewayKey_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.AuthorityPhaseIn
// (BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::AuthorityPhaseIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.AuthorityPhaseIn");

	AGatewayKey_Base_C_AuthorityPhaseIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.AuthorityPhaseOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DestroyWhenDone                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayKey_Base_C::AuthorityPhaseOut(bool DestroyWhenDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.AuthorityPhaseOut");

	AGatewayKey_Base_C_AuthorityPhaseOut_Params params;
	params.DestroyWhenDone = DestroyWhenDone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.ReceiveHit
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

void AGatewayKey_Base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.ReceiveHit");

	AGatewayKey_Base_C_ReceiveHit_Params params;
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


// Function GatewayKey_Base.GatewayKey_Base_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGatewayKey_Base_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.DroppedInWorld");

	AGatewayKey_Base_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void AGatewayKey_Base_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.PickedUpFromWorld");

	AGatewayKey_Base_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.WantsPhasedInChanged
// (BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::WantsPhasedInChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.WantsPhasedInChanged");

	AGatewayKey_Base_C_WantsPhasedInChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.ExecuteUbergraph_GatewayKey_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGatewayKey_Base_C::ExecuteUbergraph_GatewayKey_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.ExecuteUbergraph_GatewayKey_Base");

	AGatewayKey_Base_C_ExecuteUbergraph_GatewayKey_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.OnPhasedOutCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::OnPhasedOutCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.OnPhasedOutCompleted__DelegateSignature");

	AGatewayKey_Base_C_OnPhasedOutCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatewayKey_Base.GatewayKey_Base_C.OnPhasedInCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGatewayKey_Base_C::OnPhasedInCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatewayKey_Base.GatewayKey_Base_C.OnPhasedInCompleted__DelegateSignature");

	AGatewayKey_Base_C_OnPhasedInCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
