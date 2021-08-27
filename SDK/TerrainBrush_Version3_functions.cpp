
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

// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Change Ring Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Current_Terrain_Tint           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATerrainBrush_Version3_C::Change_Ring_Color(const struct FLinearColor& Current_Terrain_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.Change Ring Color");

	ATerrainBrush_Version3_C_Change_Ring_Color_Params params;
	params.Current_Terrain_Tint = Current_Terrain_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Show Light
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainBrush_Version3_C::Show_Light(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.Show Light");

	ATerrainBrush_Version3_C_Show_Light_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Spawn Ping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATerrainBrush_Version3_C::Spawn_Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.Spawn Ping");

	ATerrainBrush_Version3_C_Spawn_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.GetResourceNodeTooltip
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTooltipComponent*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTooltipComponent* ATerrainBrush_Version3_C::GetResourceNodeTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.GetResourceNodeTooltip");

	ATerrainBrush_Version3_C_GetResourceNodeTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Get Subtract Particle Effect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            HardnessDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATerrainBrush_Version3_C::Get_Subtract_Particle_Effect(int HardnessDelta, class UParticleSystem** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.Get Subtract Particle Effect");

	ATerrainBrush_Version3_C_Get_Subtract_Particle_Effect_Params params;
	params.HardnessDelta = HardnessDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Deactivate Deform Effect
// (Public, BlueprintCallable, BlueprintEvent)

void ATerrainBrush_Version3_C::Deactivate_Deform_Effect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.Deactivate Deform Effect");

	ATerrainBrush_Version3_C_Deactivate_Deform_Effect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Activate Deform Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDeformType                    Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HardnessTier                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainBrush_Version3_C::Activate_Deform_Effect(EDeformType Operation, int HardnessTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.Activate Deform Effect");

	ATerrainBrush_Version3_C_Activate_Deform_Effect_Params params;
	params.Operation = Operation;
	params.HardnessTier = HardnessTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.Set View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Using                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainBrush_Version3_C::Set_View(float Intensity, float Using)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.Set View");

	ATerrainBrush_Version3_C_Set_View_Params params;
	params.Intensity = Intensity;
	params.Using = Using;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATerrainBrush_Version3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.UserConstructionScript");

	ATerrainBrush_Version3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainBrush_Version3_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.ReceiveTick");

	ATerrainBrush_Version3_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATerrainBrush_Version3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.ReceiveBeginPlay");

	ATerrainBrush_Version3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.OnBrushColorChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTerrainMaterial        TerrainMaterial                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATerrainBrush_Version3_C::OnBrushColorChanged(const struct FTerrainMaterial& TerrainMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.OnBrushColorChanged");

	ATerrainBrush_Version3_C_OnBrushColorChanged_Params params;
	params.TerrainMaterial = TerrainMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.OnActivate
// (Event, Public, BlueprintEvent)

void ATerrainBrush_Version3_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.OnActivate");

	ATerrainBrush_Version3_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrainBrush_Version3.TerrainBrush_Version3_C.ExecuteUbergraph_TerrainBrush_Version3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATerrainBrush_Version3_C::ExecuteUbergraph_TerrainBrush_Version3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrainBrush_Version3.TerrainBrush_Version3_C.ExecuteUbergraph_TerrainBrush_Version3");

	ATerrainBrush_Version3_C_ExecuteUbergraph_TerrainBrush_Version3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
