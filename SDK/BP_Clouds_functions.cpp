
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

// Function BP_Clouds.BP_Clouds_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Clouds_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clouds.BP_Clouds_C.UserConstructionScript");

	ABP_Clouds_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clouds.BP_Clouds_C.Update Fog Colors
// (BlueprintCallable, BlueprintEvent)

void ABP_Clouds_C::Update_Fog_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clouds.BP_Clouds_C.Update Fog Colors");

	ABP_Clouds_C_Update_Fog_Colors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Clouds.BP_Clouds_C.ExecuteUbergraph_BP_Clouds
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Clouds_C::ExecuteUbergraph_BP_Clouds(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Clouds.BP_Clouds_C.ExecuteUbergraph_BP_Clouds");

	ABP_Clouds_C_ExecuteUbergraph_BP_Clouds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
