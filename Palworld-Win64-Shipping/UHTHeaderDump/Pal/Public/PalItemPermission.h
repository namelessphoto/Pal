#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalItemPermission.generated.h"

USTRUCT(BlueprintType)
struct FPalItemPermission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<EPalItemTypeA> PermissionTypeA;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<EPalItemTypeB> PermissionTypeB;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<FName> PermissionItemStaticIds;
    
    PAL_API FPalItemPermission();
};

