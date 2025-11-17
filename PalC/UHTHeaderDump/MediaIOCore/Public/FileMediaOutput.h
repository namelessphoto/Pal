#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DirectoryPath -FallbackName=DirectoryPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=ImageWriteQueue -ObjectName=ImageWriteOptions -FallbackName=ImageWriteOptions
#include "EFileMediaOutputPixelFormat.h"
#include "MediaOutput.h"
#include "FileMediaOutput.generated.h"

UCLASS(EditInlineNew)
class MEDIAIOCORE_API UFileMediaOutput : public UMediaOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FImageWriteOptions WriteOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirectoryPath FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString BaseFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideDesiredSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint DesiredSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverridePixelFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFileMediaOutputPixelFormat DesiredPixelFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertAlpha;
    
    UFileMediaOutput();

};

