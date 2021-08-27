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

// UserDefinedStruct AstroGameMenuColorPickerData.AstroGameMenuColorPickerData
// 0x0029
struct FAstroGameMenuColorPickerData
{
	TArray<struct FLinearColor>                        SwatchColors_8_AC4D7D8643351BA7CAE45A995B3C989E;          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Text_6_3CB668654C4CDC76B8B79A910205D213;                  // 0x0010(0x0018) (Edit, BlueprintVisible)
	bool                                               IsTextBold_11_36287424442441064E46A6A05B2A4F80;           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
