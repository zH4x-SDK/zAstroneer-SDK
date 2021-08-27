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

// BlueprintGeneratedClass ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C
// 0x0010 (0x0488 - 0x0478)
class AResourceInfoMesh_Desc_C : public AResourceInfoMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        Item_Desc;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceInfoMesh_Desc.ResourceInfoMesh_Desc_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetDescription_Event_1(const struct FText& Text);
	void OnSpawn();
	void SetTextVisible(bool Visible);
	void ExecuteUbergraph_ResourceInfoMesh_Desc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
