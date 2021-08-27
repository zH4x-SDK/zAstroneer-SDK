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

// BlueprintGeneratedClass StagingSkybox.StagingSkybox_C
// 0x0014 (0x05D4 - 0x05C0)
class AStagingSkybox_C : public ADayNight
{
public:
	class UStaticMeshComponent*                        Test_Nebula_Band;                                         // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Stars;                                                    // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotation_Speed;                                           // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StagingSkybox.StagingSkybox_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
