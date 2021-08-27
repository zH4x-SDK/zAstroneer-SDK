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

// BlueprintGeneratedClass GameStartDropshipCamera.GameStartDropshipCamera_C
// 0x0008 (0x08E8 - 0x08E0)
class AGameStartDropshipCamera_C : public ACameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameStartDropshipCamera.GameStartDropshipCamera_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MakeSelfCameraTarget();
	void ReceiveDestroyed();
	void ExecuteUbergraph_GameStartDropshipCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
