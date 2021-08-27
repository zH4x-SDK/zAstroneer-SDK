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

// BlueprintGeneratedClass Planet_Marker.Planet_Marker_C
// 0x0040 (0x03E8 - 0x03A8)
class APlanet_Marker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Visible_Mesh;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTerrainModifierPlatform*                    TerrainModifierPlatform;                                  // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClickableComponent*                         clickable;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecoratorInfoComponent*                     DecoratorInfo;                                            // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Reserved;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	class ASolarBody*                                  Solar_Body;                                               // 0x03E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Planet_Marker.Planet_Marker_C");
		return ptr;
	}


	void HandleSolarSystemReady();
	void HandlePlanetMarkerSelected();
	void OnRep_Reserved();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnClicked_Event_1(class AActor* TouchedActor, const struct FKey& ButtonPressed);
	void OnLandSelectionBegin_Event_1(class ASolarBody* Body);
	void OnLandSelectionEnd_Event_1();
	void BndEvt__DecoratorInfo_K2Node_ComponentBoundEvent_0_Signal__DelegateSignature();
	void OnSolarSystemReady();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void BndEvt__Visible_Mesh_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void ExecuteUbergraph_Planet_Marker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
