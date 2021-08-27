
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

// Function hazard_caveworm_01.hazard_caveworm_01_C.HandleOnDeformationEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ahazard_caveworm_01_C::HandleOnDeformationEvent(struct FDeformationParams* DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.HandleOnDeformationEvent");

	Ahazard_caveworm_01_C_HandleOnDeformationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeformationParams != nullptr)
		*DeformationParams = params.DeformationParams;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.UpdateCable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ahazard_caveworm_01_C::UpdateCable()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.UpdateCable");

	Ahazard_caveworm_01_C_UpdateCable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.SquishAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_caveworm_01_C::SquishAnim(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.SquishAnim");

	Ahazard_caveworm_01_C_SquishAnim_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.DropItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              SpawnTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class APhysicalItem*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APhysicalItem* Ahazard_caveworm_01_C::DropItem(const struct FTransform& SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.DropItem");

	Ahazard_caveworm_01_C_DropItem_Params params;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.InitTongue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_caveworm_01_C::InitTongue(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.InitTongue");

	Ahazard_caveworm_01_C_InitTongue_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.GetTongueClearance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ahazard_caveworm_01_C::GetTongueClearance(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.GetTongueClearance");

	Ahazard_caveworm_01_C_GetTongueClearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.ReleaseObject
// (Public, BlueprintCallable, BlueprintEvent)

void Ahazard_caveworm_01_C::ReleaseObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.ReleaseObject");

	Ahazard_caveworm_01_C_ReleaseObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ahazard_caveworm_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.UserConstructionScript");

	Ahazard_caveworm_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ahazard_caveworm_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveBeginPlay");

	Ahazard_caveworm_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_caveworm_01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveTick");

	Ahazard_caveworm_01_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FDeformationParams      DeformationParams              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ahazard_caveworm_01_C::BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature(const struct FDeformationParams& DeformationParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature");

	Ahazard_caveworm_01_C_BndEvt__Deformable_K2Node_ComponentBoundEvent_306_OnDeformed__DelegateSignature_Params params;
	params.DeformationParams = DeformationParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_303_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Ahazard_caveworm_01_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_303_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_303_ComponentHitSignature__DelegateSignature");

	Ahazard_caveworm_01_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_303_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__MeshCollider_K2Node_ComponentBoundEvent_330_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Ahazard_caveworm_01_C::BndEvt__MeshCollider_K2Node_ComponentBoundEvent_330_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__MeshCollider_K2Node_ComponentBoundEvent_330_ComponentHitSignature__DelegateSignature");

	Ahazard_caveworm_01_C_BndEvt__MeshCollider_K2Node_ComponentBoundEvent_330_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__GrabTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Ahazard_caveworm_01_C::BndEvt__GrabTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.BndEvt__GrabTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Ahazard_caveworm_01_C_BndEvt__GrabTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.DoExtendTongue
// (BlueprintCallable, BlueprintEvent)

void Ahazard_caveworm_01_C::DoExtendTongue()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.DoExtendTongue");

	Ahazard_caveworm_01_C_DoExtendTongue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.Die
// (BlueprintCallable, BlueprintEvent)

void Ahazard_caveworm_01_C::Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.Die");

	Ahazard_caveworm_01_C_Die_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.RetractTongue
// (BlueprintCallable, BlueprintEvent)

void Ahazard_caveworm_01_C::RetractTongue()
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.RetractTongue");

	Ahazard_caveworm_01_C_RetractTongue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_caveworm_01_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.ReceiveEndPlay");

	Ahazard_caveworm_01_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hazard_caveworm_01.hazard_caveworm_01_C.ExecuteUbergraph_hazard_caveworm_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahazard_caveworm_01_C::ExecuteUbergraph_hazard_caveworm_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function hazard_caveworm_01.hazard_caveworm_01_C.ExecuteUbergraph_hazard_caveworm_01");

	Ahazard_caveworm_01_C_ExecuteUbergraph_hazard_caveworm_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
