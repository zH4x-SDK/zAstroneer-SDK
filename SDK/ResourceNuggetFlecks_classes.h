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

// BlueprintGeneratedClass ResourceNuggetFlecks.ResourceNuggetFlecks_C
// 0x0011 (0x06E9 - 0x06D8)
class AResourceNuggetFlecks_C : public AResourceBundle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    Bar_Material;                                             // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Partials_Unclickable;                                     // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceNuggetFlecks.ResourceNuggetFlecks_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetView();
	void ExecuteUbergraph_ResourceNuggetFlecks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
