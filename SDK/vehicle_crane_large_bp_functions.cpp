
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

// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Get Target
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 World_Location                 (Parm, OutParm, IsPlainOldData)

void Uvehicle_crane_large_bp_C::Get_Target(struct FVector* World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Get Target");

	Uvehicle_crane_large_bp_C_Get_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (World_Location != nullptr)
		*World_Location = params.World_Location;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Calculate Crane
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uvehicle_crane_large_bp_C::Calculate_Crane()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Calculate Crane");

	Uvehicle_crane_large_bp_C_Calculate_Crane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Set Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 World_Direction                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uvehicle_crane_large_bp_C::Set_Target(const struct FVector& World_Location, const struct FVector& World_Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Set Target");

	Uvehicle_crane_large_bp_C_Set_Target_Params params;
	params.World_Location = World_Location;
	params.World_Direction = World_Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Calculate IK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance_1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance_2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target_X_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target_Y                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Out_Angle_1                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Out_Angle_2                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uvehicle_crane_large_bp_C::Calculate_IK(float Distance_1, float Distance_2, float Target_X_, float Target_Y, float* Out_Angle_1, float* Out_Angle_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.Calculate IK");

	Uvehicle_crane_large_bp_C_Calculate_IK_Params params;
	params.Distance_1 = Distance_1;
	params.Distance_2 = Distance_2;
	params.Target_X_ = Target_X_;
	params.Target_Y = Target_Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Angle_1 != nullptr)
		*Out_Angle_1 = params.Out_Angle_1;
	if (Out_Angle_2 != nullptr)
		*Out_Angle_2 = params.Out_Angle_2;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA
// (BlueprintEvent)

void Uvehicle_crane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA");

	Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_E72A11DA4B41DBCA17C03682B40405CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03
// (BlueprintEvent)

void Uvehicle_crane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03");

	Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_352BE5754C75E80AEB2FF8B5FBE59C03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679
// (BlueprintEvent)

void Uvehicle_crane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679");

	Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_744B90F349A46E7055A021A3F0284679_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7
// (BlueprintEvent)

void Uvehicle_crane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7");

	Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_3DE6F946422463806E0100B17718EAE7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77
// (BlueprintEvent)

void Uvehicle_crane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77");

	Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_8CA148AE4B1B39CDB99720A411B87F77_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525
// (BlueprintEvent)

void Uvehicle_crane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525");

	Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_CB211A9B45BBE6D67FA0D6A0FD606525_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11
// (BlueprintEvent)

void Uvehicle_crane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11()
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11");

	Uvehicle_crane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_vehicle_crane_large_bp_AnimGraphNode_ModifyBone_4644CEAE42C47028D33CFD9E2C1CDF11_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uvehicle_crane_large_bp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.BlueprintUpdateAnimation");

	Uvehicle_crane_large_bp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.ExecuteUbergraph_vehicle_crane_large_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uvehicle_crane_large_bp_C::ExecuteUbergraph_vehicle_crane_large_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function vehicle_crane_large_bp.vehicle_crane_large_bp_C.ExecuteUbergraph_vehicle_crane_large_bp");

	Uvehicle_crane_large_bp_C_ExecuteUbergraph_vehicle_crane_large_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
