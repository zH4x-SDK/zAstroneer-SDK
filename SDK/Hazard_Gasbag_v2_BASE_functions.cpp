
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

// Function Hazard_Gasbag_v2_BASE.Hazard_Gasbag_v2_BASE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHazard_Gasbag_v2_BASE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v2_BASE.Hazard_Gasbag_v2_BASE_C.UserConstructionScript");

	AHazard_Gasbag_v2_BASE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v2_BASE.Hazard_Gasbag_v2_BASE_C.Spawn Gas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Follow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Gasbag_v2_BASE_C::Spawn_Gas(class AActor* Follow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v2_BASE.Hazard_Gasbag_v2_BASE_C.Spawn Gas");

	AHazard_Gasbag_v2_BASE_C_Spawn_Gas_Params params;
	params.Follow = Follow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hazard_Gasbag_v2_BASE.Hazard_Gasbag_v2_BASE_C.ExecuteUbergraph_Hazard_Gasbag_v2_BASE
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHazard_Gasbag_v2_BASE_C::ExecuteUbergraph_Hazard_Gasbag_v2_BASE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hazard_Gasbag_v2_BASE.Hazard_Gasbag_v2_BASE_C.ExecuteUbergraph_Hazard_Gasbag_v2_BASE");

	AHazard_Gasbag_v2_BASE_C_ExecuteUbergraph_Hazard_Gasbag_v2_BASE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
