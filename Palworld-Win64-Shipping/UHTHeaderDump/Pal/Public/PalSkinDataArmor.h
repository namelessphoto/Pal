#pragma once
#include "CoreMinimal.h"
#include "PalSkinDataBase.h"
#include "PalSkinDataArmor.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS()
class UPalSkinDataArmor : public UPalSkinDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftObjectPtr<USkeletalMesh>> ArmorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftClassPtr<UAnimInstance>> ArmorAnimBP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FName> HairAttachSocketNameMap;
    
    UPalSkinDataArmor();

};

