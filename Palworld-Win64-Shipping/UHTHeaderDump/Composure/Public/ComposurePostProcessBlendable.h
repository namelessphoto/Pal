#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlendableInterface -FallbackName=BlendableInterface
#include "ComposurePostProcessBlendable.generated.h"

class UComposurePostProcessPass;

UCLASS()
class UComposurePostProcessBlendable : public UObject, public IBlendableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UComposurePostProcessPass* Target;
    
public:
    UComposurePostProcessBlendable();


    // Fix for true pure virtual functions not being implemented
};

