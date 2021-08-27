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

// BlueprintGeneratedClass TetherConnection.TetherConnection_C
// 0x0028 (0x0708 - 0x06E0)
class ATetherConnection_C : public ASlotConnection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              Rep_Flow;                                                 // 0x06E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Wire_Material;                                            // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Flow;                                                // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sounded_Connect;                                          // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sounded_Disconnect;                                       // 0x06FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               REP_Oxygen;                                               // 0x06FE(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x06FF(0x0001) MISSED OFFSET
	class UTetherAttachComponent*                      SourceTetherAttachComponent;                              // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TetherConnection.TetherConnection_C");
		return ptr;
	}


	void OnRep_Rep_Flow();
	void OnPreDisconnection(class ASlotConnection* connnection);
	void OnRep_REP_Oxygen();
	void Set_Oxygen(bool Oxygen);
	void Update_Power_Flow_Animation(float Flow);
	void UserConstructionScript();
	void OnConnected();
	void OnDisconnected();
	void OnUpdateTetherAttachPowerFlow(float PowerFlow);
	void ExecuteUbergraph_TetherConnection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
