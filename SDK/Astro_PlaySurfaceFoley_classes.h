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

// BlueprintGeneratedClass Astro_PlaySurfaceFoley.Astro_PlaySurfaceFoley_C
// 0x0020 (0x0058 - 0x0038)
class UAstro_PlaySurfaceFoley_C : public UAnimNotify
{
public:
	struct FString                                     AttachName;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SoundEvent;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Astro_PlaySurfaceFoley.Astro_PlaySurfaceFoley_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
