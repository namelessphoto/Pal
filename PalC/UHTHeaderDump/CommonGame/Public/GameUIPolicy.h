#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RootViewportLayoutInfo.h"
#include "GameUIPolicy.generated.h"

class UPrimaryGameLayout;

UCLASS(Abstract, Within=GameUIManagerSubsystem)
class COMMONGAME_API UGameUIPolicy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UPrimaryGameLayout> LayoutClass;
    
    UPROPERTY(Transient)
    TArray<FRootViewportLayoutInfo> RootViewportLayouts;
    
public:
    UGameUIPolicy();

};

