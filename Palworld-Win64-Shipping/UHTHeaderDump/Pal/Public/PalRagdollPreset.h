#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalRagdollPreset.generated.h"

UCLASS()
class UPalRagdollPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> LockBoneNames;
    
    UPROPERTY(EditDefaultsOnly)
    float LinearDamping;
    
    UPROPERTY(EditDefaultsOnly)
    float AngularDamping;
    
    UPalRagdollPreset();

};

