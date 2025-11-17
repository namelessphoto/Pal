#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Constraints -ObjectName=ConstraintAndActiveChannel -FallbackName=ConstraintAndActiveChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneConstrainedSection -FallbackName=MovieSceneConstrainedSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSection -FallbackName=MovieSceneParameterSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneTransformMask -FallbackName=MovieSceneTransformMask
#include "ChannelMapInfo.h"
#include "EnumParameterNameAndCurve.h"
#include "IntegerParameterNameAndCurve.h"
#include "SpaceControlNameAndChannel.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneControlRigParameterSection.generated.h"

class UControlRig;

UCLASS()
class CONTROLRIG_API UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection, public IMovieSceneConstrainedSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UControlRig* ControlRig;
    
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY()
    TArray<bool> ControlsMask;
    
    UPROPERTY()
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY()
    FMovieSceneFloatChannel Weight;
    
    UPROPERTY()
    TMap<FName, FChannelMapInfo> ControlChannelMap;
    
protected:
    UPROPERTY()
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FSpaceControlNameAndChannel> SpaceChannels;
    
    UPROPERTY()
    TArray<FConstraintAndActiveChannel> ConstraintsChannels;
    
public:
    UMovieSceneControlRigParameterSection();


    // Fix for true pure virtual functions not being implemented
};

