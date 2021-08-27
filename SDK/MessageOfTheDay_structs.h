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

// Enum MessageOfTheDay.EAstroMessageOfTheDayVersion
enum class EAstroMessageOfTheDayVersion : uint8_t
{
	EAstroMessageOfTheDayVersion__Invalid = 0,
	EAstroMessageOfTheDayVersion__WebCDNHosted = 1,
	EAstroMessageOfTheDayVersion__FirstPlayFabVersion = 2,
	EAstroMessageOfTheDayVersion__Latest = 3,
	EAstroMessageOfTheDayVersion__EAstroMessageOfTheDayVersion_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MessageOfTheDay.AstroMessageOfTheDayLocalizedContent
// 0x0050
struct FAstroMessageOfTheDayLocalizedContent
{
	struct FText                                       Title;                                                    // 0x0000(0x0018)
	struct FText                                       LinkText;                                                 // 0x0018(0x0018)
	struct FString                                     URL;                                                      // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FText>                               Messages;                                                 // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct MessageOfTheDay.AstroMessageOfTheDayData
// 0x0058
struct FAstroMessageOfTheDayData
{
	EAstroMessageOfTheDayVersion                       version;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<struct FString, struct FAstroMessageOfTheDayLocalizedContent> Content;                                                  // 0x0008(0x0050) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
