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

// BlueprintGeneratedClass ResourceNuggetPower.ResourceNuggetPower_C
// 0x001F (0x0708 - 0x06E9)
class AResourceNuggetPower_C : public AResourceNuggetGlobules_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F0(0x0008) (Transient, DuplicateTransient)
	class UAdaptiveTickComponent*                      AdaptiveTick;                                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceNuggetPower.ResourceNuggetPower_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Power_K2Node_ComponentBoundEvent_1_ChargeLevelChangedEvent__DelegateSignature(float NewCharge, float ChargeDelta);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ResourceNuggetPower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
