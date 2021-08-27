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

// BlueprintGeneratedClass FreeCamRig.FreeCamRig_C
// 0x0018 (0x0AC8 - 0x0AB0)
class AFreeCamRig_C : public ACameraRigActor
{
public:
	class UFixedFOVModifierComponent*                  fixedFOVModifier;                                         // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUprightToPlanetModifierComponent*           UprightToPlanetModifier;                                  // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFreeControlModifierComponent*               FreeControlModifier;                                      // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FreeCamRig.FreeCamRig_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
