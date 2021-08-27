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

// BlueprintGeneratedClass ChassisPad_Base.ChassisPad_Base_C
// 0x0068 (0x0420 - 0x03B8)
class AChassisPad_Base_C : public AItemPadActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPowerComponent*                             Power;                                                    // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Drilled;                                                  // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x03D1(0x000F) MISSED OFFSET
	struct FTransform                                  Target_Transform;                                         // 0x03E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Picked_Up;                                                // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	class USceneComponent*                             Target_Component;                                         // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChassisPad_Base.ChassisPad_Base_C");
		return ptr;
	}


	void Undrill_Terrain();
	void Set_Owner_Physics(bool Enable);
	void SaveGameFixup();
	void Drill_Terrain(const struct FVector& Position, class USceneComponent* Target, struct FVector* Normal);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OnSpawn(bool withTool, class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal);
	void OnPickedUpFromWorld_Event_1(bool PhysicalMovement);
	void OnDroppedInWorld_Event_1(class UPrimitiveComponent* Component, const struct FVector& Point, const struct FVector& Normal);
	void ExecuteUbergraph_ChassisPad_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
