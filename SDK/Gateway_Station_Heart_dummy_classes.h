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

// BlueprintGeneratedClass Gateway_Station_Heart_dummy.Gateway_Station_Heart_Dummy_C
// 0x0008 (0x03B0 - 0x03A8)
class AGateway_Station_Heart_Dummy_C : public AActor
{
public:
	class UStaticMeshComponent*                        HeartMesh;                                                // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gateway_Station_Heart_dummy.Gateway_Station_Heart_Dummy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
