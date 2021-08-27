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

// BlueprintGeneratedClass ModernPOI_Rover_Horn-01_T3Drop_Collection.ModernPOI_Rover_Horn-01_T3Drop_Collection_C
// 0x0008 (0x03D0 - 0x03C8)
class AModernPOI_Rover_Horn_01_T3Drop_Collection_C : public AModernPOI_Rover_01_Small_Collection_C
{
public:
	class URaycastDistributionComponent*               Seat;                                                     // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModernPOI_Rover_Horn-01_T3Drop_Collection.ModernPOI_Rover_Horn-01_T3Drop_Collection_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
