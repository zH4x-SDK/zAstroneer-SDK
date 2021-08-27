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

// BlueprintGeneratedClass ResourceSlotBody.ResourceSlotBody_C
// 0x0000 (0x0468 - 0x0468)
class AResourceSlotBody_C : public AResourceSlot_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ResourceSlotBody.ResourceSlotBody_C");
		return ptr;
	}


	void AcceptsBodySlot_1();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
