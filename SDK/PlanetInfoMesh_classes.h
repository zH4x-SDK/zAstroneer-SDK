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

// BlueprintGeneratedClass PlanetInfoMesh.PlanetInfoMesh_C
// 0x0020 (0x0428 - 0x0408)
class APlanetInfoMesh_C : public AResourceInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene1;                                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFaceCameraComponent*                        FaceCamera;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlanetInfoMesh.PlanetInfoMesh_C");
		return ptr;
	}


	void Get_Owner_Component(class USceneComponent** Component);
	void Set_Position();
	void Ping();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void SetTextVisible(bool Visible);
	void OnSpawn();
	void ExecuteUbergraph_PlanetInfoMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
