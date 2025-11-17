#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CategoryRules.h"
#include "HoudiniToolsPackageAsset.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniToolsPackageAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FCategoryRules> Categories;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath ExternalPackageDir;
    
    UPROPERTY(EditAnywhere)
    bool bReimportPackageDescription;
    
    UPROPERTY(EditAnywhere)
    bool bExportPackageDescription;
    
    UPROPERTY(EditAnywhere)
    bool bReimportToolsDescription;
    
    UPROPERTY(EditAnywhere)
    bool bExportToolsDescription;
    
    UHoudiniToolsPackageAsset();

};

