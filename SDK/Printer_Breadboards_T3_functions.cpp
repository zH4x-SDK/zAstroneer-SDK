
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

// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_T3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.UserConstructionScript");

	APrinter_Breadboards_T3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrinter_Breadboards_T3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ReceiveBeginPlay");

	APrinter_Breadboards_T3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.AnimationStateChanged
// (BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_T3_C::AnimationStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.AnimationStateChanged");

	APrinter_Breadboards_T3_C_AnimationStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.SetupPrinterSlots
// (Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_T3_C::SetupPrinterSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.SetupPrinterSlots");

	APrinter_Breadboards_T3_C_SetupPrinterSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.UpdateAnim_Printing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Printing                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_T3_C::UpdateAnim_Printing(bool Printing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.UpdateAnim_Printing");

	APrinter_Breadboards_T3_C_UpdateAnim_Printing_Params params;
	params.Printing = Printing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.SetupAnimBP
// (Public, BlueprintCallable, BlueprintEvent)

void APrinter_Breadboards_T3_C::SetupAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.SetupAnimBP");

	APrinter_Breadboards_T3_C_SetupAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.DroppedInWorld
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terrainComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Normal                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APrinter_Breadboards_T3_C::DroppedInWorld(class UPrimitiveComponent* Component, bool terrainComponent, const struct FVector& Point, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.DroppedInWorld");

	APrinter_Breadboards_T3_C_DroppedInWorld_Params params;
	params.Component = Component;
	params.terrainComponent = terrainComponent;
	params.Point = Point;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.PickedUpFromWorld
// (Event, Public, BlueprintEvent)

void APrinter_Breadboards_T3_C::PickedUpFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.PickedUpFromWorld");

	APrinter_Breadboards_T3_C_PickedUpFromWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ReceiveHit
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

void APrinter_Breadboards_T3_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ReceiveHit");

	APrinter_Breadboards_T3_C_ReceiveHit_Params params;
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


// Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ExecuteUbergraph_Printer_Breadboards_T3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrinter_Breadboards_T3_C::ExecuteUbergraph_Printer_Breadboards_T3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Printer_Breadboards_T3.Printer_Breadboards_T3_C.ExecuteUbergraph_Printer_Breadboards_T3");

	APrinter_Breadboards_T3_C_ExecuteUbergraph_Printer_Breadboards_T3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
