#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "WwiseExternalSourceSettings.generated.h"

UCLASS(Config=Game)
class WWISESIMPLEEXTERNALSOURCE_API UWwiseExternalSourceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath MediaInfoTable;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath ExternalSourceDefaultMedia;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath ExternalSourceStagingDirectory;
    
    UWwiseExternalSourceSettings();

};

