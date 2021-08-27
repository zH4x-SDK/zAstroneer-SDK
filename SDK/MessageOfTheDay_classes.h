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

// Class MessageOfTheDay.MessageOfTheDay
// 0x0058 (0x0080 - 0x0028)
class UMessageOfTheDay : public UObject
{
public:
	EAstroMessageOfTheDayVersion                       version;                                                  // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LinkText;                                                 // 0x0048(0x0018) (Edit, BlueprintVisible)
	struct FString                                     URL;                                                      // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FText>                               Messages;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MessageOfTheDay.MessageOfTheDay");
		return ptr;
	}

};


// Class MessageOfTheDay.AstroMessageOfTheDayManager
// 0x0000 (0x0028 - 0x0028)
class UAstroMessageOfTheDayManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MessageOfTheDay.AstroMessageOfTheDayManager");
		return ptr;
	}


	void STATIC_SetDefaultMessage(class UMessageOfTheDay* Message);
	class UMessageOfTheDay* STATIC_GetForCurrentCulture();
	void STATIC_ForceRefresh(class UObject* WorldContextObject);
	void STATIC_EnableAutoRefresh(class UObject* WorldContextObject);
	void STATIC_DisableAutoRefresh(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
