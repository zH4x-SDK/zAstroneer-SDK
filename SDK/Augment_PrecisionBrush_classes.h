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

// BlueprintGeneratedClass Augment_PrecisionBrush.Augment_PrecisionBrush_C
// 0x0008 (0x06C8 - 0x06C0)
class AAugment_PrecisionBrush_C : public AAugment_Base_C
{
public:
	class USceneComponent*                             TooltipAnchor;                                            // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Augment_PrecisionBrush.Augment_PrecisionBrush_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
