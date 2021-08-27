
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

// Function ItemGas_GasBag.ItemGas_GasBag_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AItemGas_GasBag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemGas_GasBag.ItemGas_GasBag_C.UserConstructionScript");

	AItemGas_GasBag_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AItemGas_GasBag_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveBeginPlay");

	AItemGas_GasBag_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemGas_GasBag_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveTick");

	AItemGas_GasBag_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemGas_GasBag_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemGas_GasBag.ItemGas_GasBag_C.ReceiveEndPlay");

	AItemGas_GasBag_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemGas_GasBag.ItemGas_GasBag_C.MULTI Play Damage Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AItemGas_GasBag_C::MULTI_Play_Damage_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemGas_GasBag.ItemGas_GasBag_C.MULTI Play Damage Effects");

	AItemGas_GasBag_C_MULTI_Play_Damage_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemGas_GasBag.ItemGas_GasBag_C.ExecuteUbergraph_ItemGas_GasBag
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AItemGas_GasBag_C::ExecuteUbergraph_ItemGas_GasBag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemGas_GasBag.ItemGas_GasBag_C.ExecuteUbergraph_ItemGas_GasBag");

	AItemGas_GasBag_C_ExecuteUbergraph_ItemGas_GasBag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
