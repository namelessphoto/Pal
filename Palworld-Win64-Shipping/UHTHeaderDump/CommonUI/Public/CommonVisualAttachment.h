#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SizeBox -FallbackName=SizeBox
#include "CommonVisualAttachment.generated.h"

UCLASS()
class COMMONUI_API UCommonVisualAttachment : public USizeBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ContentAnchor;
    
    UCommonVisualAttachment();

};

