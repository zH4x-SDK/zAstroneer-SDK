
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

// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.DisableTutorialTooltips
// (Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::DisableTutorialTooltips()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.DisableTutorialTooltips");

	APackagedItem_T1_StarterPrinter_C_DisableTutorialTooltips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.EnableUnpackPromptTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::EnableUnpackPromptTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.EnableUnpackPromptTooltip");

	APackagedItem_T1_StarterPrinter_C_EnableUnpackPromptTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.EnablePlacePromptTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::EnablePlacePromptTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.EnablePlacePromptTooltip");

	APackagedItem_T1_StarterPrinter_C_EnablePlacePromptTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialCursorOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OverBegin                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::TutorialCursorOver(bool OverBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialCursorOver");

	APackagedItem_T1_StarterPrinter_C_TutorialCursorOver_Params params;
	params.OverBegin = OverBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialPickedUp
// (Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::TutorialPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialPickedUp");

	APackagedItem_T1_StarterPrinter_C_TutorialPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialDroppedInWorld
// (Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::TutorialDroppedInWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialDroppedInWorld");

	APackagedItem_T1_StarterPrinter_C_TutorialDroppedInWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialPlacedInSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          NewSlot                        (BlueprintVisible, BlueprintReadOnly, Parm)

void APackagedItem_T1_StarterPrinter_C::TutorialPlacedInSlot(const struct FSlotReference& NewSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TutorialPlacedInSlot");

	APackagedItem_T1_StarterPrinter_C_TutorialPlacedInSlot_Params params;
	params.NewSlot = NewSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.CheckUpdateTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanDeploy                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::CheckUpdateTutorial(bool CanDeploy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.CheckUpdateTutorial");

	APackagedItem_T1_StarterPrinter_C_CheckUpdateTutorial_Params params;
	params.CanDeploy = CanDeploy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TestSlottedToTargetSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          NewSlot                        (BlueprintVisible, BlueprintReadOnly, Parm)

void APackagedItem_T1_StarterPrinter_C::TestSlottedToTargetSlot(const struct FSlotReference& NewSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TestSlottedToTargetSlot");

	APackagedItem_T1_StarterPrinter_C_TestSlottedToTargetSlot_Params params;
	params.NewSlot = NewSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.UpdateBreadboardHologram
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::UpdateBreadboardHologram()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.UpdateBreadboardHologram");

	APackagedItem_T1_StarterPrinter_C_UpdateBreadboardHologram_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TryGetStarterBreadboardRef
// (Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::TryGetStarterBreadboardRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.TryGetStarterBreadboardRef");

	APackagedItem_T1_StarterPrinter_C_TryGetStarterBreadboardRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.SetupStarterBreadboardRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABreadboard_T2_Starter_C* StarterBreadboard              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::SetupStarterBreadboardRef(class ABreadboard_T2_Starter_C* StarterBreadboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.SetupStarterBreadboardRef");

	APackagedItem_T1_StarterPrinter_C_SetupStarterBreadboardRef_Params params;
	params.StarterBreadboard = StarterBreadboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.HandlePackageLanded
// (Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::HandlePackageLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.HandlePackageLanded");

	APackagedItem_T1_StarterPrinter_C_HandlePackageLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.UserConstructionScript");

	APackagedItem_T1_StarterPrinter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.HandleItemUnpacked
// (BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::HandleItemUnpacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.HandleItemUnpacked");

	APackagedItem_T1_StarterPrinter_C_HandleItemUnpacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.StarterItemCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           StarterItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::StarterItemCreated(class APhysicalItem* StarterItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.StarterItemCreated");

	APackagedItem_T1_StarterPrinter_C_StarterItemCreated_Params params;
	params.StarterItem = StarterItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.StarterPlatformDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedPlatform              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::StarterPlatformDestroyed(class AActor* DestroyedPlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.StarterPlatformDestroyed");

	APackagedItem_T1_StarterPrinter_C_StarterPlatformDestroyed_Params params;
	params.DestroyedPlatform = DestroyedPlatform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.PickedUpFromWorld");

	APackagedItem_T1_StarterPrinter_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.DroppedInWorld");

	APackagedItem_T1_StarterPrinter_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReceiveActorBeginCursorOver
// (Event, Public, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReceiveActorBeginCursorOver");

	APackagedItem_T1_StarterPrinter_C_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReceiveActorEndCursorOver
// (Event, Public, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReceiveActorEndCursorOver");

	APackagedItem_T1_StarterPrinter_C_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.PlacedInSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlotReference          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlottedDuringInitialization    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::PlacedInSlot(const struct FSlotReference& Slot, bool FromTool, bool SlottedDuringInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.PlacedInSlot");

	APackagedItem_T1_StarterPrinter_C_PlacedInSlot_Params params;
	params.Slot = Slot;
	params.FromTool = FromTool;
	params.SlottedDuringInitialization = SlottedDuringInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.Authority_Unpack
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::Authority_Unpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.Authority_Unpack");

	APackagedItem_T1_StarterPrinter_C_Authority_Unpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReceiveBeginPlay");

	APackagedItem_T1_StarterPrinter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ReleasedFromSlot");

	APackagedItem_T1_StarterPrinter_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.DoLandingEffectsRPC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterPrinter_C::DoLandingEffectsRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.DoLandingEffectsRPC");

	APackagedItem_T1_StarterPrinter_C_DoLandingEffectsRPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.HandleOnDeployReadyChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DeployReady                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::HandleOnDeployReadyChanged(bool DeployReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.HandleOnDeployReadyChanged");

	APackagedItem_T1_StarterPrinter_C_HandleOnDeployReadyChanged_Params params;
	params.DeployReady = DeployReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ExecuteUbergraph_PackagedItem_T1_StarterPrinter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterPrinter_C::ExecuteUbergraph_PackagedItem_T1_StarterPrinter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterPrinter.PackagedItem_T1_StarterPrinter_C.ExecuteUbergraph_PackagedItem_T1_StarterPrinter");

	APackagedItem_T1_StarterPrinter_C_ExecuteUbergraph_PackagedItem_T1_StarterPrinter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
