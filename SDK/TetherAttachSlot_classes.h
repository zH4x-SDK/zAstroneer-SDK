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

// BlueprintGeneratedClass TetherAttachSlot.TetherAttachSlot_C
// 0x0000 (0x0430 - 0x0430)
class ATetherAttachSlot_C : public APowerSlot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TetherAttachSlot.TetherAttachSlot_C");
		return ptr;
	}


	void AcceptsConnection();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
