
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

// Function Trade_Ship.Trade_Ship_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrade_Ship_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Ship.Trade_Ship_C.UserConstructionScript");

	ATrade_Ship_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Ship.Trade_Ship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature
// (BlueprintEvent)

void ATrade_Ship_C::BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Ship.Trade_Ship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature");

	ATrade_Ship_C_BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Ship.Trade_Ship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature
// (BlueprintEvent)

void ATrade_Ship_C::BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Ship.Trade_Ship_C.BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature");

	ATrade_Ship_C_BndEvt__OrbitalNavigation_K2Node_ComponentBoundEvent_1_Signal__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trade_Ship.Trade_Ship_C.ExecuteUbergraph_Trade_Ship
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrade_Ship_C::ExecuteUbergraph_Trade_Ship(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trade_Ship.Trade_Ship_C.ExecuteUbergraph_Trade_Ship");

	ATrade_Ship_C_ExecuteUbergraph_Trade_Ship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
