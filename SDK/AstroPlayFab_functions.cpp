
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

// Function AstroPlayFab.AstroClientDataManager.UpdateServerPassword
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// struct FString                 Password                       (Parm, ZeroConstructor)

void UAstroClientDataManager::STATIC_UpdateServerPassword(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.UpdateServerPassword");

	UAstroClientDataManager_UpdateServerPassword_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerURL = ServerURL;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.UpdateServerNickname
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// struct FString                 NickName                       (Parm, ZeroConstructor)

void UAstroClientDataManager::STATIC_UpdateServerNickname(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& NickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.UpdateServerNickname");

	UAstroClientDataManager_UpdateServerNickname_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerURL = ServerURL;
	params.NickName = NickName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.TryGetInventoryItemForAssetPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 AssetPath                      (Parm, ZeroConstructor)
// struct FAstroInventoryItem     inventoryItem                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroClientDataManager::STATIC_TryGetInventoryItemForAssetPath(const struct FString& AssetPath, struct FAstroInventoryItem* inventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.TryGetInventoryItemForAssetPath");

	UAstroClientDataManager_TryGetInventoryItemForAssetPath_Params params;
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inventoryItem != nullptr)
		*inventoryItem = params.inventoryItem;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.SetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            delayInSeconds                 (Parm, ZeroConstructor, IsPlainOldData)

void UAstroClientDataManager::STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.SetUpdateDelay");

	UAstroClientDataManager_SetUpdateDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.delayInSeconds = delayInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.SetDirty
// (Final, Native, Static, Public, BlueprintCallable)

void UAstroClientDataManager::STATIC_SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.SetDirty");

	UAstroClientDataManager_SetDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.RemoveRecentServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroClientDataManager::STATIC_RemoveRecentServer(class UObject* WorldContextObject, const struct FString& ServerURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.RemoveRecentServer");

	UAstroClientDataManager_RemoveRecentServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerURL = ServerURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.RemoveFavoriteServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroClientDataManager::STATIC_RemoveFavoriteServer(class UObject* WorldContextObject, const struct FString& ServerURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.RemoveFavoriteServer");

	UAstroClientDataManager_RemoveFavoriteServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerURL = ServerURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.RefreshRecentServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Password                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroClientDataManager::STATIC_RefreshRecentServer(class UObject* WorldContextObject, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.RefreshRecentServer");

	UAstroClientDataManager_RefreshRecentServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.GetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAstroClientDataManager::STATIC_GetUpdateDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.GetUpdateDelay");

	UAstroClientDataManager_GetUpdateDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.GetServerDetailsList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroServerListDetails> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FAstroServerListDetails> UAstroClientDataManager::STATIC_GetServerDetailsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.GetServerDetailsList");

	UAstroClientDataManager_GetServerDetailsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.GetRecentServers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroServerListDetails> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroServerListDetails> UAstroClientDataManager::STATIC_GetRecentServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.GetRecentServers");

	UAstroClientDataManager_GetRecentServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.GetFavoriteServers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroServerListDetails> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroServerListDetails> UAstroClientDataManager::STATIC_GetFavoriteServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.GetFavoriteServers");

	UAstroClientDataManager_GetFavoriteServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.GetClientData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAstroPlayFabClientData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAstroPlayFabClientData UAstroClientDataManager::STATIC_GetClientData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.GetClientData");

	UAstroClientDataManager_GetClientData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.ForceRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroClientDataManager::STATIC_ForceRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.ForceRefresh");

	UAstroClientDataManager_ForceRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.EnableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           refreshImmediately             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroClientDataManager::STATIC_EnableAutoRefresh(class UObject* WorldContextObject, bool refreshImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.EnableAutoRefresh");

	UAstroClientDataManager_EnableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;
	params.refreshImmediately = refreshImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.DisableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroClientDataManager::STATIC_DisableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.DisableAutoRefresh");

	UAstroClientDataManager_DisableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.ClearRecentServers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroClientDataManager::STATIC_ClearRecentServers(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.ClearRecentServers");

	UAstroClientDataManager_ClearRecentServers_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.ClearFavoriteServers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroClientDataManager::STATIC_ClearFavoriteServers(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.ClearFavoriteServers");

	UAstroClientDataManager_ClearFavoriteServers_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroClientDataManager.AddRecentServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// struct FString                 NickName                       (Parm, ZeroConstructor)

void UAstroClientDataManager::STATIC_AddRecentServer(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& NickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.AddRecentServer");

	UAstroClientDataManager_AddRecentServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerURL = ServerURL;
	params.NickName = NickName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroClientDataManager.AddFavoriteServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// struct FString                 NickName                       (Parm, ZeroConstructor)

void UAstroClientDataManager::STATIC_AddFavoriteServer(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& NickName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroClientDataManager.AddFavoriteServer");

	UAstroClientDataManager_AddFavoriteServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServerURL = ServerURL;
	params.NickName = NickName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroMicroTxnStoreDataManager.SetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            delayInSeconds                 (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMicroTxnStoreDataManager::STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroMicroTxnStoreDataManager.SetUpdateDelay");

	UAstroMicroTxnStoreDataManager_SetUpdateDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.delayInSeconds = delayInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroMicroTxnStoreDataManager.GetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAstroMicroTxnStoreDataManager::STATIC_GetUpdateDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroMicroTxnStoreDataManager.GetUpdateDelay");

	UAstroMicroTxnStoreDataManager_GetUpdateDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroMicroTxnStoreDataManager.GetMicroTxnStoreData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAstroPlayFabMicroTxnStoreData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAstroPlayFabMicroTxnStoreData UAstroMicroTxnStoreDataManager::STATIC_GetMicroTxnStoreData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroMicroTxnStoreDataManager.GetMicroTxnStoreData");

	UAstroMicroTxnStoreDataManager_GetMicroTxnStoreData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroMicroTxnStoreDataManager.ForceRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMicroTxnStoreDataManager::STATIC_ForceRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroMicroTxnStoreDataManager.ForceRefresh");

	UAstroMicroTxnStoreDataManager_ForceRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroMicroTxnStoreDataManager.EnableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           refreshImmediately             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMicroTxnStoreDataManager::STATIC_EnableAutoRefresh(class UObject* WorldContextObject, bool refreshImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroMicroTxnStoreDataManager.EnableAutoRefresh");

	UAstroMicroTxnStoreDataManager_EnableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;
	params.refreshImmediately = refreshImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroMicroTxnStoreDataManager.DisableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMicroTxnStoreDataManager::STATIC_DisableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroMicroTxnStoreDataManager.DisableAutoRefresh");

	UAstroMicroTxnStoreDataManager_DisableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroPlayFabEventNotificationComponent.OnEventStatusChanged
// (Final, Native, Public)

void UAstroPlayFabEventNotificationComponent::OnEventStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroPlayFabEventNotificationComponent.OnEventStatusChanged");

	UAstroPlayFabEventNotificationComponent_OnEventStatusChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroServerListManager.SetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            delayInSeconds                 (Parm, ZeroConstructor, IsPlainOldData)

void UAstroServerListManager::STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.SetUpdateDelay");

	UAstroServerListManager_SetUpdateDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.delayInSeconds = delayInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroServerListManager.IsUsingPreferredDedicatedServer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroServerListManager::STATIC_IsUsingPreferredDedicatedServer(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.IsUsingPreferredDedicatedServer");

	UAstroServerListManager_IsUsingPreferredDedicatedServer_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroServerListManager.HasCurrentDedicatedServerInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroServerListManager::STATIC_HasCurrentDedicatedServerInfo(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.HasCurrentDedicatedServerInfo");

	UAstroServerListManager_HasCurrentDedicatedServerInfo_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroServerListManager.GetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAstroServerListManager::STATIC_GetUpdateDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.GetUpdateDelay");

	UAstroServerListManager_GetUpdateDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroServerListManager.GetServerList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroServerInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroServerInfo> UAstroServerListManager::STATIC_GetServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.GetServerList");

	UAstroServerListManager_GetServerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroServerListManager.GetRecentOnlineServers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroServerInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroServerInfo> UAstroServerListManager::STATIC_GetRecentOnlineServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.GetRecentOnlineServers");

	UAstroServerListManager_GetRecentOnlineServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroServerListManager.GetFavoriteOnlineServers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAstroServerInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroServerInfo> UAstroServerListManager::STATIC_GetFavoriteOnlineServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.GetFavoriteOnlineServers");

	UAstroServerListManager_GetFavoriteOnlineServers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroServerListManager.GetCurrentDedicatedServerInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroServerInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAstroServerInfo UAstroServerListManager::STATIC_GetCurrentDedicatedServerInfo(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.GetCurrentDedicatedServerInfo");

	UAstroServerListManager_GetCurrentDedicatedServerInfo_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroServerListManager.ForceRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroServerListManager::STATIC_ForceRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.ForceRefresh");

	UAstroServerListManager_ForceRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroServerListManager.EnableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroServerListManager::STATIC_EnableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.EnableAutoRefresh");

	UAstroServerListManager_EnableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroServerListManager.DisableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroServerListManager::STATIC_DisableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroServerListManager.DisableAutoRefresh");

	UAstroServerListManager_DisableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroTitleDataManager.SetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            delayInSeconds                 (Parm, ZeroConstructor, IsPlainOldData)

void UAstroTitleDataManager::STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroTitleDataManager.SetUpdateDelay");

	UAstroTitleDataManager_SetUpdateDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.delayInSeconds = delayInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroTitleDataManager.GetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAstroTitleDataManager::STATIC_GetUpdateDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroTitleDataManager.GetUpdateDelay");

	UAstroTitleDataManager_GetUpdateDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroTitleDataManager.GetTitleData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAstroPlayFabTitleData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAstroPlayFabTitleData UAstroTitleDataManager::STATIC_GetTitleData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroTitleDataManager.GetTitleData");

	UAstroTitleDataManager_GetTitleData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroPlayFab.AstroTitleDataManager.ForceRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroTitleDataManager::STATIC_ForceRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroTitleDataManager.ForceRefresh");

	UAstroTitleDataManager_ForceRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroTitleDataManager.EnableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           refreshImmediately             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroTitleDataManager::STATIC_EnableAutoRefresh(class UObject* WorldContextObject, bool refreshImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroTitleDataManager.EnableAutoRefresh");

	UAstroTitleDataManager_EnableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;
	params.refreshImmediately = refreshImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroPlayFab.AstroTitleDataManager.DisableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroTitleDataManager::STATIC_DisableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroPlayFab.AstroTitleDataManager.DisableAutoRefresh");

	UAstroTitleDataManager_DisableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
