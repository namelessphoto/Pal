#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BulletHoleDecalInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBulletHoleDecalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> BulletHoleDecals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Decal_Size;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Decal_Size_RandomMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Decal_Size_RandomMax;
    
    PAL_API FBulletHoleDecalInfo();
};

