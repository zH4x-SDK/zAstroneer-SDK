
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

// Function PrinterControlPanelPrimary.PrinterControlPanelPrimary_C.UpdateInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AvailableResourceCounts        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NumAvailableItems              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrinterControlPanelPrimary_C::UpdateInfo(class UClass* ItemType, int NumAvailableItems, int ItemIndex, TArray<int>* AvailableResourceCounts)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanelPrimary.PrinterControlPanelPrimary_C.UpdateInfo");

	UPrinterControlPanelPrimary_C_UpdateInfo_Params params;
	params.ItemType = ItemType;
	params.NumAvailableItems = NumAvailableItems;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableResourceCounts != nullptr)
		*AvailableResourceCounts = params.AvailableResourceCounts;
}


// Function PrinterControlPanelPrimary.PrinterControlPanelPrimary_C.setVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrinterControlPanelPrimary_C::setVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrinterControlPanelPrimary.PrinterControlPanelPrimary_C.setVisible");

	UPrinterControlPanelPrimary_C_setVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
