#ifndef UE4SS_SDK_WwiseNiagara_HPP
#define UE4SS_SDK_WwiseNiagara_HPP

class UNiagaraDataInterfaceWwiseEvent : public UNiagaraDataInterface
{
    class UAkAudioEvent* EventToPost;
    TArray<class UAkRtpc*> GameParameters;
    bool bLimitPostsPerTick;
    int32 MaxPostsPerTick;
    bool bStopWhenComponentIsDestroyed;

};

#endif
