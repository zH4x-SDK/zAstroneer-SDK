#pragma once

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AstroOnline.EAstroFriendJoinRequestFailure
enum class EAstroFriendJoinRequestFailure : uint8_t
{
	EAstroFriendJoinRequestFailure__SessionInvalid = 0,
	EAstroFriendJoinRequestFailure__EAstroFriendJoinRequestFailure_MAX = 1
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AstroOnline.AstroFriend
// 0x0050
struct FAstroFriend
{
	struct FUniqueNetIdRepl                            UserId;                                                   // 0x0000(0x0018) (BlueprintVisible)
	struct FString                                     DisplayName;                                              // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsJoinable;                                              // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AstroOnline.FriendJoinRequestSucceededPayload
// 0x00D0
struct FFriendJoinRequestSucceededPayload
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
