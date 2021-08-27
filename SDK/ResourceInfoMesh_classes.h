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

// BlueprintGeneratedClass ResourceInfoMesh.ResourceInfoMesh_C
// 0x0070 (0x0478 - 0x0408)
class AResourceInfoMesh_C : public AResourceInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UFaceCameraComponent*                        FaceCamera;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        Item_Name;                                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Left_Text;                                                // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	struct FVector                                     Text_Offset;                                              // 0x042C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Planet_Up;                                            // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FTransform                                  Owner_Transform;                                          // 0x0440(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Rotate_Icon;                                              // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Camera_Up;                                            // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0472(0x0002) MISSED OFFSET
	float                                              MaxTextDrawDistance;                                      // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceInfoMesh.ResourceInfoMesh_C");
		return ptr;
	}


	void Get_Offset_Distance(float* Distance);
	void GetOwnerTransform(struct FTransform* Transform);
	void Get_Slot(struct FSlotReference* Slot);
	void Get_Owner_Component(class UActorComponent** Component);
	void Set_Position();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void SetTextVisible(bool Visible);
	void OnSpawn();
	void ExecuteUbergraph_ResourceInfoMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
