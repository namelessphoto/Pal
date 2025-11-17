#pragma once
#include "CoreMinimal.h"
#include "GLTFExportMessages.generated.h"

USTRUCT(BlueprintType)
struct FGLTFExportMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Suggestions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Warnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> Errors;
    
    GLTFEXPORTER_API FGLTFExportMessages();
};

