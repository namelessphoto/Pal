#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryAssetTypeInfo -FallbackName=PrimaryAssetTypeInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "GameFeatureData.generated.h"

class UGameFeatureAction;

UCLASS()
class GAMEFEATURES_API UGameFeatureData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Instanced)
    TArray<UGameFeatureAction*> Actions;
    
    UPROPERTY(EditAnywhere)
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
    
public:
    UGameFeatureData();

};

