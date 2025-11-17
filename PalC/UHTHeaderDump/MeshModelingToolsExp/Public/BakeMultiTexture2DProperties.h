#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "BakeMultiTexture2DProperties.generated.h"

class UTexture2D;

UCLASS(BlueprintType, NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UTexture2D*> MaterialIDSourceTextures;
    
    UPROPERTY(EditAnywhere)
    FString UVLayer;
    
    UPROPERTY()
    TArray<FString> UVLayerNamesList;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UTexture2D*> AllSourceTextures;
    
    UBakeMultiTexture2DProperties();

    UFUNCTION()
    TArray<FString> GetUVLayerNamesFunc() const;
    
};

