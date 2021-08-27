
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

// Function ResourceNugget_Ceramic.ResourceNugget_Ceramic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNugget_Ceramic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Ceramic.ResourceNugget_Ceramic_C.UserConstructionScript");

	AResourceNugget_Ceramic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget_Ceramic.ResourceNugget_Ceramic_C.SetView
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceNugget_Ceramic_C::SetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Ceramic.ResourceNugget_Ceramic_C.SetView");

	AResourceNugget_Ceramic_C_SetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceNugget_Ceramic.ResourceNugget_Ceramic_C.ExecuteUbergraph_ResourceNugget_Ceramic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceNugget_Ceramic_C::ExecuteUbergraph_ResourceNugget_Ceramic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceNugget_Ceramic.ResourceNugget_Ceramic_C.ExecuteUbergraph_ResourceNugget_Ceramic");

	AResourceNugget_Ceramic_C_ExecuteUbergraph_ResourceNugget_Ceramic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
