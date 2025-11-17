#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "TemplateMapInfoOverride.generated.h"

USTRUCT()
struct FTemplateMapInfoOverride {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath Thumbnail;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath Map;
    
    UPROPERTY(Config, EditAnywhere)
    FText DisplayName;
    
    ENGINESETTINGS_API FTemplateMapInfoOverride();
};

