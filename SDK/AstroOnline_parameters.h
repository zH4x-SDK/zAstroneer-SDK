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

// Function AstroOnline.AstroFriendsListManager.ShowFriendProfile
struct UAstroFriendsListManager_ShowFriendProfile_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroFriend                                friendToView;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AstroOnline.AstroFriendsListManager.SetUpdateDelay
struct UAstroFriendsListManager_SetUpdateDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                delayInSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroFriendsListManager.JoinFriendSessionDedicatedServer
struct UAstroFriendsListManager_JoinFriendSessionDedicatedServer_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroFriend                                friendToJoin;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAstroServerInfo                            serverInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Password;                                                 // (Parm, ZeroConstructor)
	struct FScriptDelegate                             onCompletion;                                             // (Parm, ZeroConstructor)
};

// Function AstroOnline.AstroFriendsListManager.JoinFriendSession
struct UAstroFriendsListManager_JoinFriendSession_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroFriend                                friendToJoin;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroOnline.AstroFriendsListManager.InviteFriendToMySession
struct UAstroFriendsListManager_InviteFriendToMySession_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroFriend                                friendToInvite;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AstroOnline.AstroFriendsListManager.GetUpdateDelay
struct UAstroFriendsListManager_GetUpdateDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroOnline.AstroFriendsListManager.GetOnlineFriends
struct UAstroFriendsListManager_GetOnlineFriends_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAstroFriend>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AstroOnline.AstroFriendsListManager.GetFriendDedicatedServer
struct UAstroFriendsListManager_GetFriendDedicatedServer_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAstroFriend                                friendToJoin;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             onCompletion;                                             // (Parm, ZeroConstructor)
};

// Function AstroOnline.AstroFriendsListManager.ForceRefresh
struct UAstroFriendsListManager_ForceRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroFriendsListManager.EnableAutoRefresh
struct UAstroFriendsListManager_EnableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroFriendsListManager.DisableAutoRefresh
struct UAstroFriendsListManager_DisableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroOnlineAchievementsManager.SetUpdateDelay
struct UAstroOnlineAchievementsManager_SetUpdateDelay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                delayInSeconds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroOnlineAchievementsManager.ReportAchievementProgress
struct UAstroOnlineAchievementsManager_ReportAchievementProgress_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      achievementId;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     achievementName;                                          // (Parm, ZeroConstructor)
	float                                              Progress;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Total;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroOnlineAchievementsManager.GetUpdateDelay
struct UAstroOnlineAchievementsManager_GetUpdateDelay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AstroOnline.AstroOnlineAchievementsManager.ForceRefresh
struct UAstroOnlineAchievementsManager_ForceRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroOnlineAchievementsManager.EnableAutoRefresh
struct UAstroOnlineAchievementsManager_EnableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroOnlineAchievementsManager.DisableAutoRefresh
struct UAstroOnlineAchievementsManager_DisableAutoRefresh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AstroOnline.AstroOnlineAchievementsManager.AwardAchievement
struct UAstroOnlineAchievementsManager_AwardAchievement_Params
{
	class APlayerController*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      achievementId;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     achievementName;                                          // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
