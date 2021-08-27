
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

// Function IconRig.IconRig_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIconRig_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRig.IconRig_C.UserConstructionScript");

	AIconRig_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRig.IconRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIconRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRig.IconRig_C.ReceiveBeginPlay");

	AIconRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRig.IconRig_C.DoTeriaryIcons
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           astroVisible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           backpackVisible                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           astroSeated                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRig_C::DoTeriaryIcons(bool astroVisible, bool backpackVisible, bool astroSeated)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRig.IconRig_C.DoTeriaryIcons");

	AIconRig_C_DoTeriaryIcons_Params params;
	params.astroVisible = astroVisible;
	params.backpackVisible = backpackVisible;
	params.astroSeated = astroSeated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconRig.IconRig_C.ExecuteUbergraph_IconRig
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIconRig_C::ExecuteUbergraph_IconRig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconRig.IconRig_C.ExecuteUbergraph_IconRig");

	AIconRig_C_ExecuteUbergraph_IconRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
