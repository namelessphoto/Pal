#pragma once
#include "CoreMinimal.h"
#include "UserPackageRules.h"
#include "UserCategoryRules.generated.h"

USTRUCT()
struct FUserCategoryRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FUserPackageRules> Packages;
    
    HOUDINIENGINERUNTIME_API FUserCategoryRules();
};

