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

// BlueprintGeneratedClass Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C
// 0x0010 (0x0680 - 0x0670)
class AAstro_Gates_GameMode_Instance_C : public AGatesGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Astro_Gates_GameMode_Instance.Astro_Gates_GameMode_Instance_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLifecycleStateChange(EGameLifecycleState OldState, EGameLifecycleState NewState);
	void ExecuteUbergraph_Astro_Gates_GameMode_Instance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
