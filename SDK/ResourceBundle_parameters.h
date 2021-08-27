#pragma once

#include "../SDK.h"

// Name: Astroneer-SDK, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ResourceBundle.ResourceBundle_C.SetInstancedMeshVisible
struct AResourceBundle_C_SetInstancedMeshVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResourceBundle.ResourceBundle_C.UserConstructionScript
struct AResourceBundle_C_UserConstructionScript_Params
{
};

// Function ResourceBundle.ResourceBundle_C.SetView
struct AResourceBundle_C_SetView_Params
{
};

// Function ResourceBundle.ResourceBundle_C.Instance Removed
struct AResourceBundle_C_Instance_Removed_Params
{
};

// Function ResourceBundle.ResourceBundle_C.ExecuteUbergraph_ResourceBundle
struct AResourceBundle_C_ExecuteUbergraph_ResourceBundle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
