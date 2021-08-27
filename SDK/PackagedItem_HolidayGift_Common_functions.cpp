
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

// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.HandleOnIndicatorVisibleChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IndicatorVisible               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::HandleOnIndicatorVisibleChanged(bool IndicatorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.HandleOnIndicatorVisibleChanged");

	APackagedItem_HolidayGift_Common_C_HandleOnIndicatorVisibleChanged_Params params;
	params.IndicatorVisible = IndicatorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.HandleOnAssignPackageMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      PackageMaterial                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::HandleOnAssignPackageMaterial(class UMaterialInterface* PackageMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.HandleOnAssignPackageMaterial");

	APackagedItem_HolidayGift_Common_C_HandleOnAssignPackageMaterial_Params params;
	params.PackageMaterial = PackageMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.HandleOnDeployReadyChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DeployReady                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::HandleOnDeployReadyChanged(bool DeployReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.HandleOnDeployReadyChanged");

	APackagedItem_HolidayGift_Common_C_HandleOnDeployReadyChanged_Params params;
	params.DeployReady = DeployReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.GetBodySlotLegacy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UChildSlotComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UChildSlotComponent* APackagedItem_HolidayGift_Common_C::GetBodySlotLegacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.GetBodySlotLegacy");

	APackagedItem_HolidayGift_Common_C_GetBodySlotLegacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APackagedItem_HolidayGift_Common_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.UserConstructionScript");

	APackagedItem_HolidayGift_Common_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.InpActEvt_Use_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APackagedItem_HolidayGift_Common_C::InpActEvt_Use_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.InpActEvt_Use_K2Node_InputActionEvent_1");

	APackagedItem_HolidayGift_Common_C_InpActEvt_Use_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.DroppedInWorld");

	APackagedItem_HolidayGift_Common_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void APackagedItem_HolidayGift_Common_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.PickedUpFromWorld");

	APackagedItem_HolidayGift_Common_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.ReceiveHit
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

void APackagedItem_HolidayGift_Common_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.ReceiveHit");

	APackagedItem_HolidayGift_Common_C_ReceiveHit_Params params;
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


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.Authority_Unpack
// (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)

void APackagedItem_HolidayGift_Common_C::Authority_Unpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.Authority_Unpack");

	APackagedItem_HolidayGift_Common_C_Authority_Unpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.DoUnpackAudioRPC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void APackagedItem_HolidayGift_Common_C::DoUnpackAudioRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.DoUnpackAudioRPC");

	APackagedItem_HolidayGift_Common_C_DoUnpackAudioRPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_PackageIndicatorEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           IndicatorVisible               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_PackageIndicatorEvent__DelegateSignature(bool IndicatorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_PackageIndicatorEvent__DelegateSignature");

	APackagedItem_HolidayGift_Common_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_0_PackageIndicatorEvent__DelegateSignature_Params params;
	params.IndicatorVisible = IndicatorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_1_PackageReadyEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           DeployReady                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_1_PackageReadyEvent__DelegateSignature(bool DeployReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_1_PackageReadyEvent__DelegateSignature");

	APackagedItem_HolidayGift_Common_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_1_PackageReadyEvent__DelegateSignature_Params params;
	params.DeployReady = DeployReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_2_AssignMaterialEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMaterialInterface*      PackageMaterial                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_2_AssignMaterialEvent__DelegateSignature(class UMaterialInterface* PackageMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_2_AssignMaterialEvent__DelegateSignature");

	APackagedItem_HolidayGift_Common_C_BndEvt__DeployableItemPackage_K2Node_ComponentBoundEvent_2_AssignMaterialEvent__DelegateSignature_Params params;
	params.PackageMaterial = PackageMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.ExecuteUbergraph_PackagedItem_HolidayGift_Common
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APackagedItem_HolidayGift_Common_C::ExecuteUbergraph_PackagedItem_HolidayGift_Common(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PackagedItem_HolidayGift_Common.PackagedItem_HolidayGift_Common_C.ExecuteUbergraph_PackagedItem_HolidayGift_Common");

	APackagedItem_HolidayGift_Common_C_ExecuteUbergraph_PackagedItem_HolidayGift_Common_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
