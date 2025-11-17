#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalGenderType.h"
#include "EPalNPCClothesType.h"
#include "EPalNPCFaceType.h"
#include "EPalNPCHairColorType.h"
#include "EPalNPCHairStyleType.h"
#include "EPalNPCScaleType.h"
#include "EPalNPCSkinColor.h"
#include "PalUniqueNPCDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalUniqueNPCDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NameTextID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OneTalkDTName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TalkBPClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsTransientTalkCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalGenderType Gender;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalNPCSkinColor SkinColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalNPCFaceType Face;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalNPCHairStyleType HairStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalNPCHairColorType HairColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalNPCClothesType Clothes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalNPCScaleType Scale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Level;
    
    PAL_API FPalUniqueNPCDatabaseRow();
};

