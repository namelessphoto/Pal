#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalSkinAssetMap.generated.h"

class APalCharacter;
class UAnimInstance;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPalSkinAssetMap : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftObjectPtr<USkeletalMesh>> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftClassPtr<UAnimInstance>> AnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<APalCharacter> BaseCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<APalCharacter> BossCharacterClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FName> HairAttachSocketNameMap;
    
    PAL_API FPalSkinAssetMap();
};

