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

// BlueprintGeneratedClass GameStartPortholeCamera.GameStartPortholeCamera_C
// 0x0008 (0x08E8 - 0x08E0)
class AGameStartPortholeCamera_C : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameStartPortholeCamera.GameStartPortholeCamera_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MakeSelfCameraTarget();
	void ReceiveDestroyed();
	void ExecuteUbergraph_GameStartPortholeCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
