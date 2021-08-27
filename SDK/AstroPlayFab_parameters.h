#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AstroPlayFab.AstroClientDataManager.UpdateServerPassword
struct UAstroClientDataManager_UpdateServerPassword_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
};

// Function AstroPlayFab.AstroClientDataManager.UpdateServerNickname
struct UAstroClientDataManager_UpdateServerNickname_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     NickName;                                                 // (Parm, ZeroConstructor)
};

// Function AstroPlayFab.AstroClientDataManager.TryGetInventoryItemForAssetPath
struct UAstroClientDataManager_TryGetInventoryItemForAssetPath_Params
{
	struct FString                                     AssetPath;                                                // (Parm, ZeroConstructor)
	struct FAstroInventoryItem                         inventoryItem;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.SetUpdateDelay
struct UAstroClientDataManager_SetUpdateDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                delayInSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.SetDirty
struct UAstroClientDataManager_SetDirty_Params
{
};

// Function AstroPlayFab.AstroClientDataManager.RemoveRecentServer
struct UAstroClientDataManager_RemoveRecentServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.RemoveFavoriteServer
struct UAstroClientDataManager_RemoveFavoriteServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.RefreshRecentServer
struct UAstroClientDataManager_RefreshRecentServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.GetUpdateDelay
struct UAstroClientDataManager_GetUpdateDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.GetServerDetailsList
struct UAstroClientDataManager_GetServerDetailsList_Params
{
	TArray<struct FAstroServerListDetails>             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function AstroPlayFab.AstroClientDataManager.GetRecentServers
struct UAstroClientDataManager_GetRecentServers_Params
{
	TArray<struct FAstroServerListDetails>             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFab.AstroClientDataManager.GetFavoriteServers
struct UAstroClientDataManager_GetFavoriteServers_Params
{
	TArray<struct FAstroServerListDetails>             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFab.AstroClientDataManager.GetClientData
struct UAstroClientDataManager_GetClientData_Params
{
	struct FAstroPlayFabClientData                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AstroPlayFab.AstroClientDataManager.ForceRefresh
struct UAstroClientDataManager_ForceRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.EnableAutoRefresh
struct UAstroClientDataManager_EnableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               refreshImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.DisableAutoRefresh
struct UAstroClientDataManager_DisableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.ClearRecentServers
struct UAstroClientDataManager_ClearRecentServers_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.ClearFavoriteServers
struct UAstroClientDataManager_ClearFavoriteServers_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroClientDataManager.AddRecentServer
struct UAstroClientDataManager_AddRecentServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     NickName;                                                 // (Parm, ZeroConstructor)
};

// Function AstroPlayFab.AstroClientDataManager.AddFavoriteServer
struct UAstroClientDataManager_AddFavoriteServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerURL;                                                // (Parm, ZeroConstructor)
	struct FString                                     NickName;                                                 // (Parm, ZeroConstructor)
};

// Function AstroPlayFab.AstroMicroTxnStoreDataManager.SetUpdateDelay
struct UAstroMicroTxnStoreDataManager_SetUpdateDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                delayInSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroMicroTxnStoreDataManager.GetUpdateDelay
struct UAstroMicroTxnStoreDataManager_GetUpdateDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroMicroTxnStoreDataManager.GetMicroTxnStoreData
struct UAstroMicroTxnStoreDataManager_GetMicroTxnStoreData_Params
{
	struct FAstroPlayFabMicroTxnStoreData              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AstroPlayFab.AstroMicroTxnStoreDataManager.ForceRefresh
struct UAstroMicroTxnStoreDataManager_ForceRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroMicroTxnStoreDataManager.EnableAutoRefresh
struct UAstroMicroTxnStoreDataManager_EnableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               refreshImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroMicroTxnStoreDataManager.DisableAutoRefresh
struct UAstroMicroTxnStoreDataManager_DisableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroPlayFabEventNotificationComponent.OnEventStatusChanged
struct UAstroPlayFabEventNotificationComponent_OnEventStatusChanged_Params
{
};

// Function AstroPlayFab.AstroServerListManager.SetUpdateDelay
struct UAstroServerListManager_SetUpdateDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                delayInSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroServerListManager.IsUsingPreferredDedicatedServer
struct UAstroServerListManager_IsUsingPreferredDedicatedServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroServerListManager.HasCurrentDedicatedServerInfo
struct UAstroServerListManager_HasCurrentDedicatedServerInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroServerListManager.GetUpdateDelay
struct UAstroServerListManager_GetUpdateDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroServerListManager.GetServerList
struct UAstroServerListManager_GetServerList_Params
{
	TArray<struct FAstroServerInfo>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFab.AstroServerListManager.GetRecentOnlineServers
struct UAstroServerListManager_GetRecentOnlineServers_Params
{
	TArray<struct FAstroServerInfo>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFab.AstroServerListManager.GetFavoriteOnlineServers
struct UAstroServerListManager_GetFavoriteOnlineServers_Params
{
	TArray<struct FAstroServerInfo>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroPlayFab.AstroServerListManager.GetCurrentDedicatedServerInfo
struct UAstroServerListManager_GetCurrentDedicatedServerInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroServerInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AstroPlayFab.AstroServerListManager.ForceRefresh
struct UAstroServerListManager_ForceRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroServerListManager.EnableAutoRefresh
struct UAstroServerListManager_EnableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroServerListManager.DisableAutoRefresh
struct UAstroServerListManager_DisableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroTitleDataManager.SetUpdateDelay
struct UAstroTitleDataManager_SetUpdateDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                delayInSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroTitleDataManager.GetUpdateDelay
struct UAstroTitleDataManager_GetUpdateDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroPlayFab.AstroTitleDataManager.GetTitleData
struct UAstroTitleDataManager_GetTitleData_Params
{
	struct FAstroPlayFabTitleData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AstroPlayFab.AstroTitleDataManager.ForceRefresh
struct UAstroTitleDataManager_ForceRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroTitleDataManager.EnableAutoRefresh
struct UAstroTitleDataManager_EnableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               refreshImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroPlayFab.AstroTitleDataManager.DisableAutoRefresh
struct UAstroTitleDataManager_DisableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
