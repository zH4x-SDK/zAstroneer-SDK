
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

// Function WBP_FillerTile.WBP_FillerTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FillerTile_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FillerTile.WBP_FillerTile_C.PreConstruct");

	UWBP_FillerTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FillerTile.WBP_FillerTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_FillerTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FillerTile.WBP_FillerTile_C.Construct");

	UWBP_FillerTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_FillerTile.WBP_FillerTile_C.ExecuteUbergraph_WBP_FillerTile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_FillerTile_C::ExecuteUbergraph_WBP_FillerTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_FillerTile.WBP_FillerTile_C.ExecuteUbergraph_WBP_FillerTile");

	UWBP_FillerTile_C_ExecuteUbergraph_WBP_FillerTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
