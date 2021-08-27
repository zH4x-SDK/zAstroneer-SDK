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

// BlueprintGeneratedClass Platform_T_T2x2_BP.Platform_T_T2x2_BP_C
// 0x0033 (0x0780 - 0x074D)
class APlatform_T_T2x2_BP_C : public APlatform_BASE_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	class USceneComponent*                             Tether_Center_2;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Tether_Center_1;                                          // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere2;                                                  // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot_3;                                              // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot_2;                                              // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildSlotComponent*                         CableSlot_1;                                              // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Platform_T_T2x2_BP.Platform_T_T2x2_BP_C");
		return ptr;
	}


	void GetTetherAttachPoints(TArray<struct FCircularAttachPoint>* AttachPoints);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
