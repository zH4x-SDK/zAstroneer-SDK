
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

// Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.UpdateServerStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuServerInfoSubsection_C::UpdateServerStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.UpdateServerStats");

	UGameMenuServerInfoSubsection_C_UpdateServerStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.UpdateConnectedPlayersList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGameMenuServerInfoSubsection_C::UpdateConnectedPlayersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.UpdateConnectedPlayersList");

	UGameMenuServerInfoSubsection_C_UpdateConnectedPlayersList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.LayoutWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameMenuServerInfoSubsection_C::LayoutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.LayoutWidget");

	UGameMenuServerInfoSubsection_C_LayoutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMenuServerInfoSubsection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.Construct");

	UGameMenuServerInfoSubsection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.EventManageConnectedPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAstroGameMenuFocusItemWidget* InstigatingWidget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerInfoSubsection_C::EventManageConnectedPlayer(class UAstroGameMenuFocusItemWidget* InstigatingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.EventManageConnectedPlayer");

	UGameMenuServerInfoSubsection_C_EventManageConnectedPlayer_Params params;
	params.InstigatingWidget = InstigatingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerStatistics       ServerStatistics               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGameMenuServerInfoSubsection_C::CustomEvent_1(const struct FServerStatistics& ServerStatistics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.CustomEvent_1");

	UGameMenuServerInfoSubsection_C_CustomEvent_1_Params params;
	params.ServerStatistics = ServerStatistics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.ExecuteUbergraph_GameMenuServerInfoSubsection
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMenuServerInfoSubsection_C::ExecuteUbergraph_GameMenuServerInfoSubsection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMenuServerInfoSubsection.GameMenuServerInfoSubsection_C.ExecuteUbergraph_GameMenuServerInfoSubsection");

	UGameMenuServerInfoSubsection_C_ExecuteUbergraph_GameMenuServerInfoSubsection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
