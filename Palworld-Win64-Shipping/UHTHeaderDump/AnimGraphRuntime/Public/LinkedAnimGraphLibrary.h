#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "LinkedAnimGraphReference.h"
#include "LinkedAnimGraphLibrary.generated.h"

class UAnimInstance;

UCLASS(BlueprintType)
class ANIMGRAPHRUNTIME_API ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULinkedAnimGraphLibrary();

    UFUNCTION(BlueprintPure)
    static bool HasLinkedAnimInstance(const FLinkedAnimGraphReference& Node);
    
    UFUNCTION(BlueprintPure)
    static UAnimInstance* GetLinkedAnimInstance(const FLinkedAnimGraphReference& Node);
    
    UFUNCTION(BlueprintPure)
    static void ConvertToLinkedAnimGraphPure(const FAnimNodeReference& Node, FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FLinkedAnimGraphReference ConvertToLinkedAnimGraph(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

