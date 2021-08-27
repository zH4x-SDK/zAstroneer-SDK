
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

// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlatformAwareKeyImage_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.PreConstruct");

	UWBP_PlatformAwareKeyImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlatformAwareKeyImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.Construct");

	UWBP_PlatformAwareKeyImage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.OnInputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlatformAwareKeyImage_C::OnInputDeviceChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.OnInputDeviceChanged");

	UWBP_PlatformAwareKeyImage_C_OnInputDeviceChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.ExecuteUbergraph_WBP_PlatformAwareKeyImage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlatformAwareKeyImage_C::ExecuteUbergraph_WBP_PlatformAwareKeyImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformAwareKeyImage.WBP_PlatformAwareKeyImage_C.ExecuteUbergraph_WBP_PlatformAwareKeyImage");

	UWBP_PlatformAwareKeyImage_C_ExecuteUbergraph_WBP_PlatformAwareKeyImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
