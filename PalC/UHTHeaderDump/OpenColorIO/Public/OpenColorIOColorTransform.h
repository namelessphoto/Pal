#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOpenColorIOViewTransformDirection.h"
#include "OpenColorIOColorTransform.generated.h"

class UOpenColorIOConfiguration;
class UTexture;

UCLASS()
class OPENCOLORIO_API UOpenColorIOColorTransform : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOpenColorIOConfiguration* ConfigurationOwner;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsDisplayViewType;
    
    UPROPERTY(VisibleAnywhere)
    FString SourceColorSpace;
    
    UPROPERTY(VisibleAnywhere)
    FString DestinationColorSpace;
    
    UPROPERTY(VisibleAnywhere)
    FString Display;
    
    UPROPERTY(VisibleAnywhere)
    FString View;
    
    UPROPERTY(VisibleAnywhere)
    EOpenColorIOViewTransformDirection DisplayViewDirection;
    
private:
    UPROPERTY(Transient)
    TMap<int32, UTexture*> Textures;
    
public:
    UOpenColorIOColorTransform();

};

