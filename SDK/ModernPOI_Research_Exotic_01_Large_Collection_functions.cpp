
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

// Function ModernPOI_Research_Exotic_01_Large_Collection.ModernPOI_Research_Exotic_01_Large_Collection_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModernPOI_Research_Exotic_01_Large_Collection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Research_Exotic_01_Large_Collection.ModernPOI_Research_Exotic_01_Large_Collection_C.UserConstructionScript");

	AModernPOI_Research_Exotic_01_Large_Collection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernPOI_Research_Exotic_01_Large_Collection.ModernPOI_Research_Exotic_01_Large_Collection_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AModernPOI_Research_Exotic_01_Large_Collection_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Research_Exotic_01_Large_Collection.ModernPOI_Research_Exotic_01_Large_Collection_C.ReceiveBeginPlay");

	AModernPOI_Research_Exotic_01_Large_Collection_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernPOI_Research_Exotic_01_Large_Collection.ModernPOI_Research_Exotic_01_Large_Collection_C.ExecuteUbergraph_ModernPOI_Research_Exotic_01_Large_Collection
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernPOI_Research_Exotic_01_Large_Collection_C::ExecuteUbergraph_ModernPOI_Research_Exotic_01_Large_Collection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Research_Exotic_01_Large_Collection.ModernPOI_Research_Exotic_01_Large_Collection_C.ExecuteUbergraph_ModernPOI_Research_Exotic_01_Large_Collection");

	AModernPOI_Research_Exotic_01_Large_Collection_C_ExecuteUbergraph_ModernPOI_Research_Exotic_01_Large_Collection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
