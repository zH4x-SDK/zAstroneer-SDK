#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AstroPlayFab.AstroInventoryItem
// 0x0080
struct FAstroInventoryItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     ItemInstanceId;                                           // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     AssetPath;                                                // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	TMap<struct FString, struct FString>               ExtendedData;                                             // 0x0030(0x0050) (ZeroConstructor, SaveGame)
};

// ScriptStruct AstroPlayFab.AstroServerListDetails
// 0x0040
struct FAstroServerListDetails
{
	struct FString                                     NickName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   Timestamp;                                                // 0x0010(0x0008)
	struct FString                                     IpPort;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Password;                                                 // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      IsFavorite : 1;                                           // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFab.AstroPlayFabClientCustomization
// 0x0060
struct FAstroPlayFabClientCustomization
{
	struct FString                                     Palette;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     Suit;                                                     // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     Visor;                                                    // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     Pattern;                                                  // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     Hat;                                                      // 0x0040(0x0010) (ZeroConstructor, SaveGame)
	struct FString                                     Mask;                                                     // 0x0050(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct AstroPlayFab.AstroPlayFabCollectionProgress
// 0x0010
struct FAstroPlayFabCollectionProgress
{
	TArray<struct FString>                             Collected;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroPlayFabAchievementProgress
// 0x00F0
struct FAstroPlayFabAchievementProgress
{
	TMap<struct FString, int>                          CountProgress;                                            // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FString, float>                        FloatProgress;                                            // 0x0050(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FAstroPlayFabCollectionProgress> CollectionProgress;                                       // 0x00A0(0x0050) (ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroPlayFabUserData
// 0x0230
struct FAstroPlayFabUserData
{
	struct FAstroPlayFabClientCustomization            Customization;                                            // 0x0000(0x0060) (SaveGame)
	TArray<struct FString>                             Emotes;                                                   // 0x0060(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FAstroServerListDetails>             ServerListDetails;                                        // 0x0070(0x0010) (ZeroConstructor)
	TMap<struct FString, struct FString>               FavoriteServers;                                          // 0x0080(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FAstroServerListDetails> RecentServers;                                            // 0x00D0(0x0050) (ZeroConstructor)
	struct FAstroPlayFabAchievementProgress            AchievementProgress;                                      // 0x0120(0x00F0)
	TArray<struct FGuid>                               ItemDriveSubmissionIDs;                                   // 0x0210(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   EarnedItemDrivePhysicalRewardHashes;                      // 0x0220(0x0010) (ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroPlayFabUserReadOnlyData
// 0x0010
struct FAstroPlayFabUserReadOnlyData
{
	TArray<struct FString>                             Unlocked;                                                 // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct AstroPlayFab.AstroPlayFabInventory
// 0x00B0
struct FAstroPlayFabInventory
{
	TArray<struct FAstroInventoryItem>                 Items;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TMap<struct FString, struct FAstroInventoryItem>   UnlockedAssetsByPath;                                     // 0x0010(0x0050) (ZeroConstructor, SaveGame)
	TMap<struct FString, int>                          VirtualCurrencies;                                        // 0x0060(0x0050) (ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroPlayFabClientData
// 0x02F0
struct FAstroPlayFabClientData
{
	struct FAstroPlayFabUserData                       UserData;                                                 // 0x0000(0x0230) (SaveGame)
	struct FAstroPlayFabUserReadOnlyData               UserReadOnlyData;                                         // 0x0230(0x0010) (SaveGame)
	struct FAstroPlayFabInventory                      Inventory;                                                // 0x0240(0x00B0) (SaveGame)
};

// ScriptStruct AstroPlayFab.AstroMicroTxnStoreItem
// 0x00C0
struct FAstroMicroTxnStoreItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PlatformStoreId;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, int>                          RealCurrencyPrices;                                       // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, int>                          VirtualCurrencyPrices;                                    // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroCatalogItem
// 0x0030
struct FAstroCatalogItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemClass;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Tags;                                                     // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroPlayFabMicroTxnStoreData
// 0x0020
struct FAstroPlayFabMicroTxnStoreData
{
	TArray<struct FAstroMicroTxnStoreItem>             StoreItems;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FAstroCatalogItem>                   CatalogItems;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroPlayFabEventDisplayTextData
// 0x0040
struct FAstroPlayFabEventDisplayTextData
{
	struct FString                                     Culture;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       EventDisplayName;                                         // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       EventDisplayDescription;                                  // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct AstroPlayFab.AstroPlayFabItemRequest
// 0x0018
struct FAstroPlayFabItemRequest
{
	struct FString                                     RequestItemType;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                RequestDenomination;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequestValuePerItem;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AstroPlayFab.AstroPlayFabItemDriveReward
// 0x0030
struct FAstroPlayFabItemDriveReward
{
	TArray<struct FString>                             InGameRewardItemTypes;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayFabRewardItem;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                RewardThreshold;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RepeatingRewardInterval;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsSecondaryReward : 1;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFab.AstroPlayFabItemDriveData
// 0x0040
struct FAstroPlayFabItemDriveData
{
	TArray<struct FAstroPlayFabItemRequest>            Requests;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAstroPlayFabItemDriveReward>        Rewards;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     PlayFabPlayerStat;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ItemDriveRocketType;                                      // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct AstroPlayFab.AstroPlayFabEventData
// 0x0078
struct FAstroPlayFabEventData
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FDateTime                                   EventStart;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDateTime                                   EventEnd;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               IsEventActive;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FAstroPlayFabEventDisplayTextData>   DisplayTextData;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FAstroPlayFabItemDriveData                  ItemDriveData;                                            // 0x0038(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct AstroPlayFab.AstroServerInfo
// 0x0098
struct FAstroServerInfo
{
	struct FText                                       ServerName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ServerURL;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NumPlayers;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ServerCapacity;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BuildVersion;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Category;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     NickName;                                                 // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      requiresPassword : 1;                                     // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      IsFavorite : 1;                                           // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsRecent : 1;                                             // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FDateTime                                   LastJoinedTimestamp;                                      // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     lastJoinedPassword;                                       // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PublicSigningKey;                                         // 0x0080(0x0010) (ZeroConstructor)
	int                                                Index;                                                    // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct AstroPlayFab.AstroPlayFabTitleData
// 0x0010
struct FAstroPlayFabTitleData
{
	TArray<struct FAstroPlayFabEventData>              EventData;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroMicroTxnCombinedItem
// 0x00E0
struct FAstroMicroTxnCombinedItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     PlatformStoreId;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemClass;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Tags;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, int>                          RealCurrencyPrices;                                       // 0x0040(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, int>                          VirtualCurrencyPrices;                                    // 0x0090(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AstroPlayFab.AstroTitleNewsItem
// 0x0038
struct FAstroTitleNewsItem
{
	struct FString                                     NewsId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   Timestamp;                                                // 0x0010(0x0008)
	struct FString                                     Title;                                                    // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     Body;                                                     // 0x0028(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
