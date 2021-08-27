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

// BlueprintGeneratedClass BP_Clouds_Mesh_Radiated_Proxy.BP_Clouds_Mesh_Radiated_Proxy_C
// 0x0010 (0x03B8 - 0x03A8)
class ABP_Clouds_Mesh_Radiated_Proxy_C : public AActor
{
public:
	class UStaticMeshComponent*                        clouds_radiated_simple;                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Clouds_Mesh_Radiated_Proxy.BP_Clouds_Mesh_Radiated_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
