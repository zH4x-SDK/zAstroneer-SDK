
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

// Function MessageOfTheDay.AstroMessageOfTheDayManager.SetDefaultMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMessageOfTheDay*        Message                        (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMessageOfTheDayManager::STATIC_SetDefaultMessage(class UMessageOfTheDay* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageOfTheDay.AstroMessageOfTheDayManager.SetDefaultMessage");

	UAstroMessageOfTheDayManager_SetDefaultMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageOfTheDay.AstroMessageOfTheDayManager.GetForCurrentCulture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMessageOfTheDay*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMessageOfTheDay* UAstroMessageOfTheDayManager::STATIC_GetForCurrentCulture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageOfTheDay.AstroMessageOfTheDayManager.GetForCurrentCulture");

	UAstroMessageOfTheDayManager_GetForCurrentCulture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageOfTheDay.AstroMessageOfTheDayManager.ForceRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMessageOfTheDayManager::STATIC_ForceRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageOfTheDay.AstroMessageOfTheDayManager.ForceRefresh");

	UAstroMessageOfTheDayManager_ForceRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageOfTheDay.AstroMessageOfTheDayManager.EnableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMessageOfTheDayManager::STATIC_EnableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageOfTheDay.AstroMessageOfTheDayManager.EnableAutoRefresh");

	UAstroMessageOfTheDayManager_EnableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageOfTheDay.AstroMessageOfTheDayManager.DisableAutoRefresh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAstroMessageOfTheDayManager::STATIC_DisableAutoRefresh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageOfTheDay.AstroMessageOfTheDayManager.DisableAutoRefresh");

	UAstroMessageOfTheDayManager_DisableAutoRefresh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
