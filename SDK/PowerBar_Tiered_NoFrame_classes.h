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

// BlueprintGeneratedClass PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C
// 0x0028 (0x03F0 - 0x03C8)
class APowerBar_Tiered_NoFrame_C : public APowerBarBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               Ring_Meshes;                                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ticks;                                                    // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Bar_Material;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Auto_Ticks;                                               // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	int                                                rows;                                                     // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PowerBar_Tiered_NoFrame.PowerBar_Tiered_NoFrame_C");
		return ptr;
	}


	void Reset_Meshes();
	void Set_Ticks(int Ticks);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Set_View(float Alpha, float Rate);
	void ExecuteUbergraph_PowerBar_Tiered_NoFrame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
