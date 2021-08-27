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

// Class AstroOnline.AstroFriendsListManager
// 0x0000 (0x0028 - 0x0028)
class UAstroFriendsListManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroOnline.AstroFriendsListManager");
		return ptr;
	}


	void STATIC_ShowFriendProfile(class APlayerController* Player, const struct FAstroFriend& friendToView);
	void STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds);
	void STATIC_JoinFriendSessionDedicatedServer(class APlayerController* Player, const struct FAstroFriend& friendToJoin, const struct FAstroServerInfo& serverInfo, const struct FString& Password, const struct FScriptDelegate& onCompletion);
	bool STATIC_JoinFriendSession(class APlayerController* Player, const struct FAstroFriend& friendToJoin);
	void STATIC_InviteFriendToMySession(class APlayerController* Player, const struct FAstroFriend& friendToInvite);
	int STATIC_GetUpdateDelay();
	TArray<struct FAstroFriend> STATIC_GetOnlineFriends(class APlayerController* Player);
	void STATIC_GetFriendDedicatedServer(class APlayerController* Player, const struct FAstroFriend& friendToJoin, const struct FScriptDelegate& onCompletion);
	void STATIC_ForceRefresh(class UObject* WorldContextObject);
	void STATIC_EnableAutoRefresh(class UObject* WorldContextObject);
	void STATIC_DisableAutoRefresh(class UObject* WorldContextObject);
};


// Class AstroOnline.AstroOnlineAchievementsManager
// 0x0000 (0x0028 - 0x0028)
class UAstroOnlineAchievementsManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AstroOnline.AstroOnlineAchievementsManager");
		return ptr;
	}


	void STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds);
	void STATIC_ReportAchievementProgress(class APlayerController* Player, unsigned char achievementId, const struct FString& achievementName, float Progress, float Total);
	int STATIC_GetUpdateDelay();
	void STATIC_ForceRefresh(class UObject* WorldContextObject);
	void STATIC_EnableAutoRefresh(class UObject* WorldContextObject);
	void STATIC_DisableAutoRefresh(class UObject* WorldContextObject);
	void STATIC_AwardAchievement(class APlayerController* Player, unsigned char achievementId, const struct FString& achievementName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
