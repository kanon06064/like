// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueLike/RogueLikeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRogueLikeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ROGUELIKE_API UClass* Z_Construct_UClass_ARogueLikeGameModeBase();
	ROGUELIKE_API UClass* Z_Construct_UClass_ARogueLikeGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RogueLike();
// End Cross Module References
	void ARogueLikeGameModeBase::StaticRegisterNativesARogueLikeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARogueLikeGameModeBase);
	UClass* Z_Construct_UClass_ARogueLikeGameModeBase_NoRegister()
	{
		return ARogueLikeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARogueLikeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARogueLikeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RogueLike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARogueLikeGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARogueLikeGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RogueLikeGameModeBase.h" },
		{ "ModuleRelativePath", "RogueLikeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARogueLikeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARogueLikeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARogueLikeGameModeBase_Statics::ClassParams = {
		&ARogueLikeGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARogueLikeGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARogueLikeGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARogueLikeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARogueLikeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARogueLikeGameModeBase.OuterSingleton, Z_Construct_UClass_ARogueLikeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARogueLikeGameModeBase.OuterSingleton;
	}
	template<> ROGUELIKE_API UClass* StaticClass<ARogueLikeGameModeBase>()
	{
		return ARogueLikeGameModeBase::StaticClass();
	}
	ARogueLikeGameModeBase::ARogueLikeGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARogueLikeGameModeBase);
	ARogueLikeGameModeBase::~ARogueLikeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_G2343_Documents_GitHub_like_RogueLike_Source_RogueLike_RogueLikeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_G2343_Documents_GitHub_like_RogueLike_Source_RogueLike_RogueLikeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARogueLikeGameModeBase, ARogueLikeGameModeBase::StaticClass, TEXT("ARogueLikeGameModeBase"), &Z_Registration_Info_UClass_ARogueLikeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARogueLikeGameModeBase), 374808863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_G2343_Documents_GitHub_like_RogueLike_Source_RogueLike_RogueLikeGameModeBase_h_950937873(TEXT("/Script/RogueLike"),
		Z_CompiledInDeferFile_FID_Users_G2343_Documents_GitHub_like_RogueLike_Source_RogueLike_RogueLikeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_G2343_Documents_GitHub_like_RogueLike_Source_RogueLike_RogueLikeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
