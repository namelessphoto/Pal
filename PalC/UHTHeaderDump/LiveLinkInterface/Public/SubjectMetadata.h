#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
#include "SubjectMetadata.generated.h"

USTRUCT(BlueprintType)
struct FSubjectMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FString> StringMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimecode SceneTimecode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameRate SceneFramerate;
    
    LIVELINKINTERFACE_API FSubjectMetadata();
};

