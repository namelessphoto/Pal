#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "PalAnimNotify_WorkActionAttack.generated.h"

UCLASS(CollapseCategories)
class PAL_API UPalAnimNotify_WorkActionAttack : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
public:
    UPalAnimNotify_WorkActionAttack();

};

