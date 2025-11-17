#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraBakerOutput.generated.h"

UCLASS(Abstract)
class NIAGARA_API UNiagaraBakerOutput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString OutputName;
    
    UNiagaraBakerOutput();

};

