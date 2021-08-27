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

// BlueprintGeneratedClass Power_Cell_Bundle.Power_Cell_Bundle_C
// 0x0041 (0x0719 - 0x06D8)
class APower_Cell_Bundle_C : public AResourceBundle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlaceholdPreview;                                         // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Power_Bar;                                                // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHoverDelayComponent*                        HoverDelay;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BatteryConversionComplete;                                // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Power_Cell_Bundle.Power_Cell_Bundle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Power_K2Node_ComponentBoundEvent_0_ChargeLevelChangedEvent__DelegateSignature(float NewCharge, float ChargeDelta);
	void ExecuteUbergraph_Power_Cell_Bundle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
