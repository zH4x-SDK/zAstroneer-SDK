
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

// Function ExoRequestEventIcon.ExoRequestEventIcon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                EventIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExoRequestEventIcon_C::SetIcon(class UTexture* EventIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExoRequestEventIcon.ExoRequestEventIcon_C.SetIcon");

	UExoRequestEventIcon_C_SetIcon_Params params;
	params.EventIcon = EventIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
