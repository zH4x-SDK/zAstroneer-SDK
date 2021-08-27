
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

// Function crane_large_bp.crane_large_bp_C.Get Target
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 World_Location                 (Parm, OutParm, IsPlainOldData)

void Ucrane_large_bp_C::Get_Target(struct FVector* World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.Get Target");

	Ucrane_large_bp_C_Get_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (World_Location != nullptr)
		*World_Location = params.World_Location;
}


// Function crane_large_bp.crane_large_bp_C.Calculate Crane
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ucrane_large_bp_C::Calculate_Crane()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.Calculate Crane");

	Ucrane_large_bp_C_Calculate_Crane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.Set Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 World_Direction                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ucrane_large_bp_C::Set_Target(const struct FVector& World_Location, const struct FVector& World_Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.Set Target");

	Ucrane_large_bp_C_Set_Target_Params params;
	params.World_Location = World_Location;
	params.World_Direction = World_Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.Calculate IK
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance_1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance_2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target_X_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Target_Y                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Out_Angle_1                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Out_Angle_2                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucrane_large_bp_C::Calculate_IK(float Distance_1, float Distance_2, float Target_X_, float Target_Y, float* Out_Angle_1, float* Out_Angle_2)
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.Calculate IK");

	Ucrane_large_bp_C_Calculate_IK_Params params;
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


// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5
// (BlueprintEvent)

void Ucrane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5");

	Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_491F63DA4907AFEA9C259DBA969427D5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7
// (BlueprintEvent)

void Ucrane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7");

	Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_A414773442B45CA3E017D39F4EE444E7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E
// (BlueprintEvent)

void Ucrane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E");

	Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_6842B6EF40479A0E5B3B3CAF7BBD457E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387
// (BlueprintEvent)

void Ucrane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387");

	Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_D6CDA5F340B92E1B77498789FADC1387_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D
// (BlueprintEvent)

void Ucrane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D");

	Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_BF5B0B884C75CBBD3559ECAD1298551D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF
// (BlueprintEvent)

void Ucrane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF");

	Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_8F56F60641CDBBF067977DB003C60BBF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147
// (BlueprintEvent)

void Ucrane_large_bp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147()
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147");

	Ucrane_large_bp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_crane_large_bp_AnimGraphNode_ModifyBone_322C4D9C4153BF07A989E49519D99147_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucrane_large_bp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.BlueprintUpdateAnimation");

	Ucrane_large_bp_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function crane_large_bp.crane_large_bp_C.ExecuteUbergraph_crane_large_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucrane_large_bp_C::ExecuteUbergraph_crane_large_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function crane_large_bp.crane_large_bp_C.ExecuteUbergraph_crane_large_bp");

	Ucrane_large_bp_C_ExecuteUbergraph_crane_large_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
