#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalBiomeType.h"
#include "PalInvaderStartPoint.generated.h"

class UPalNavigationInvokerComponent;

UCLASS()
class PAL_API APalInvaderStartPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPalNavigationInvokerComponent* NavInvokerComponent;
    
private:
    UPROPERTY(EditAnywhere)
    EPalBiomeType BiomeType;
    
public:
    APalInvaderStartPoint(const FObjectInitializer& ObjectInitializer);

};

