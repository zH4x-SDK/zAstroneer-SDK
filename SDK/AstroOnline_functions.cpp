
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

// Function AstroOnline.AstroFriendsListManager.ShowFriendProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroFriend            friendToView                   (ConstParm, Parm, OutParm, ReferenceParm)

void UAstroFriendsListManager::STATIC_ShowFriendProfile(class APlayerController* Player, const struct FAstroFriend& friendToView)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.ShowFriendProfile");

	UAstroFriendsListManager_ShowFriendProfile_Params params;
	params.Player = Player;
	params.friendToView = friendToView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroFriendsListManager.SetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            delayInSeconds                 (Parm, ZeroConstructor, IsPlainOldData)

void UAstroFriendsListManager::STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.SetUpdateDelay");

	UAstroFriendsListManager_SetUpdateDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.delayInSeconds = delayInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroFriendsListManager.JoinFriendSessionDedicatedServer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroFriend            friendToJoin                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAstroServerInfo        serverInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Password                       (Parm, ZeroConstructor)
// struct FScriptDelegate         onCompletion                   (Parm, ZeroConstructor)

void UAstroFriendsListManager::STATIC_JoinFriendSessionDedicatedServer(class APlayerController* Player, const struct FAstroFriend& friendToJoin, const struct FAstroServerInfo& serverInfo, const struct FString& Password, const struct FScriptDelegate& onCompletion)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.JoinFriendSessionDedicatedServer");

	UAstroFriendsListManager_JoinFriendSessionDedicatedServer_Params params;
	params.Player = Player;
	params.friendToJoin = friendToJoin;
	params.serverInfo = serverInfo;
	params.Password = Password;
	params.onCompletion = onCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroFriendsListManager.JoinFriendSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroFriend            friendToJoin                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAstroFriendsListManager::STATIC_JoinFriendSession(class APlayerController* Player, const struct FAstroFriend& friendToJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.JoinFriendSession");

	UAstroFriendsListManager_JoinFriendSession_Params params;
	params.Player = Player;
	params.friendToJoin = friendToJoin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroOnline.AstroFriendsListManager.InviteFriendToMySession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroFriend            friendToInvite                 (ConstParm, Parm, OutParm, ReferenceParm)

void UAstroFriendsListManager::STATIC_InviteFriendToMySession(class APlayerController* Player, const struct FAstroFriend& friendToInvite)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.InviteFriendToMySession");

	UAstroFriendsListManager_InviteFriendToMySession_Params params;
	params.Player = Player;
	params.friendToInvite = friendToInvite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroFriendsListManager.GetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAstroFriendsListManager::STATIC_GetUpdateDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.GetUpdateDelay");

	UAstroFriendsListManager_GetUpdateDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroOnline.AstroFriendsListManager.GetOnlineFriends
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAstroFriend>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAstroFriend> UAstroFriendsListManager::STATIC_GetOnlineFriends(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.GetOnlineFriends");

	UAstroFriendsListManager_GetOnlineFriends_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroOnline.AstroFriendsListManager.GetFriendDedicatedServer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAstroFriend            friendToJoin                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         onCompletion                   (Parm, ZeroConstructor)

void UAstroFriendsListManager::STATIC_GetFriendDedicatedServer(class APlayerController* Player, const struct FAstroFriend& friendToJoin, const struct FScriptDelegate& onCompletion)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.GetFriendDedicatedServer");

	UAstroFriendsListManager_GetFriendDedicatedServer_Params params;
	params.Player = Player;
	params.friendToJoin = friendToJoin;
	params.onCompletion = onCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroFriendsListManager.ForceRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroFriendsListManager::STATIC_ForceRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.ForceRefresh");

	UAstroFriendsListManager_ForceRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroFriendsListManager.EnableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroFriendsListManager::STATIC_EnableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.EnableAutoRefresh");

	UAstroFriendsListManager_EnableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroFriendsListManager.DisableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroFriendsListManager::STATIC_DisableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroFriendsListManager.DisableAutoRefresh");

	UAstroFriendsListManager_DisableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroOnlineAchievementsManager.SetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            delayInSeconds                 (Parm, ZeroConstructor, IsPlainOldData)

void UAstroOnlineAchievementsManager::STATIC_SetUpdateDelay(class UObject* WorldContextObject, int delayInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroOnlineAchievementsManager.SetUpdateDelay");

	UAstroOnlineAchievementsManager_SetUpdateDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.delayInSeconds = delayInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroOnlineAchievementsManager.ReportAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  achievementId                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 achievementName                (Parm, ZeroConstructor)
// float                          Progress                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Total                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAstroOnlineAchievementsManager::STATIC_ReportAchievementProgress(class APlayerController* Player, unsigned char achievementId, const struct FString& achievementName, float Progress, float Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroOnlineAchievementsManager.ReportAchievementProgress");

	UAstroOnlineAchievementsManager_ReportAchievementProgress_Params params;
	params.Player = Player;
	params.achievementId = achievementId;
	params.achievementName = achievementName;
	params.Progress = Progress;
	params.Total = Total;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroOnlineAchievementsManager.GetUpdateDelay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAstroOnlineAchievementsManager::STATIC_GetUpdateDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroOnlineAchievementsManager.GetUpdateDelay");

	UAstroOnlineAchievementsManager_GetUpdateDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AstroOnline.AstroOnlineAchievementsManager.ForceRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroOnlineAchievementsManager::STATIC_ForceRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroOnlineAchievementsManager.ForceRefresh");

	UAstroOnlineAchievementsManager_ForceRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroOnlineAchievementsManager.EnableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroOnlineAchievementsManager::STATIC_EnableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroOnlineAchievementsManager.EnableAutoRefresh");

	UAstroOnlineAchievementsManager_EnableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroOnlineAchievementsManager.DisableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroOnlineAchievementsManager::STATIC_DisableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroOnlineAchievementsManager.DisableAutoRefresh");

	UAstroOnlineAchievementsManager_DisableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AstroOnline.AstroOnlineAchievementsManager.AwardAchievement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  achievementId                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 achievementName                (Parm, ZeroConstructor)

void UAstroOnlineAchievementsManager::STATIC_AwardAchievement(class APlayerController* Player, unsigned char achievementId, const struct FString& achievementName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AstroOnline.AstroOnlineAchievementsManager.AwardAchievement");

	UAstroOnlineAchievementsManager_AwardAchievement_Params params;
	params.Player = Player;
	params.achievementId = achievementId;
	params.achievementName = achievementName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
