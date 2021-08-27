
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

// Function Gateway_Station.Gateway_Station_C.AllMatchingKeysPresent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           AllKeysPresent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::AllMatchingKeysPresent(bool* AllKeysPresent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.AllMatchingKeysPresent");

	AGateway_Station_C_AllMatchingKeysPresent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllKeysPresent != nullptr)
		*AllKeysPresent = params.AllKeysPresent;
}


// Function Gateway_Station.Gateway_Station_C.OnKeyRemovedAuthority
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           RemovedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::OnKeyRemovedAuthority(class APhysicalItem* RemovedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.OnKeyRemovedAuthority");

	AGateway_Station_C_OnKeyRemovedAuthority_Params params;
	params.RemovedItem = RemovedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.OnKeySlottedAuthority
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           SlottedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::OnKeySlottedAuthority(class APhysicalItem* SlottedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.OnKeySlottedAuthority");

	AGateway_Station_C_OnKeySlottedAuthority_Params params;
	params.SlottedItem = SlottedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.AuthorityInitializeMatchingKeyStatuses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::AuthorityInitializeMatchingKeyStatuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.AuthorityInitializeMatchingKeyStatuses");

	AGateway_Station_C_AuthorityInitializeMatchingKeyStatuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.OnRep_MatchingKeyStatus
// (BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::OnRep_MatchingKeyStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.OnRep_MatchingKeyStatus");

	AGateway_Station_C_OnRep_MatchingKeyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Create Landing Zone Array
// (Public, BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::Create_Landing_Zone_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Create Landing Zone Array");

	AGateway_Station_C_Create_Landing_Zone_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.AuthorityResetKeyPlinths
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::AuthorityResetKeyPlinths()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.AuthorityResetKeyPlinths");

	AGateway_Station_C_AuthorityResetKeyPlinths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Setup Slot Delegates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::Setup_Slot_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Setup Slot Delegates");

	AGateway_Station_C_Setup_Slot_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.UserConstructionScript");

	AGateway_Station_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__FinishedFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__FinishedFunc");

	AGateway_Station_C_Staggered__Build_Out__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__UpdateFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__UpdateFunc");

	AGateway_Station_C_Staggered__Build_Out__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 7__EventFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__Key_7__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 7__EventFunc");

	AGateway_Station_C_Staggered__Build_Out__Key_7__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 6__EventFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__Key_6__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 6__EventFunc");

	AGateway_Station_C_Staggered__Build_Out__Key_6__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 5__EventFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__Key_5__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 5__EventFunc");

	AGateway_Station_C_Staggered__Build_Out__Key_5__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 4__EventFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__Key_4__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 4__EventFunc");

	AGateway_Station_C_Staggered__Build_Out__Key_4__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 3__EventFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__Key_3__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 3__EventFunc");

	AGateway_Station_C_Staggered__Build_Out__Key_3__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 2__EventFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__Key_2__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 2__EventFunc");

	AGateway_Station_C_Staggered__Build_Out__Key_2__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 1__EventFunc
// (BlueprintEvent)

void AGateway_Station_C::Staggered__Build_Out__Key_1__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.Staggered  Build-Out__Key 1__EventFunc");

	AGateway_Station_C_Staggered__Build_Out__Key_1__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGateway_Station_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.ReceiveBeginPlay");

	AGateway_Station_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void AGateway_Station_C::BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	AGateway_Station_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.BndEvt__Invincible Collision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGateway_Station_C::BndEvt__Invincible_Collision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.BndEvt__Invincible Collision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AGateway_Station_C_BndEvt__Invincible_Collision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Gateway_Station.Gateway_Station_C.BndEvt__Invincible Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::BndEvt__Invincible_Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.BndEvt__Invincible Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AGateway_Station_C_BndEvt__Invincible_Collision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.ActivateStationPortal
// (BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::ActivateStationPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.ActivateStationPortal");

	AGateway_Station_C_ActivateStationPortal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AAstroCharacter*         CharacterInProximity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature");

	AGateway_Station_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_0_PlayerProximityEventCallback__DelegateSignature_Params params;
	params.CharacterInProximity = CharacterInProximity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AAstroCharacter*         CharacterInProximity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature(class AAstroCharacter* CharacterInProximity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature");

	AGateway_Station_C_BndEvt__GateObjectComponent_K2Node_ComponentBoundEvent_1_PlayerProximityEventCallback__DelegateSignature_Params params;
	params.CharacterInProximity = CharacterInProximity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.InitializeLandingZones
// (Event, Public, BlueprintEvent)

void AGateway_Station_C::InitializeLandingZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.InitializeLandingZones");

	AGateway_Station_C_InitializeLandingZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.ReceiveEndPlay");

	AGateway_Station_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.OutroCinematicStarted
// (BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::OutroCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.OutroCinematicStarted");

	AGateway_Station_C_OutroCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.OutroCinematicCompleted
// (BlueprintCallable, BlueprintEvent)

void AGateway_Station_C::OutroCinematicCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.OutroCinematicCompleted");

	AGateway_Station_C_OutroCinematicCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gateway_Station.Gateway_Station_C.ExecuteUbergraph_Gateway_Station
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGateway_Station_C::ExecuteUbergraph_Gateway_Station(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gateway_Station.Gateway_Station_C.ExecuteUbergraph_Gateway_Station");

	AGateway_Station_C_ExecuteUbergraph_Gateway_Station_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
