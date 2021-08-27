
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

// Function PlayWidgetInstance.PlayWidgetInstance_C.Get_HealthImage_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UPlayWidgetInstance_C::Get_HealthImage_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayWidgetInstance.PlayWidgetInstance_C.Get_HealthImage_ColorAndOpacity_1");

	UPlayWidgetInstance_C_Get_HealthImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayWidgetInstance.PlayWidgetInstance_C.EnableEscape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayWidgetInstance_C::EnableEscape(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayWidgetInstance.PlayWidgetInstance_C.EnableEscape");

	UPlayWidgetInstance_C_EnableEscape_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
