#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "PalSpectatorPawn.generated.h"

UCLASS()
class APalSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> BlockCollisionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> SpeedRateList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InitSpeedRateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceFromLimitedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CameraBoomOffsetWhenFollowPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraBoomArmLengthWhenFollowPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraBoomArmLengthWhenFreely;
    
    APalSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

