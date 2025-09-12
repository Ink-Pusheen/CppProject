// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCppProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyCppProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyCppProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MyCppProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyCppProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5AFF5564,
				0xFEBF396F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyCppProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyCppProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyCppProject(Z_Construct_UPackage__Script_MyCppProject, TEXT("/Script/MyCppProject"), Z_Registration_Info_UPackage__Script_MyCppProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5AFF5564, 0xFEBF396F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
