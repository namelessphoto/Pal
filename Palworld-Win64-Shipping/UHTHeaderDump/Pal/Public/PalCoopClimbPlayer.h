#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EHumanBone.h"
#include "PalCoopClimbPlayer.generated.h"

class APalCharacter;
class UPalAnimInstance;

UCLASS(BlueprintType)
class PAL_API UPalCoopClimbPlayer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartStandAnimeDelegate);
    
private:
    UPROPERTY()
    APalCharacter* Player;
    
    UPROPERTY()
    UPalAnimInstance* PlayerAnime;
    
    UPROPERTY()
    TArray<EHumanBone> BoneChain;
    
    UPROPERTY()
    int32 CurrentIndex;
    
    UPROPERTY()
    FTransform TargetWorldTf;
    
    UPROPERTY()
    float Progress;
    
public:
    UPROPERTY(BlueprintReadOnly)
    bool Complete;
    
    UPROPERTY(BlueprintAssignable)
    FStartStandAnimeDelegate StartStandAnimeDelegate;
    
    UPalCoopClimbPlayer();

    UFUNCTION(BlueprintCallable)
    FTransform UpdateTransform(FTransform Climber, float ProgressSpeed, float LeapPosSpeed, float LeapRotateSpeed, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void InitializeNode(EHumanBone EntryBone, APalCharacter* PlayerCharacter, FTransform Climber);
    
};

