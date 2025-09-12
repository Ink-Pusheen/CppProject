// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCppProject/MyCppProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCppProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYCPPPROJECT_API UClass* Z_Construct_UClass_AMyCppProjectGameMode();
MYCPPPROJECT_API UClass* Z_Construct_UClass_AMyCppProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyCppProject();
// End Cross Module References

// Begin Class AMyCppProjectGameMode
void AMyCppProjectGameMode::StaticRegisterNativesAMyCppProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCppProjectGameMode);
UClass* Z_Construct_UClass_AMyCppProjectGameMode_NoRegister()
{
	return AMyCppProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyCppProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyCppProjectGameMode.h" },
		{ "ModuleRelativePath", "MyCppProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCppProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCppProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyCppProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCppProjectGameMode_Statics::ClassParams = {
	&AMyCppProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCppProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCppProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCppProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AMyCppProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCppProjectGameMode.OuterSingleton, Z_Construct_UClass_AMyCppProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCppProjectGameMode.OuterSingleton;
}
template<> MYCPPPROJECT_API UClass* StaticClass<AMyCppProjectGameMode>()
{
	return AMyCppProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCppProjectGameMode);
AMyCppProjectGameMode::~AMyCppProjectGameMode() {}
// End Class AMyCppProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Home_Documents_Unreal_Projects_CppProject_MyCppProject_Source_MyCppProject_MyCppProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCppProjectGameMode, AMyCppProjectGameMode::StaticClass, TEXT("AMyCppProjectGameMode"), &Z_Registration_Info_UClass_AMyCppProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCppProjectGameMode), 3397688486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Home_Documents_Unreal_Projects_CppProject_MyCppProject_Source_MyCppProject_MyCppProjectGameMode_h_3469559799(TEXT("/Script/MyCppProject"),
	Z_CompiledInDeferFile_FID_Users_Home_Documents_Unreal_Projects_CppProject_MyCppProject_Source_MyCppProject_MyCppProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Home_Documents_Unreal_Projects_CppProject_MyCppProject_Source_MyCppProject_MyCppProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
