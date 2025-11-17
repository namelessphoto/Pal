#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "AnimSequenceLevelSequenceLink.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class LEVELSEQUENCE_API UAnimSequenceLevelSequenceLink : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGuid SkelTrackGuid;
    
    UPROPERTY(BlueprintReadWrite)
    FSoftObjectPath PathToLevelSequence;
    
    UAnimSequenceLevelSequenceLink();

};

