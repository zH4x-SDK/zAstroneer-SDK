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

// BlueprintGeneratedClass PowerBar_Ringed_Dual_11.PowerBar_Ringed_Dual_10_C
// 0x0038 (0x042C - 0x03F4)
class APowerBar_Ringed_Dual_10_C : public APowerBar_Ringed_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               Sub_Mesh_Spacers;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Sub_Meshes;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Sub_Scene;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sub_Material;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               As_Battery;                                               // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rate;                                                     // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PowerBar_Ringed_Dual_11.PowerBar_Ringed_Dual_10_C");
		return ptr;
	}


	void UserConstructionScript();
	void Set_View(float Alpha, float Rate);
	void ExecuteUbergraph_PowerBar_Ringed_Dual_11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
