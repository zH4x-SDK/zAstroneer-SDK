
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

// Function BackpackRail.BackpackRail_C.GetLeftAuxSlotUnbundleItemCastOrigin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USceneComponent* ABackpackRail_C::GetLeftAuxSlotUnbundleItemCastOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.GetLeftAuxSlotUnbundleItemCastOrigin");

	ABackpackRail_C_GetLeftAuxSlotUnbundleItemCastOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackRail.BackpackRail_C.GetRightAuxSlotUnbundleItemCastOrigin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USceneComponent* ABackpackRail_C::GetRightAuxSlotUnbundleItemCastOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.GetRightAuxSlotUnbundleItemCastOrigin");

	ABackpackRail_C_GetRightAuxSlotUnbundleItemCastOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BackpackRail.BackpackRail_C.CanPrinterReserveSlotAcceptItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanAcceptItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::CanPrinterReserveSlotAcceptItem(class APhysicalItem* Item, bool* CanAcceptItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.CanPrinterReserveSlotAcceptItem");

	ABackpackRail_C_CanPrinterReserveSlotAcceptItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAcceptItem != nullptr)
		*CanAcceptItem = params.CanAcceptItem;
}


// Function BackpackRail.BackpackRail_C.ShouldSpawnWithTerrainTool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ShouldSpawnTerrainTool         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::ShouldSpawnWithTerrainTool(bool* ShouldSpawnTerrainTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.ShouldSpawnWithTerrainTool");

	ABackpackRail_C_ShouldSpawnWithTerrainTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldSpawnTerrainTool != nullptr)
		*ShouldSpawnTerrainTool = params.ShouldSpawnTerrainTool;
}


// Function BackpackRail.BackpackRail_C.AddDeformToolSlotsToSlotRefs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::AddDeformToolSlotsToSlotRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.AddDeformToolSlotsToSlotRefs");

	ABackpackRail_C_AddDeformToolSlotsToSlotRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.UpdateStorageSlotRefs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::UpdateStorageSlotRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.UpdateStorageSlotRefs");

	ABackpackRail_C_UpdateStorageSlotRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.SetBackpackLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::SetBackpackLightVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.SetBackpackLightVisibility");

	ABackpackRail_C_SetBackpackLightVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.GetAstro
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADesignAstro_C*          Astro                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::GetAstro(class ADesignAstro_C** Astro)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.GetAstro");

	ABackpackRail_C_GetAstro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Astro != nullptr)
		*Astro = params.Astro;
}


// Function BackpackRail.BackpackRail_C.GetSedimentHoseRef
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuccesfullyRetrieved           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::GetSedimentHoseRef(bool* SuccesfullyRetrieved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.GetSedimentHoseRef");

	ABackpackRail_C_GetSedimentHoseRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccesfullyRetrieved != nullptr)
		*SuccesfullyRetrieved = params.SuccesfullyRetrieved;
}


// Function BackpackRail.BackpackRail_C.SERVER UpdateSedimentHose
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::SERVER_UpdateSedimentHose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.SERVER UpdateSedimentHose");

	ABackpackRail_C_SERVER_UpdateSedimentHose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.GetBackpackMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*          BackpackMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::GetBackpackMesh(class UMeshComponent** BackpackMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.GetBackpackMesh");

	ABackpackRail_C_GetBackpackMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BackpackMesh != nullptr)
		*BackpackMesh = params.BackpackMesh;
}


// Function BackpackRail.BackpackRail_C.ApplyPlayerColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::ApplyPlayerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.ApplyPlayerColor");

	ABackpackRail_C_ApplyPlayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.GetDeformToolRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::GetDeformToolRef(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.GetDeformToolRef");

	ABackpackRail_C_GetDeformToolRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;
}


// Function BackpackRail.BackpackRail_C.ShowAllItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::ShowAllItems(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.ShowAllItems");

	ABackpackRail_C_ShowAllItems_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Set Control Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::Set_Control_Slot(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Set Control Slot");

	ABackpackRail_C_Set_Control_Slot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Finish Print
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::Finish_Print()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Finish Print");

	ABackpackRail_C_Finish_Print_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.CLIENT Printer View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::CLIENT_Printer_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.CLIENT Printer View");

	ABackpackRail_C_CLIENT_Printer_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.SERVER Bind Printer
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::SERVER_Bind_Printer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.SERVER Bind Printer");

	ABackpackRail_C_SERVER_Bind_Printer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Get Character
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ADesignAstro_C*          Astro                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::Get_Character(class ADesignAstro_C** Astro)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Get Character");

	ABackpackRail_C_Get_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Astro != nullptr)
		*Astro = params.Astro;
}


// Function BackpackRail.BackpackRail_C.Is Powered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Powered                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::Is_Powered(bool* Powered)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Is Powered");

	ABackpackRail_C_Is_Powered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Powered != nullptr)
		*Powered = params.Powered;
}


