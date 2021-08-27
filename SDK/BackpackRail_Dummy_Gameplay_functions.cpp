
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

// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UpdateStorageSlotRefs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::UpdateStorageSlotRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UpdateStorageSlotRefs");

	ABackpackRail_Dummy_Gameplay_C_UpdateStorageSlotRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckNeedExtenderTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CheckNeedExtenderTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckNeedExtenderTutorial");

	ABackpackRail_Dummy_Gameplay_C_CheckNeedExtenderTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER UpdateExtenderTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::SERVER_UpdateExtenderTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER UpdateExtenderTutorial");

	ABackpackRail_Dummy_Gameplay_C_SERVER_UpdateExtenderTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SetBackpackLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::SetBackpackLightVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SetBackpackLightVisibility");

	ABackpackRail_Dummy_Gameplay_C_SetBackpackLightVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckShowAuxSlotPrompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CheckShowAuxSlotPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckShowAuxSlotPrompts");

	ABackpackRail_Dummy_Gameplay_C_CheckShowAuxSlotPrompts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetAstro
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADesignAstro_C*          Astro                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::GetAstro(class ADesignAstro_C** Astro)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetAstro");

	ABackpackRail_Dummy_Gameplay_C_GetAstro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Astro != nullptr)
		*Astro = params.Astro;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckForTutorialResources
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CheckForTutorialResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckForTutorialResources");

	ABackpackRail_Dummy_Gameplay_C_CheckForTutorialResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UpdateTutorialPrinterList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CompleteCurrentTutorialStep    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::UpdateTutorialPrinterList(bool CompleteCurrentTutorialStep, bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UpdateTutorialPrinterList");

	ABackpackRail_Dummy_Gameplay_C_UpdateTutorialPrinterList_Params params;
	params.CompleteCurrentTutorialStep = CompleteCurrentTutorialStep;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckSetupTutorialPrinterList
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CheckSetupTutorialPrinterList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CheckSetupTutorialPrinterList");

	ABackpackRail_Dummy_Gameplay_C_CheckSetupTutorialPrinterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetSedimentHoseRef
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccesfullyRetrieved           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::GetSedimentHoseRef(bool* SuccesfullyRetrieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetSedimentHoseRef");

	ABackpackRail_Dummy_Gameplay_C_GetSedimentHoseRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccesfullyRetrieved != nullptr)
		*SuccesfullyRetrieved = params.SuccesfullyRetrieved;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER UpdateSedimentHose
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::SERVER_UpdateSedimentHose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER UpdateSedimentHose");

	ABackpackRail_Dummy_Gameplay_C_SERVER_UpdateSedimentHose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetBackpackMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          BackpackMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::GetBackpackMesh(class UMeshComponent** BackpackMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetBackpackMesh");

	ABackpackRail_Dummy_Gameplay_C_GetBackpackMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BackpackMesh != nullptr)
		*BackpackMesh = params.BackpackMesh;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.ApplyPlayerColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::ApplyPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.ApplyPlayerColor");

	ABackpackRail_Dummy_Gameplay_C_ApplyPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetDeformToolRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::GetDeformToolRef(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.GetDeformToolRef");

	ABackpackRail_Dummy_Gameplay_C_GetDeformToolRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.ShowAllItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::ShowAllItems(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.ShowAllItems");

	ABackpackRail_Dummy_Gameplay_C_ShowAllItems_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Set Control Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::Set_Control_Slot(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Set Control Slot");

	ABackpackRail_Dummy_Gameplay_C_Set_Control_Slot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Finish Print
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::Finish_Print()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Finish Print");

	ABackpackRail_Dummy_Gameplay_C_Finish_Print_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Printer View
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CLIENT_Printer_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Printer View");

	ABackpackRail_Dummy_Gameplay_C_CLIENT_Printer_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER Bind Printer
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::SERVER_Bind_Printer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER Bind Printer");

	ABackpackRail_Dummy_Gameplay_C_SERVER_Bind_Printer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Get Character
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADesignAstro_C*          Astro                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::Get_Character(class ADesignAstro_C** Astro)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Get Character");

	ABackpackRail_Dummy_Gameplay_C_Get_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Astro != nullptr)
		*Astro = params.Astro;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Is Powered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Powered                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_Dummy_Gameplay_C::Is_Powered(bool* Powered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Is Powered");

	ABackpackRail_Dummy_Gameplay_C_Is_Powered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Powered != nullptr)
		*Powered = params.Powered;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Set Indicator
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CLIENT_Set_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Set Indicator");

	ABackpackRail_Dummy_Gameplay_C_CLIENT_Set_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Backpack Closed
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::Backpack_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Backpack Closed");

	ABackpackRail_Dummy_Gameplay_C_Backpack_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Backpack Cracked
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::Backpack_Cracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Backpack Cracked");

	ABackpackRail_Dummy_Gameplay_C_Backpack_Cracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Prereq
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::Prereq()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.Prereq");

	ABackpackRail_Dummy_Gameplay_C_Prereq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Do Resources
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CLIENT_Do_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CLIENT Do Resources");

	ABackpackRail_Dummy_Gameplay_C_CLIENT_Do_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER Do Resources
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::SERVER_Do_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.SERVER Do Resources");

	ABackpackRail_Dummy_Gameplay_C_SERVER_Do_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CreateDefaultResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::CreateDefaultResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.CreateDefaultResources");

	ABackpackRail_Dummy_Gameplay_C_CreateDefaultResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_Dummy_Gameplay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail_Dummy_Gameplay.BackpackRail_Dummy_Gameplay_C.UserConstructionScript");

	ABackpackRail_Dummy_Gameplay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
