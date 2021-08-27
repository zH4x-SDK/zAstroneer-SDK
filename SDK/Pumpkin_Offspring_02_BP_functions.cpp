
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

// Function Pumpkin_Offspring_02_BP.Pumpkin_Offspring_02_BP_C.SelectSeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  NewVar_1                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APumpkin_Offspring_02_BP_C::SelectSeed(class UClass** NewVar_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Offspring_02_BP.Pumpkin_Offspring_02_BP_C.SelectSeed");

	APumpkin_Offspring_02_BP_C_SelectSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewVar_1 != nullptr)
		*NewVar_1 = params.NewVar_1;
}


// Function Pumpkin_Offspring_02_BP.Pumpkin_Offspring_02_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APumpkin_Offspring_02_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pumpkin_Offspring_02_BP.Pumpkin_Offspring_02_BP_C.UserConstructionScript");

	APumpkin_Offspring_02_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
