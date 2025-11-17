#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneSectionParameters.h"
#include "MovieSceneSubSection.generated.h"

class UMovieSceneSequence;

UCLASS(Config=EditorPerProjectUserSettings)
class MOVIESCENE_API UMovieSceneSubSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FMovieSceneSectionParameters Parameters;
    
private:
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float TimeScale;
    
    UPROPERTY()
    float PrerollTime;
    
    UPROPERTY(EditAnywhere)
    uint8 NetworkMask;
    
protected:
    UPROPERTY(EditAnywhere)
    UMovieSceneSequence* SubSequence;
    
public:
    UMovieSceneSubSection();

    UFUNCTION(BlueprintCallable)
    void SetSequence(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintPure)
    UMovieSceneSequence* GetSequence() const;
    
};

