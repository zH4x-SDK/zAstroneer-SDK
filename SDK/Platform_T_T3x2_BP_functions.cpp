
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

// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.GetTetherAttachPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCircularAttachPoint> AttachPoints                   (Parm, OutParm, ZeroConstructor)

void APlatform_T_T3x2_BP_C::GetTetherAttachPoints(TArray<struct FCircularAttachPoint>* AttachPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.GetTetherAttachPoints");

	APlatform_T_T3x2_BP_C_GetTetherAttachPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachPoints != nullptr)
		*AttachPoints = params.AttachPoints;
}


// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlatform_T_T3x2_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.UserConstructionScript");

	APlatform_T_T3x2_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.SetupSecondarySlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlatform_T_T3x2_BP_C::SetupSecondarySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.SetupSecondarySlots");

	APlatform_T_T3x2_BP_C_SetupSecondarySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.ExecuteUbergraph_Platform_T_T3x2_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlatform_T_T3x2_BP_C::ExecuteUbergraph_Platform_T_T3x2_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Platform_T_T3x2_BP.Platform_T_T3x2_BP_C.ExecuteUbergraph_Platform_T_T3x2_BP");

	APlatform_T_T3x2_BP_C_ExecuteUbergraph_Platform_T_T3x2_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
