#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "CompositingElementOutput.h"
#include "EExrCompressionOptions.h"
#include "EXRFileCompositingOutput.generated.h"

UCLASS(EditInlineNew)
class COMPOSURE_API UEXRFileCompositingOutput : public UCompositingElementOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirectoryPath OutputDirectiory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FilenameFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameRate OutputFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EExrCompressionOptions Compression;
    
    UEXRFileCompositingOutput();

};

