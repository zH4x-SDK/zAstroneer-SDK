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

// BlueprintGeneratedClass PowerBar_Ringed.PowerBar_Ringed_C
// 0x002C (0x03F4 - 0x03C8)
class APowerBar_Ringed_C : public APowerBarBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               Spacer_Meshes;                                            // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Ring_Meshes;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ticks;                                                    // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Bar_Material;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                rows;                                                     // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PowerBar_Ringed.PowerBar_Ringed_C");
		return ptr;
	}


	void Reset_Meshes();
	void Set_Ticks(int Ticks);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Set_View(float Alpha, float Rate);
	void ExecuteUbergraph_PowerBar_Ringed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
