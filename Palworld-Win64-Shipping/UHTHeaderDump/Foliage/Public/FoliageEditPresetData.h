#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FoliageEditPresetData.generated.h"

class UFoliageType;

UCLASS()
class FOLIAGE_API UFoliageEditPresetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float BrushSize;
    
    UPROPERTY(EditDefaultsOnly)
    float PaintDensity;
    
    UPROPERTY(EditDefaultsOnly)
    float EraseDensity;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFilterLandscape;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFilterStaticMeshes;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFilterBSP;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFilterFoliage;
    
    UPROPERTY(EditDefaultsOnly)
    bool bFilterTranslucent;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UFoliageType*> FoliageTypes;
    
    UFoliageEditPresetData();

};

