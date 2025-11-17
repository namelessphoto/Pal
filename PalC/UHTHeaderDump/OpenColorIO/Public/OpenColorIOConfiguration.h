#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OpenColorIOColorSpace.h"
#include "OpenColorIODisplayView.h"
#include "OpenColorIOConfiguration.generated.h"

class UOpenColorIOColorTransform;

UCLASS(BlueprintType)
class OPENCOLORIO_API UOpenColorIOConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFilePath ConfigurationFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOpenColorIODisplayView> DesiredDisplayViews;
    
private:
    UPROPERTY()
    TArray<UOpenColorIOColorTransform*> ColorTransforms;
    
public:
    UOpenColorIOConfiguration();

};

