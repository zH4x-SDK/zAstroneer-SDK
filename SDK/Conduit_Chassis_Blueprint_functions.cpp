
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

// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.RedirectOldClasses
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InClass                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutClass                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AConduit_Chassis_Blueprint_C::RedirectOldClasses(class UClass* InClass, class UClass** OutClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.RedirectOldClasses");

	AConduit_Chassis_Blueprint_C_RedirectOldClasses_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClass != nullptr)
		*OutClass = params.OutClass;
}


// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AConduit_Chassis_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.UserConstructionScript");

	AConduit_Chassis_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AConduit_Chassis_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.ReceiveBeginPlay");

	AConduit_Chassis_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.ExecuteUbergraph_Conduit_Chassis_Blueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AConduit_Chassis_Blueprint_C::ExecuteUbergraph_Conduit_Chassis_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Conduit_Chassis_Blueprint.Conduit_Chassis_Blueprint_C.ExecuteUbergraph_Conduit_Chassis_Blueprint");

	AConduit_Chassis_Blueprint_C_ExecuteUbergraph_Conduit_Chassis_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
