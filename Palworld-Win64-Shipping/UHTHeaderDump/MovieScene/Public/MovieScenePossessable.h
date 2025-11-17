#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneObjectBindingID.h"
#include "MovieScenePossessable.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePossessable {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> Tags;
    
private:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FGuid ParentGuid;
    
    UPROPERTY()
    FMovieSceneObjectBindingID SpawnableObjectBindingID;
    
public:
    MOVIESCENE_API FMovieScenePossessable();
};

