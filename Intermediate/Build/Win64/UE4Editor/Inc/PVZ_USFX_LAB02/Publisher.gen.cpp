// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Publisher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublisher() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APublisher_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APublisher();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APublisher::StaticRegisterNativesAPublisher()
	{
	}
	UClass* Z_Construct_UClass_APublisher_NoRegister()
	{
		return APublisher::StaticClass();
	}
	struct Z_Construct_UClass_APublisher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subscribers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subscribers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subscribers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublisher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublisher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Publisher.h" },
		{ "ModuleRelativePath", "Publisher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APublisher_Statics::NewProp_Subscribers_Inner = { "Subscribers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublisher_Statics::NewProp_Subscribers_MetaData[] = {
		{ "Comment", "//The Subscribers of this Publisher\n" },
		{ "ModuleRelativePath", "Publisher.h" },
		{ "ToolTip", "The Subscribers of this Publisher" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APublisher_Statics::NewProp_Subscribers = { "Subscribers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APublisher, Subscribers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APublisher_Statics::NewProp_Subscribers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APublisher_Statics::NewProp_Subscribers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APublisher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublisher_Statics::NewProp_Subscribers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublisher_Statics::NewProp_Subscribers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublisher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublisher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APublisher_Statics::ClassParams = {
		&APublisher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APublisher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APublisher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APublisher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublisher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublisher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APublisher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APublisher, 3050618432);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APublisher>()
	{
		return APublisher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APublisher(Z_Construct_UClass_APublisher, &APublisher::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APublisher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublisher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
