// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Subscriber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubscriber() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USubscriber_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_USubscriber();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void USubscriber::StaticRegisterNativesUSubscriber()
	{
	}
	UClass* Z_Construct_UClass_USubscriber_NoRegister()
	{
		return USubscriber::StaticClass();
	}
	struct Z_Construct_UClass_USubscriber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubscriber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubscriber_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subscriber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubscriber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISubscriber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubscriber_Statics::ClassParams = {
		&USubscriber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USubscriber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubscriber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubscriber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubscriber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubscriber, 4047454217);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<USubscriber>()
	{
		return USubscriber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubscriber(Z_Construct_UClass_USubscriber, &USubscriber::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("USubscriber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubscriber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
