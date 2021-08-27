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

// BlueprintGeneratedClass Item_ModernPOI_Wrecked_Condenser.Item_ModernPOI_Wrecked_Condenser_C
// 0x0014 (0x06F0 - 0x06DC)
class AItem_ModernPOI_Wrecked_Condenser_C : public ASlottable_Item_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        outputslot__TO_BE_DELETED_;                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        body__TO_BE_DELETED_;                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_ModernPOI_Wrecked_Condenser.Item_ModernPOI_Wrecked_Condenser_C");
		return ptr;
	}


	class UChildSlotComponent* GetBodySlotLegacy();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
