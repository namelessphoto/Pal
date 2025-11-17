#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalSkinType.h"
#include "PalSkinInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSkinInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalSkinType SkinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SkinStaticClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHairAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetActorClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetPalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoGetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlatformItemID_Steam;
    
    PAL_API FPalSkinInfo();
};

