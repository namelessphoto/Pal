#pragma once
#include "CoreMinimal.h"
#include "EAudioParameterType.h"
#include "AudioParameter.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct AUDIOEXTENSIONS_API FAudioParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BoolParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IntParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* ObjectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString StringParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> ArrayFloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<bool> ArrayBoolParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> ArrayIntParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> ArrayObjectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> ArrayStringParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAudioParameterType ParamType;
    
    UPROPERTY()
    FName TypeName;
    
    FAudioParameter();
};

