
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

// Function HazcomBouncer_Lily_AnimBP.HazcomBouncer_Lily_AnimBP_C.ExecuteUbergraph_HazcomBouncer_Lily_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHazcomBouncer_Lily_AnimBP_C::ExecuteUbergraph_HazcomBouncer_Lily_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HazcomBouncer_Lily_AnimBP.HazcomBouncer_Lily_AnimBP_C.ExecuteUbergraph_HazcomBouncer_Lily_AnimBP");

	UHazcomBouncer_Lily_AnimBP_C_ExecuteUbergraph_HazcomBouncer_Lily_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
