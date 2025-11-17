#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeTexture2DProperties.generated.h"

class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeTexture2DProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* SourceTexture;
    
    UPROPERTY(EditAnywhere)
    FString UVLayer;
    
    UPROPERTY()
    TArray<FString> UVLayerNamesList;
    
    UBakeTexture2DProperties();

    UFUNCTION()
    TArray<FString> GetUVLayerNamesFunc() const;
    
};

