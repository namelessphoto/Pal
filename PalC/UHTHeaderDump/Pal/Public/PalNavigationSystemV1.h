#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "PalNavigationSystemV1.generated.h"

UCLASS(NonTransient)
class UPalNavigationSystemV1 : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 UpdateInvokerCounter;
    
public:
    UPalNavigationSystemV1();

};

