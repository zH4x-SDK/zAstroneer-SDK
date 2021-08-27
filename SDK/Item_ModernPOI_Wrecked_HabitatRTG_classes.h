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

// BlueprintGeneratedClass Item_ModernPOI_Wrecked_HabitatRTG.Item_ModernPOI_Wrecked_HabitatRTG_C
// 0x0000 (0x06DC - 0x06DC)
class AItem_ModernPOI_Wrecked_HabitatRTG_C : public ASlottable_Item_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_ModernPOI_Wrecked_HabitatRTG.Item_ModernPOI_Wrecked_HabitatRTG_C");
		return ptr;
	}


	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
