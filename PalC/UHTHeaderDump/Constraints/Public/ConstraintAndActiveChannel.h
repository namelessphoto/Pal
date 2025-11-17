#pragma once
#include "CoreMinimal.h"
#include "MovieSceneConstraintChannel.h"
#include "ConstraintAndActiveChannel.generated.h"

class UTickableConstraint;

USTRUCT(BlueprintType)
struct CONSTRAINTS_API FConstraintAndActiveChannel {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UTickableConstraint> Constraint;
    
    UPROPERTY()
    FMovieSceneConstraintChannel ActiveChannel;
    
    UPROPERTY()
    UTickableConstraint* ConstraintCopyToSpawn;
    
    FConstraintAndActiveChannel();
};

