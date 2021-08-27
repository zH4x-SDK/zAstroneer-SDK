
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

// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_ApolloLEM_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.UserConstructionScript");

	APOI_ApolloLEM_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.FlashStandbyLights__FinishedFunc
// (BlueprintEvent)

void APOI_ApolloLEM_BP_C::FlashStandbyLights__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.FlashStandbyLights__FinishedFunc");

	APOI_ApolloLEM_BP_C_FlashStandbyLights__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.FlashStandbyLights__UpdateFunc
// (BlueprintEvent)

void APOI_ApolloLEM_BP_C::FlashStandbyLights__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.FlashStandbyLights__UpdateFunc");

	APOI_ApolloLEM_BP_C_FlashStandbyLights__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APOI_ApolloLEM_BP_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	APOI_ApolloLEM_BP_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APOI_ApolloLEM_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveBeginPlay");

	APOI_ApolloLEM_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.Visual Photo Delay Timer
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APOI_ApolloLEM_BP_C::Visual_Photo_Delay_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.Visual Photo Delay Timer");

	APOI_ApolloLEM_BP_C_Visual_Photo_Delay_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.Remove Use Suppression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroAction*            EndedAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APOI_ApolloLEM_BP_C::Remove_Use_Suppression(class UAstroAction* EndedAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.Remove Use Suppression");

	APOI_ApolloLEM_BP_C_Remove_Use_Suppression_Params params;
	params.EndedAction = EndedAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveHit
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

void APOI_ApolloLEM_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveHit");

	APOI_ApolloLEM_BP_C_ReceiveHit_Params params;
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


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.BndEvt__AudioLoopRadius_Small_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APOI_ApolloLEM_BP_C::BndEvt__AudioLoopRadius_Small_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.BndEvt__AudioLoopRadius_Small_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APOI_ApolloLEM_BP_C_BndEvt__AudioLoopRadius_Small_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.BndEvt__AudioLoopRadius_Large_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APOI_ApolloLEM_BP_C::BndEvt__AudioLoopRadius_Large_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.BndEvt__AudioLoopRadius_Large_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	APOI_ApolloLEM_BP_C_BndEvt__AudioLoopRadius_Large_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APOI_ApolloLEM_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ReceiveEndPlay");

	APOI_ApolloLEM_BP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ExecuteUbergraph_POI_ApolloLEM_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APOI_ApolloLEM_BP_C::ExecuteUbergraph_POI_ApolloLEM_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ApolloLEM_BP.POI_ApolloLEM_BP_C.ExecuteUbergraph_POI_ApolloLEM_BP");

	APOI_ApolloLEM_BP_C_ExecuteUbergraph_POI_ApolloLEM_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