// Function BackpackRail.BackpackRail_C.CLIENT Set Indicator
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::CLIENT_Set_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.CLIENT Set Indicator");

	ABackpackRail_C_CLIENT_Set_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Backpack Closed
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::Backpack_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Backpack Closed");

	ABackpackRail_C_Backpack_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Backpack Cracked
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::Backpack_Cracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Backpack Cracked");

	ABackpackRail_C_Backpack_Cracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Prereq
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::Prereq()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Prereq");

	ABackpackRail_C_Prereq_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.CLIENT Do Resources
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::CLIENT_Do_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.CLIENT Do Resources");

	ABackpackRail_C_CLIENT_Do_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.SERVER Do Resources
// (Public, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::SERVER_Do_Resources()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.SERVER Do Resources");

	ABackpackRail_C_SERVER_Do_Resources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.CreateTerrainTool
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::CreateTerrainTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.CreateTerrainTool");

	ABackpackRail_C_CreateTerrainTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.UserConstructionScript");

	ABackpackRail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.InpActEvt_NavigateLeft_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackRail_C::InpActEvt_NavigateLeft_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.InpActEvt_NavigateLeft_K2Node_InputActionEvent_3");

	ABackpackRail_C_InpActEvt_NavigateLeft_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.InpActEvt_NavigateRight_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackRail_C::InpActEvt_NavigateRight_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.InpActEvt_NavigateRight_K2Node_InputActionEvent_2");

	ABackpackRail_C_InpActEvt_NavigateRight_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.InpActEvt_Confirm_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackRail_C::InpActEvt_Confirm_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.InpActEvt_Confirm_K2Node_InputActionEvent_1");

	ABackpackRail_C_InpActEvt_Confirm_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABackpackRail_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.ReceiveBeginPlay");

	ABackpackRail_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.ReceiveTick");

	ABackpackRail_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Bind Cracked
// (BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::Bind_Cracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Bind Cracked");

	ABackpackRail_C_Bind_Cracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.OnActivate_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::OnActivate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.OnActivate_Event_1");

	ABackpackRail_C_OnActivate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.OnDeactivate_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::OnDeactivate_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.OnDeactivate_Event_1");

	ABackpackRail_C_OnDeactivate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TouchedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ButtonPressed                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABackpackRail_C::OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.OnClicked_Event_1");

	ABackpackRail_C_OnClicked_Event_1_Params params;
	params.TouchedActor = TouchedActor;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.On Power Depleted
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::On_Power_Depleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.On Power Depleted");

	ABackpackRail_C_On_Power_Depleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.On Power Restored
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::On_Power_Restored()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.On Power Restored");

	ABackpackRail_C_On_Power_Restored_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.On Low Power
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::On_Low_Power()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.On Low Power");

	ABackpackRail_C_On_Low_Power_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.On Fully Charged
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::On_Fully_Charged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.On Fully Charged");

	ABackpackRail_C_On_Fully_Charged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.Bind Printer
// (BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::Bind_Printer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.Bind Printer");

	ABackpackRail_C_Bind_Printer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.OnFinishPrint_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicalItem*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::OnFinishPrint_Event_1(class APhysicalItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.OnFinishPrint_Event_1");

	ABackpackRail_C_OnFinishPrint_Event_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.OnStartPrint_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::OnStartPrint_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.OnStartPrint_Event_1");

	ABackpackRail_C_OnStartPrint_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.OnCancelPrint
// (BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::OnCancelPrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.OnCancelPrint");

	ABackpackRail_C_OnCancelPrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.OnOxygenTankPropertiesChanged
// (Event, Protected, BlueprintEvent)

void ABackpackRail_C::OnOxygenTankPropertiesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.OnOxygenTankPropertiesChanged");

	ABackpackRail_C_OnOxygenTankPropertiesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Oxygen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature(bool Oxygen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature");

	ABackpackRail_C_BndEvt__TetherAttach_K2Node_ComponentBoundEvent_1_OxygenChangeDelegate__DelegateSignature_Params params;
	params.Oxygen = Oxygen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.PlayFinishPrintFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::PlayFinishPrintFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.PlayFinishPrintFX");

	ABackpackRail_C_PlayFinishPrintFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.PlayStartPrintFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::PlayStartPrintFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.PlayStartPrintFX");

	ABackpackRail_C_PlayStartPrintFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.PlayCancelPrintFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABackpackRail_C::PlayCancelPrintFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.PlayCancelPrintFX");

	ABackpackRail_C_PlayCancelPrintFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.HandleCreativeModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::HandleCreativeModeChanged(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.HandleCreativeModeChanged");

	ABackpackRail_C_HandleCreativeModeChanged_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BackpackRail.BackpackRail_C.ExecuteUbergraph_BackpackRail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABackpackRail_C::ExecuteUbergraph_BackpackRail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BackpackRail.BackpackRail_C.ExecuteUbergraph_BackpackRail");

	ABackpackRail_C_ExecuteUbergraph_BackpackRail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
