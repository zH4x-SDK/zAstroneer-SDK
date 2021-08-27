
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

// Function AstroCorpse.AstroCorpse_C.Set Source Controller
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_C::Set_Source_Controller(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.Set Source Controller");

	AAstroCorpse_C_Set_Source_Controller_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAstroCorpse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.UserConstructionScript");

	AAstroCorpse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAstroCorpse_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.ReceiveBeginPlay");

	AAstroCorpse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAstroCorpse_C::OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.OnClicked_Event_1");

	AAstroCorpse_C_OnClicked_Event_1_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClickQuery*             Query                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_C::BndEvt__Clickable_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature(class UClickQuery* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.BndEvt__Clickable_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature");

	AAstroCorpse_C_BndEvt__Clickable_K2Node_ComponentBoundEvent_1_ClickableDelegateNew__DelegateSignature_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.ReceiveTick");

	AAstroCorpse_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.OnReleaseItem_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_C::OnReleaseItem_Event_1(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.OnReleaseItem_Event_1");

	AAstroCorpse_C_OnReleaseItem_Event_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.Check Items
// (BlueprintCallable, BlueprintEvent)

void AAstroCorpse_C::Check_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.Check Items");

	AAstroCorpse_C_Check_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.ClickUnhandled_Event_1
// (BlueprintCallable, BlueprintEvent)

void AAstroCorpse_C::ClickUnhandled_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.ClickUnhandled_Event_1");

	AAstroCorpse_C_ClickUnhandled_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AAstroCorpse_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.ReceiveDestroyed");

	AAstroCorpse_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.EnableLight
// (BlueprintCallable, BlueprintEvent)

void AAstroCorpse_C::EnableLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.EnableLight");

	AAstroCorpse_C_EnableLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.DisableLight
// (BlueprintCallable, BlueprintEvent)

void AAstroCorpse_C::DisableLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.DisableLight");

	AAstroCorpse_C_DisableLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.ExecuteUbergraph_AstroCorpse
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAstroCorpse_C::ExecuteUbergraph_AstroCorpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.ExecuteUbergraph_AstroCorpse");

	AAstroCorpse_C_ExecuteUbergraph_AstroCorpse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroCorpse.AstroCorpse_C.OnAllItemsCollected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AAstroCorpse_C::OnAllItemsCollected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroCorpse.AstroCorpse_C.OnAllItemsCollected__DelegateSignature");

	AAstroCorpse_C_OnAllItemsCollected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
