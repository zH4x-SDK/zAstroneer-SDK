
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

// Function ResourceBundle.ResourceBundle_C.SetInstancedMeshVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceBundle_C::SetInstancedMeshVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceBundle.ResourceBundle_C.SetInstancedMeshVisible");

	AResourceBundle_C_SetInstancedMeshVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceBundle.ResourceBundle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceBundle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceBundle.ResourceBundle_C.UserConstructionScript");

	AResourceBundle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceBundle.ResourceBundle_C.SetView
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AResourceBundle_C::SetView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceBundle.ResourceBundle_C.SetView");

	AResourceBundle_C_SetView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceBundle.ResourceBundle_C.Instance Removed
// (BlueprintCallable, BlueprintEvent)

void AResourceBundle_C::Instance_Removed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceBundle.ResourceBundle_C.Instance Removed");

	AResourceBundle_C_Instance_Removed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResourceBundle.ResourceBundle_C.ExecuteUbergraph_ResourceBundle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AResourceBundle_C::ExecuteUbergraph_ResourceBundle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResourceBundle.ResourceBundle_C.ExecuteUbergraph_ResourceBundle");

	AResourceBundle_C_ExecuteUbergraph_ResourceBundle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
