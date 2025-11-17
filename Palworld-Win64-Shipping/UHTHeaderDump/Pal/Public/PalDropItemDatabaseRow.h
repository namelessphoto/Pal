#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDropItemDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalDropItemDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId4;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate4;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min4;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max4;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId5;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate5;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min5;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max5;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId6;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate6;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min6;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max6;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId7;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate7;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min7;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max7;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId8;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate8;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min8;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max8;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId9;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate9;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min9;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max9;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ItemId10;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate10;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 min10;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max10;
    
    PAL_API FPalDropItemDatabaseRow();
};

