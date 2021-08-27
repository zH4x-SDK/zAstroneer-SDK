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

// BlueprintGeneratedClass ResourceBundle.ResourceBundle_C
// 0x0030 (0x06D8 - 0x06A8)
class AResourceBundle_C : public AResourceBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                      // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max_Instance_Count;                                       // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          Transforms;                                               // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceBundle.ResourceBundle_C");
		return ptr;
	}


	void SetInstancedMeshVisible(bool Visible);
	void UserConstructionScript();
	void SetView();
	void Instance_Removed();
	void ExecuteUbergraph_ResourceBundle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
