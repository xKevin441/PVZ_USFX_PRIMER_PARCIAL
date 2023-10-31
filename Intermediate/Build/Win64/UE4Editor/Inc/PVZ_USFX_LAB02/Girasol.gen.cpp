// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Girasol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGirasol() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGirasol_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGirasol();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USubscriber_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UMorph_NoRegister();
// End Cross Module References
	void AGirasol::StaticRegisterNativesAGirasol()
	{
	}
	UClass* Z_Construct_UClass_AGirasol_NoRegister()
	{
		return AGirasol::StaticClass();
	}
	struct Z_Construct_UClass_AGirasol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombiePublisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombiePublisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGirasol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGirasol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Girasol.h" },
		{ "ModuleRelativePath", "Girasol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGirasol_Statics::NewProp_ZombiePublisher_MetaData[] = {
		{ "ModuleRelativePath", "Girasol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGirasol_Statics::NewProp_ZombiePublisher = { "ZombiePublisher", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGirasol, ZombiePublisher), Z_Construct_UClass_AZombie_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGirasol_Statics::NewProp_ZombiePublisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGirasol_Statics::NewProp_ZombiePublisher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGirasol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGirasol_Statics::NewProp_ZombiePublisher,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGirasol_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USubscriber_NoRegister, (int32)VTABLE_OFFSET(AGirasol, ISubscriber), false },
			{ Z_Construct_UClass_UMorph_NoRegister, (int32)VTABLE_OFFSET(AGirasol, IMorph), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGirasol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGirasol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGirasol_Statics::ClassParams = {
		&AGirasol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGirasol_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGirasol_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGirasol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGirasol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGirasol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGirasol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGirasol, 3963978361);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AGirasol>()
	{
		return AGirasol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGirasol(Z_Construct_UClass_AGirasol, &AGirasol::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AGirasol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGirasol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
