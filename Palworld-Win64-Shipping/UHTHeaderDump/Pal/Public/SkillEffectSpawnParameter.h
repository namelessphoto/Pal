#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalBodyLocationType.h"
#include "Templates/SubclassOf.h"
#include "SkillEffectSpawnParameter.generated.h"

class APalSkillEffectBase;

USTRUCT(BlueprintType)
struct FSkillEffectSpawnParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APalSkillEffectBase> SkillEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAttachToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalBodyLocationType AttachLocationType;
    
    PAL_API FSkillEffectSpawnParameter();
};

