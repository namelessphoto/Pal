#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataSkeletalMesh.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS()
class UPalSkinDataSkeletalMesh : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UAnimInstance> AnimBP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HairAttachSocketName;
    
    UPalSkinDataSkeletalMesh();

};

