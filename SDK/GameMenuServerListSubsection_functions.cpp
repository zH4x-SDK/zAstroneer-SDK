
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

// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CreateServerEntryWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAstroServerInfo        serverInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGameMenuEntry_Base_C*   NewWidget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerListSubsection_C::CreateServerEntryWidget(const struct FAstroServerInfo& serverInfo, int Index, class UGameMenuEntry_Base_C** NewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CreateServerEntryWidget");

	UGameMenuServerListSubsection_C_CreateServerEntryWidget_Params params;
	params.serverInfo = serverInfo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewWidget != nullptr)
		*NewWidget = params.NewWidget;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.UpdateRecentServerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuServerListSubsection_C::UpdateRecentServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.UpdateRecentServerList");

	UGameMenuServerListSubsection_C_UpdateRecentServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.UpdateFavoriteServerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuServerListSubsection_C::UpdateFavoriteServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.UpdateFavoriteServerList");

	UGameMenuServerListSubsection_C_UpdateFavoriteServerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuServerListSubsection_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.LayoutWidget");

	UGameMenuServerListSubsection_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.EventManageDedicatedServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* InstigatingWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerListSubsection_C::EventManageDedicatedServer(class UAstroGameMenuFocusItemWidget* InstigatingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.EventManageDedicatedServer");

	UGameMenuServerListSubsection_C_EventManageDedicatedServer_Params params;
	params.InstigatingWidget = InstigatingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.BndEvt__AddDedicatedServer_K2Node_ComponentBoundEvent_244_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerListSubsection_C::BndEvt__AddDedicatedServer_K2Node_ComponentBoundEvent_244_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.BndEvt__AddDedicatedServer_K2Node_ComponentBoundEvent_244_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerListSubsection_C_BndEvt__AddDedicatedServer_K2Node_ComponentBoundEvent_244_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerListSubsection_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CustomEvent_1");

	UGameMenuServerListSubsection_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuServerListSubsection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.Construct");

	UGameMenuServerListSubsection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.ForceMenuRefresh
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerListSubsection_C::ForceMenuRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.ForceMenuRefresh");

	UGameMenuServerListSubsection_C_ForceMenuRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UGameMenuServerListSubsection_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.CustomEvent_2");

	UGameMenuServerListSubsection_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.BndEvt__RentDedicatedServer_K2Node_ComponentBoundEvent_125_OnFocusItemGenericInteraction__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* FocusItemWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerListSubsection_C::BndEvt__RentDedicatedServer_K2Node_ComponentBoundEvent_125_OnFocusItemGenericInteraction__DelegateSignature(class UAstroGameMenuFocusItemWidget* FocusItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.BndEvt__RentDedicatedServer_K2Node_ComponentBoundEvent_125_OnFocusItemGenericInteraction__DelegateSignature");

	UGameMenuServerListSubsection_C_BndEvt__RentDedicatedServer_K2Node_ComponentBoundEvent_125_OnFocusItemGenericInteraction__DelegateSignature_Params params;
	params.FocusItemWidget = FocusItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.ExecuteUbergraph_GameMenuServerListSubsection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerListSubsection_C::ExecuteUbergraph_GameMenuServerListSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerListSubsection.GameMenuServerListSubsection_C.ExecuteUbergraph_GameMenuServerListSubsection");

	UGameMenuServerListSubsection_C_ExecuteUbergraph_GameMenuServerListSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
