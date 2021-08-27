#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AstroPlayFab.AstroClientDataManager
// 0x0000 (0x0028 - 0x0028)
class UAstroClientDataManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFab.AstroClientDataManager");
		return ptr;
	}


	void STATIC_UpdateServerPassword(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& Password);
	void STATIC_UpdateServerNickname(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& NickName);
	bool STATIC_TryGetInventoryItemForAssetPath(const struct FString& AssetPath, struct FAstroInventoryItem* inventoryItem);
	void STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds);
	void STATIC_SetDirty();
	bool STATIC_RemoveRecentServer(class UObject* WorldContextObject, const struct FString& ServerURL);
	bool STATIC_RemoveFavoriteServer(class UObject* WorldContextObject, const struct FString& ServerURL);
	bool STATIC_RefreshRecentServer(class UObject* WorldContextObject, const struct FString& Password);
	int STATIC_GetUpdateDelay();
	TArray<struct FAstroServerListDetails> STATIC_GetServerDetailsList();
	TArray<struct FAstroServerListDetails> STATIC_GetRecentServers();
	TArray<struct FAstroServerListDetails> STATIC_GetFavoriteServers();
	struct FAstroPlayFabClientData STATIC_GetClientData();
	void STATIC_ForceRefresh(class UObject* WorldContextObject);
	void STATIC_EnableAutoRefresh(class UObject* WorldContextObject, bool refreshImmediately);
	void STATIC_DisableAutoRefresh(class UObject* WorldContextObject);
	bool STATIC_ClearRecentServers(class UObject* WorldContextObject);
	bool STATIC_ClearFavoriteServers(class UObject* WorldContextObject);
	void STATIC_AddRecentServer(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& NickName);
	void STATIC_AddFavoriteServer(class UObject* WorldContextObject, const struct FString& ServerURL, const struct FString& NickName);
};


// Class AstroPlayFab.AstroMicroTxnStoreDataManager
// 0x0000 (0x0028 - 0x0028)
class UAstroMicroTxnStoreDataManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFab.AstroMicroTxnStoreDataManager");
		return ptr;
	}


	void STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds);
	int STATIC_GetUpdateDelay();
	struct FAstroPlayFabMicroTxnStoreData STATIC_GetMicroTxnStoreData();
	void STATIC_ForceRefresh(class UObject* WorldContextObject);
	void STATIC_EnableAutoRefresh(class UObject* WorldContextObject, bool refreshImmediately);
	void STATIC_DisableAutoRefresh(class UObject* WorldContextObject);
};


// Class AstroPlayFab.AstroPlayFab
// 0x0048 (0x0070 - 0x0028)
class UAstroPlayFab : public UObject
{
public:
	struct FString                                     TitleId;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Endpoint;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               CreateAccount;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EmailAddress;                                             // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Password;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFab.AstroPlayFab");
		return ptr;
	}

};


// Class AstroPlayFab.AstroPlayFabEventNotificationComponent
// 0x0078 (0x0168 - 0x00F0)
class UAstroPlayFabEventNotificationComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReceivedInitialEventActiveStatus;                         // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventOfInterestActiveStatusChanged;                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0110(0x0050) UNKNOWN PROPERTY: SetProperty AstroPlayFab.AstroPlayFabEventNotificationComponent.EventsOfInterest
	unsigned char                                      UnknownData01[0x8];                                       // 0x0160(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFab.AstroPlayFabEventNotificationComponent");
		return ptr;
	}


	void OnEventStatusChanged();
};


// Class AstroPlayFab.AstroTestPlayFabEventData
// 0x0078 (0x00A8 - 0x0030)
class UAstroTestPlayFabEventData : public UDataAsset
{
public:
	struct FAstroPlayFabEventData                      TestData;                                                 // 0x0030(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFab.AstroTestPlayFabEventData");
		return ptr;
	}

};


// Class AstroPlayFab.AstroServerListManager
// 0x0000 (0x0028 - 0x0028)
class UAstroServerListManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFab.AstroServerListManager");
		return ptr;
	}


	void STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds);
	bool STATIC_IsUsingPreferredDedicatedServer(class UObject* WorldContextObject);
	bool STATIC_HasCurrentDedicatedServerInfo(class UObject* WorldContextObject);
	int STATIC_GetUpdateDelay();
	TArray<struct FAstroServerInfo> STATIC_GetServerList();
	TArray<struct FAstroServerInfo> STATIC_GetRecentOnlineServers();
	TArray<struct FAstroServerInfo> STATIC_GetFavoriteOnlineServers();
	struct FAstroServerInfo STATIC_GetCurrentDedicatedServerInfo(class UObject* WorldContextObject);
	void STATIC_ForceRefresh(class UObject* WorldContextObject);
	void STATIC_EnableAutoRefresh(class UObject* WorldContextObject);
	void STATIC_DisableAutoRefresh(class UObject* WorldContextObject);
};


// Class AstroPlayFab.AstroTitleDataManager
// 0x0000 (0x0028 - 0x0028)
class UAstroTitleDataManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroPlayFab.AstroTitleDataManager");
		return ptr;
	}


	void STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds);
	int STATIC_GetUpdateDelay();
	struct FAstroPlayFabTitleData STATIC_GetTitleData();
	void STATIC_ForceRefresh(class UObject* WorldContextObject);
	void STATIC_EnableAutoRefresh(class UObject* WorldContextObject, bool refreshImmediately);
	void STATIC_DisableAutoRefresh(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
