#ifndef UE4SS_SDK_SocketSubsystemEOS_HPP
#define UE4SS_SDK_SocketSubsystemEOS_HPP

class UNetConnectionEOS : public UIpConnection
{
};

class UNetDriverEOSBase : public UIpNetDriver
{
    bool bIsPassthrough;
    bool bIsUsingP2PSockets;

};

#endif
