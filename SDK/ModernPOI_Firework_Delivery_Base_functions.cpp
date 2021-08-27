
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

// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.CleanupSlottedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlotReference          SlotRef                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AModernPOI_Firework_Delivery_Base_C::CleanupSlottedItem(const struct FSlotReference& SlotRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.CleanupSlottedItem");

	AModernPOI_Firework_Delivery_Base_C_CleanupSlottedItem_Params params;
	params.SlotRef = SlotRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AModernPOI_Firework_Delivery_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.UserConstructionScript");

	AModernPOI_Firework_Delivery_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernPOI_Firework_Delivery_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.ReceiveTick");

	AModernPOI_Firework_Delivery_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.ExecuteUbergraph_ModernPOI_Firework_Delivery_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AModernPOI_Firework_Delivery_Base_C::ExecuteUbergraph_ModernPOI_Firework_Delivery_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModernPOI_Firework_Delivery_Base.ModernPOI_Firework_Delivery_Base_C.ExecuteUbergraph_ModernPOI_Firework_Delivery_Base");

	AModernPOI_Firework_Delivery_Base_C_ExecuteUbergraph_ModernPOI_Firework_Delivery_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
