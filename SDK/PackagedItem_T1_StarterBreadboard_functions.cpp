
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

// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.CheckOxygenatorTutorialCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OxygenatorTutorialComplete     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::CheckOxygenatorTutorialCompleted(bool* OxygenatorTutorialComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.CheckOxygenatorTutorialCompleted");

	APackagedItem_T1_StarterBreadboard_C_CheckOxygenatorTutorialCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OxygenatorTutorialComplete != nullptr)
		*OxygenatorTutorialComplete = params.OxygenatorTutorialComplete;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DisableAllTutorialTooltips
// (Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::DisableAllTutorialTooltips()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DisableAllTutorialTooltips");

	APackagedItem_T1_StarterBreadboard_C_DisableAllTutorialTooltips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnableUnpackTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::EnableUnpackTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnableUnpackTooltip");

	APackagedItem_T1_StarterBreadboard_C_EnableUnpackTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnableRotatePromptTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::EnableRotatePromptTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnableRotatePromptTooltip");

	APackagedItem_T1_StarterBreadboard_C_EnableRotatePromptTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnablePickUpTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::EnablePickUpTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.EnablePickUpTooltip");

	APackagedItem_T1_StarterBreadboard_C_EnablePickUpTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.UpdateTutorialPickedUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PickedUp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::UpdateTutorialPickedUp(bool PickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.UpdateTutorialPickedUp");

	APackagedItem_T1_StarterBreadboard_C_UpdateTutorialPickedUp_Params params;
	params.PickedUp = PickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandlePackageLanded
// (Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::HandlePackageLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandlePackageLanded");

	APackagedItem_T1_StarterBreadboard_C_HandlePackageLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.UserConstructionScript");

	APackagedItem_T1_StarterBreadboard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ReceiveBeginPlay");

	APackagedItem_T1_StarterBreadboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleItemUnpacked
// (BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::HandleItemUnpacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleItemUnpacked");

	APackagedItem_T1_StarterBreadboard_C_HandleItemUnpacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.Authority_Unpack
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::Authority_Unpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.Authority_Unpack");

	APackagedItem_T1_StarterBreadboard_C_Authority_Unpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.PickedUpFromWorld");

	APackagedItem_T1_StarterBreadboard_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DroppedInWorld");

	APackagedItem_T1_StarterBreadboard_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DoLandingEffectsRPC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APackagedItem_T1_StarterBreadboard_C::DoLandingEffectsRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.DoLandingEffectsRPC");

	APackagedItem_T1_StarterBreadboard_C_DoLandingEffectsRPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ReleasedFromSlot
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           FromTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewOwner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::ReleasedFromSlot(bool FromTool, bool NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ReleasedFromSlot");

	APackagedItem_T1_StarterBreadboard_C_ReleasedFromSlot_Params params;
	params.FromTool = FromTool;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.OnStartingItemCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           StarterItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::OnStartingItemCreated(class APhysicalItem* StarterItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.OnStartingItemCreated");

	APackagedItem_T1_StarterBreadboard_C_OnStartingItemCreated_Params params;
	params.StarterItem = StarterItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleOnDeployReadyChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DeployReady                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::HandleOnDeployReadyChanged(bool DeployReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleOnDeployReadyChanged");

	APackagedItem_T1_StarterBreadboard_C_HandleOnDeployReadyChanged_Params params;
	params.DeployReady = DeployReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleOnIndicatorVisibleChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IndicatorVisible               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::HandleOnIndicatorVisibleChanged(bool IndicatorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.HandleOnIndicatorVisibleChanged");

	APackagedItem_T1_StarterBreadboard_C_HandleOnIndicatorVisibleChanged_Params params;
	params.IndicatorVisible = IndicatorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ExecuteUbergraph_PackagedItem_T1_StarterBreadboard
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T1_StarterBreadboard_C::ExecuteUbergraph_PackagedItem_T1_StarterBreadboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T1_StarterBreadboard.PackagedItem_T1_StarterBreadboard_C.ExecuteUbergraph_PackagedItem_T1_StarterBreadboard");

	APackagedItem_T1_StarterBreadboard_C_ExecuteUbergraph_PackagedItem_T1_StarterBreadboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
