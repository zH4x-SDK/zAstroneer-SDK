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

// UserDefinedStruct TutorialCursorTooltipData.TutorialCursorTooltipData
// 0x00EB
struct FTutorialCursorTooltipData
{
	class AActor*                                      Target_2_3694E24B4F2B20585651839D00A37E2A;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UTooltipComponent*                           TooltipComponent_26_D94410624EEC7578FFA723B54803FACE;     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       TargetDisplayName_23_EEDD55B444FB3C7E6DB12EA7606A374C;    // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FTooltipWidgetDisplayData                   DisplayData_5_41D5CE22440C31EAAECC5E90612F45A0;           // 0x0028(0x0088) (Edit, BlueprintVisible)
	struct FTooltipProximityBadgeVisibilityData        ProximityData_8_CE19CA06400E305E85F4D895230B445D;         // 0x00B0(0x0030) (Edit, BlueprintVisible)
	struct FName                                       OverrideName_11_CD03ACA74E7C7510A77961826A9BC588;         // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseAndExamine_14_40C604294D018710D6A337BB14D668C7;// 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowProximitySelect_16_144AC1374DF4436226070AAD9498F942; // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreserveDefaultAnchor_32_E34D05C04BB3183D8DBFB7B7169B50A9;// 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
