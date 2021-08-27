
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

// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_T3_StarterShelter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.UserConstructionScript");

	APackagedItem_T3_StarterShelter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void APackagedItem_T3_StarterShelter_C::BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	APackagedItem_T3_StarterShelter_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T3_StarterShelter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveTick");

	APackagedItem_T3_StarterShelter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T3_StarterShelter_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveEndPlay");

	APackagedItem_T3_StarterShelter_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APackagedItem_T3_StarterShelter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ReceiveBeginPlay");

	APackagedItem_T3_StarterShelter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnDeployReadyChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DeployReady                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T3_StarterShelter_C::HandleOnDeployReadyChanged(bool DeployReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnDeployReadyChanged");

	APackagedItem_T3_StarterShelter_C_HandleOnDeployReadyChanged_Params params;
	params.DeployReady = DeployReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnAssignPackageMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      PackageMaterial                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T3_StarterShelter_C::HandleOnAssignPackageMaterial(class UMaterialInterface* PackageMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnAssignPackageMaterial");

	APackagedItem_T3_StarterShelter_C_HandleOnAssignPackageMaterial_Params params;
	params.PackageMaterial = PackageMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnIndicatorVisibleChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IndicatorVisible               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T3_StarterShelter_C::HandleOnIndicatorVisibleChanged(bool IndicatorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.HandleOnIndicatorVisibleChanged");

	APackagedItem_T3_StarterShelter_C_HandleOnIndicatorVisibleChanged_Params params;
	params.IndicatorVisible = IndicatorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ExecuteUbergraph_PackagedItem_T3_StarterShelter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_T3_StarterShelter_C::ExecuteUbergraph_PackagedItem_T3_StarterShelter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_T3_StarterShelter.PackagedItem_T3_StarterShelter_C.ExecuteUbergraph_PackagedItem_T3_StarterShelter");

	APackagedItem_T3_StarterShelter_C_ExecuteUbergraph_PackagedItem_T3_StarterShelter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
