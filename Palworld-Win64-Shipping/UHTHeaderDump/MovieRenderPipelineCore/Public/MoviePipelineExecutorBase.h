#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineHttpResponseRecievedDelegate.h"
#include "MoviePipelineSocketMessageRecievedDelegate.h"
#include "OnMoviePipelineExecutorErroredDelegate.h"
#include "OnMoviePipelineExecutorFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineExecutorBase.generated.h"

class UMoviePipeline;
class UMoviePipelineQueue;
class UMovieRenderDebugWidget;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineExecutorBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FOnMoviePipelineExecutorFinished OnExecutorFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnMoviePipelineExecutorErrored OnExecutorErroredDelegate;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FMoviePipelineSocketMessageRecieved SocketMessageRecievedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMoviePipelineHttpResponseRecieved HTTPResponseRecievedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UMovieRenderDebugWidget> DebugWidgetClass;
    
    UPROPERTY(BlueprintReadWrite)
    FString UserData;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UMoviePipeline> TargetPipelineClass;
    
public:
    UMoviePipelineExecutorBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusProgress(const float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusMessage(const FString& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetMoviePipelineClass(UClass* InPipelineClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SendSocketMessage(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    int32 SendHTTPRequest(const FString& InURL, const FString& InVerb, const FString& InMessage, const TMap<FString, FString>& InHeaders);
    
    UFUNCTION(BlueprintCallable)
    void OnExecutorFinishedImpl();
    
    UFUNCTION(BlueprintCallable)
    void OnExecutorErroredImpl(UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginFrame();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsSocketConnected() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsRendering() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetStatusProgress() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetStatusMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(UMoviePipelineQueue* InPipelineQueue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisconnectSocket();
    
    UFUNCTION(BlueprintCallable)
    bool ConnectSocket(const FString& InHostName, const int32 InPort);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelCurrentJob();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelAllJobs();
    
};

