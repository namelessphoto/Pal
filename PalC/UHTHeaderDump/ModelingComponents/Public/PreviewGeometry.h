#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PreviewGeometry.generated.h"

class APreviewGeometryActor;
class ULineSetComponent;
class UMaterialInterface;
class UPointSetComponent;
class UWorld;

UCLASS(Transient)
class MODELINGCOMPONENTS_API UPreviewGeometry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    APreviewGeometryActor* ParentActor;
    
    UPROPERTY(Instanced)
    TMap<FString, ULineSetComponent*> LineSets;
    
    UPROPERTY(Instanced)
    TMap<FString, UPointSetComponent*> PointSets;
    
    UPreviewGeometry();

    UFUNCTION()
    bool SetPointSetVisibility(const FString& PointSetIdentifier, bool bVisible);
    
    UFUNCTION()
    bool SetPointSetMaterial(const FString& PointSetIdentifier, UMaterialInterface* NewMaterial);
    
    UFUNCTION()
    bool SetLineSetVisibility(const FString& LineSetIdentifier, bool bVisible);
    
    UFUNCTION()
    bool SetLineSetMaterial(const FString& LineSetIdentifier, UMaterialInterface* NewMaterial);
    
    UFUNCTION()
    void SetAllPointSetsMaterial(UMaterialInterface* Material);
    
    UFUNCTION()
    void SetAllLineSetsMaterial(UMaterialInterface* Material);
    
    UFUNCTION()
    bool RemovePointSet(const FString& PointSetIdentifier, bool bDestroy);
    
    UFUNCTION()
    bool RemoveLineSet(const FString& LineSetIdentifier, bool bDestroy);
    
    UFUNCTION()
    void RemoveAllPointSets(bool bDestroy);
    
    UFUNCTION()
    void RemoveAllLineSets(bool bDestroy);
    
    UFUNCTION()
    APreviewGeometryActor* GetActor() const;
    
    UFUNCTION()
    UPointSetComponent* FindPointSet(const FString& PointSetIdentifier);
    
    UFUNCTION()
    ULineSetComponent* FindLineSet(const FString& LineSetIdentifier);
    
    UFUNCTION()
    void Disconnect();
    
    UFUNCTION()
    void CreateInWorld(UWorld* World, const FTransform& WithTransform);
    
    UFUNCTION()
    UPointSetComponent* AddPointSet(const FString& PointSetIdentifier);
    
    UFUNCTION()
    ULineSetComponent* AddLineSet(const FString& LineSetIdentifier);
    
};

