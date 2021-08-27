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

// BlueprintGeneratedClass Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C
// 0x00DB (0x0483 - 0x03A8)
class ATutorial_POI_Tooltip_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UTooltipComponent*                           ToolTip;                                                  // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTooltipWidgetDisplayData                   TooltipData;                                              // 0x03C0(0x0088) (Edit, BlueprintVisible)
	bool                                               TooltipEnabled;                                           // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	struct FTooltipProximityBadgeVisibilityData        proximityData;                                            // 0x0450(0x0030) (Edit, BlueprintVisible)
	bool                                               CanShowDetails;                                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupressFocusTooltips;                                     // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShow;                                               // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_POI_Tooltip.Tutorial_POI_Tooltip_C");
		return ptr;
	}


	void GetTooltipDisplayAndProximityData(struct FTooltipWidgetDisplayData* RevisedTooltipData, struct FTooltipProximityBadgeVisibilityData* RevisedProximityData);
	void SetCanShowDetails(bool CanShow);
	void CheckShowTooltipDetails();
	void SetTooltipEnabled(bool Enabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSelfDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_Tutorial_POI_Tooltip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
