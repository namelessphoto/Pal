#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EUVLayoutType.h"
#include "UVLayoutProperties.generated.h"

UCLASS(NonTransient)
class MODELINGOPERATORS_API UUVLayoutProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EUVLayoutType LayoutType;
    
    UPROPERTY(EditAnywhere)
    int32 TextureResolution;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    FVector2D Translation;
    
    UPROPERTY(EditAnywhere)
    bool bAllowFlips;
    
    UUVLayoutProperties();

};

