#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CompositingElementTransform.h"
#include "CompositingMaterial.h"
#include "MultiPassChromaKeyer.generated.h"

class UTexture;

UCLASS(EditInlineNew)
class COMPOSURE_API UMultiPassChromaKeyer : public UCompositingElementTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FLinearColor> KeyColors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCompositingMaterial KeyerMaterial;
    
private:
    UPROPERTY(Transient)
    UTexture* DefaultWhiteTexture;
    
public:
    UMultiPassChromaKeyer();

};

