#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "FieldNodeFloat.h"
#include "NoiseField.generated.h"

class UNoiseField;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UNoiseField : public UFieldNodeFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UNoiseField(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UNoiseField* SetNoiseField(float NewMinRange, float NewMaxRange, FTransform NewTransform);
    
};

