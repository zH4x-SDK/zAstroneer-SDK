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

// BlueprintGeneratedClass BP_Atmos_Mesh_ExoticMoon.BP_Atmos_Mesh_ExoticMoon_C
// 0x0020 (0x03C8 - 0x03A8)
class ABP_Atmos_Mesh_ExoticMoon_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UAstroPlayFabEventNotificationComponent*     AstroPlayFabEventNotification;                            // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        atmosphere_aurora;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Atmos_Mesh_ExoticMoon.BP_Atmos_Mesh_ExoticMoon_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_3_OnEventActiveStatusChanged__DelegateSignature(const struct FString& EventName, bool bIsEventActive);
	void BndEvt__AstroPlayFabEventNotification_K2Node_ComponentBoundEvent_0_OnReceivedInitialEventActiveStatus__DelegateSignature(TArray<struct FString>* activeEventsOfInterest);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Atmos_Mesh_ExoticMoon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
