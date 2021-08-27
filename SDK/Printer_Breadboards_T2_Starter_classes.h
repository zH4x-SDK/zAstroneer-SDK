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

// BlueprintGeneratedClass Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C
// 0x0008 (0x0778 - 0x0770)
class APrinter_Breadboards_T2_Starter_C : public APrinter_Breadboards_T2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0770(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Printer_Breadboards_T2_Starter.Printer_Breadboards_T2_Starter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleItemUnpacked();
	void ExecuteUbergraph_Printer_Breadboards_T2_Starter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
