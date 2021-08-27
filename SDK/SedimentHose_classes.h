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

// BlueprintGeneratedClass SedimentHose.SedimentHose_C
// 0x0040 (0x0720 - 0x06E0)
class ASedimentHose_C : public ASlotConnection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class URailComponent*                              Rail;                                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rep_Flow;                                                 // 0x06F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Target_Out;                                               // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Flow;                                                // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Wire_Material;                                            // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Wire_Material_Index;                                      // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConnectorSpeed;                                           // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlowTime;                                                 // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_FlowActive;                                           // 0x0714(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	class UClass*                                      SedimentType;                                             // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SedimentHose.SedimentHose_C");
		return ptr;
	}


	void CreateWireMaterial();
	void OnRep_REP_FlowActive();
	void SetSedimentFlowActive(bool FlowActive);
	void SetSedimentFlowRate(float FlowRate);
	void SetSedimentColor(const struct FLinearColor& NewColor);
	void UpdateConnectorSpeed(float Speed);
	void Set_Flow();
	void UserConstructionScript();
	void OnHoverOtherSlot(const struct FSlotReference& Slot);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Rail_K2Node_ComponentBoundEvent_0_OnUpdateRailCart__DelegateSignature(float Alpha, class APhysicalItem* Item);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SedimentHose(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
