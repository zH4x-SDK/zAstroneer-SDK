
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

// Function CheatPlinth_Base.CheatPlinth_Base_C.SpawnCopyOfHologramItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheatPlinth_Base_C::SpawnCopyOfHologramItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.SpawnCopyOfHologramItem");

	ACheatPlinth_Base_C_SpawnCopyOfHologramItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* ACheatPlinth_Base_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.GetBodySlotLegacy");

	ACheatPlinth_Base_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.UpdateSelectedItem
// (Public, BlueprintCallable, BlueprintEvent)

void ACheatPlinth_Base_C::UpdateSelectedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.UpdateSelectedItem");

	ACheatPlinth_Base_C_UpdateSelectedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheatPlinth_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.UserConstructionScript");

	ACheatPlinth_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACheatPlinth_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.ReceiveBeginPlay");

	ACheatPlinth_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACheatPlinth_Base_C::OnClicked_Event_1(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.OnClicked_Event_1");

	ACheatPlinth_Base_C_OnClicked_Event_1_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.OnClicked_Event_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACheatPlinth_Base_C::OnClicked_Event_0_Copy(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.OnClicked_Event_0_Copy");

	ACheatPlinth_Base_C_OnClicked_Event_0_Copy_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.OnReleasedFromSlot_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheatPlinth_Base_C::OnReleasedFromSlot_Event_1(bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.OnReleasedFromSlot_Event_1");

	ACheatPlinth_Base_C_OnReleasedFromSlot_Event_1_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.OnReleaseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheatPlinth_Base_C::OnReleaseItem(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.OnReleaseItem");

	ACheatPlinth_Base_C_OnReleaseItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.BndEvt__BigHoloItemCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     TouchedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ACheatPlinth_Base_C::BndEvt__BigHoloItemCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.BndEvt__BigHoloItemCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	ACheatPlinth_Base_C_BndEvt__BigHoloItemCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params params;
	params.TouchedComponent = TouchedComponent;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheatPlinth_Base_C::CustomEvent_2(class UClass* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.CustomEvent_2");

	ACheatPlinth_Base_C_CustomEvent_2_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheatPlinth_Base_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.PlacedInSlot");

	ACheatPlinth_Base_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.ReceiveHit
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

void ACheatPlinth_Base_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.ReceiveHit");

	ACheatPlinth_Base_C_ReceiveHit_Params params;
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


// Function CheatPlinth_Base.CheatPlinth_Base_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void ACheatPlinth_Base_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.PickedUpFromWorld");

	ACheatPlinth_Base_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACheatPlinth_Base_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.DroppedInWorld");

	ACheatPlinth_Base_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheatPlinth_Base.CheatPlinth_Base_C.ExecuteUbergraph_CheatPlinth_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheatPlinth_Base_C::ExecuteUbergraph_CheatPlinth_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheatPlinth_Base.CheatPlinth_Base_C.ExecuteUbergraph_CheatPlinth_Base");

	ACheatPlinth_Base_C_ExecuteUbergraph_CheatPlinth_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
