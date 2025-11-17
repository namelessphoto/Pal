#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "LandscapeNaniteComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeNaniteComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid ProxyContentId;
    
    UPROPERTY(Transient)
    bool bEnabled;
    
public:
    ULandscapeNaniteComponent(const FObjectInitializer& ObjectInitializer);

};

