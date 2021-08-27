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

// BlueprintGeneratedClass Oxygenator_T2.Oxygenator_T2_C
// 0x0008 (0x0730 - 0x0728)
class AOxygenator_T2_C : public AOxygenator_BASE_C
{
public:
	class UMaterialInstanceDynamic*                    GenerationLight;                                          // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Oxygenator_T2.Oxygenator_T2_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
