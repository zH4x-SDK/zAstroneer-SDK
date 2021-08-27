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

// ScriptStruct AstroPlayFabBPL.AstroVisorMaterialDisplayOption
// 0x0010
struct FAstroVisorMaterialDisplayOption
{
	class UAstroVisorMaterial*                         VisorMaterial;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLocked : 1;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsNew : 1;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFabBPL.AstroSuitDisplayOption
// 0x0010
struct FAstroSuitDisplayOption
{
	class UAstroCharacterSuit*                         Suit;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLocked : 1;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsNew : 1;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFabBPL.AstroPhotoFilterDisplayOption
// 0x0010
struct FAstroPhotoFilterDisplayOption
{
	class UAstroPhotoFilter*                           PhotoFilter;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLocked : 1;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsNew : 1;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFabBPL.AstroEmoteDisplayOption
// 0x0010
struct FAstroEmoteDisplayOption
{
	class UAstroEmoteDefinition*                       Emote;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLocked : 1;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsNew : 1;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFabBPL.AstroCharacterPaletteDisplayOption
// 0x0010
struct FAstroCharacterPaletteDisplayOption
{
	class UAstroCharacterPalette*                      CharacterPalette;                                         // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLocked : 1;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsNew : 1;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFabBPL.AstroCharacterOverlayPatternDisplayOption
// 0x0010
struct FAstroCharacterOverlayPatternDisplayOption
{
	class UAstroCharacterOverlayPattern*               CharacterOverlayPattern;                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLocked : 1;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsNew : 1;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AstroPlayFabBPL.AstroCharacterHatDisplayOption
// 0x0010
struct FAstroCharacterHatDisplayOption
{
	class UAstroCharacterHat*                          Hat;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isLocked : 1;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      IsNew : 1;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
