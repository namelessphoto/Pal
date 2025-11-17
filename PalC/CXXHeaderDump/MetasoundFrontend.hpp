#ifndef UE4SS_SDK_MetasoundFrontend_HPP
#define UE4SS_SDK_MetasoundFrontend_HPP

#include "MetasoundFrontend_enums.hpp"

struct FMetasoundFrontendClass
{
    FGuid ID;
    FMetasoundFrontendClassMetadata MetaData;
    FMetasoundFrontendClassInterface Interface;

};

struct FMetasoundFrontendClassEnvironmentVariable
{
    FName Name;
    FName TypeName;
    bool bIsRequired;

};

struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{
    FMetasoundFrontendLiteral DefaultLiteral;

};

struct FMetasoundFrontendClassInterface
{
    TArray<FMetasoundFrontendClassInput> Inputs;
    TArray<FMetasoundFrontendClassOutput> Outputs;
    TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;
    FGuid ChangeID;

};

struct FMetasoundFrontendClassMetadata
{
    FMetasoundFrontendClassName ClassName;
    FMetasoundFrontendVersionNumber Version;
    EMetasoundFrontendClassType Type;
    bool bIsDeprecated;
    bool bAutoUpdateManagesInterface;
    FGuid ChangeID;

};

struct FMetasoundFrontendClassName
{
    FName Namespace;
    FName Name;
    FName Variant;

};

struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{
};

struct FMetasoundFrontendClassStyle
{
};

struct FMetasoundFrontendClassStyleDisplay
{
};

struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{
    FMetasoundFrontendLiteral DefaultLiteral;

};

struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{
    FGuid NodeID;
    EMetasoundFrontendVertexAccessType AccessType;

};

struct FMetasoundFrontendDocument
{
    FMetasoundFrontendDocumentMetadata MetaData;
    TSet<FMetasoundFrontendVersion> Interfaces;
    FMetasoundFrontendGraphClass RootGraph;
    TArray<FMetasoundFrontendGraphClass> Subgraphs;
    TArray<FMetasoundFrontendClass> Dependencies;
    FMetasoundFrontendVersion ArchetypeVersion;
    TArray<FMetasoundFrontendVersion> InterfaceVersions;

};

struct FMetasoundFrontendDocumentMetadata
{
    FMetasoundFrontendVersion Version;

};

struct FMetasoundFrontendEdge
{
    FGuid FromNodeID;
    FGuid FromVertexID;
    FGuid ToNodeID;
    FGuid ToVertexID;

};

struct FMetasoundFrontendEdgeStyle
{
    FGuid NodeID;
    FName OutputName;
    TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;

};

struct FMetasoundFrontendEdgeStyleLiteralColorPair
{
    FMetasoundFrontendLiteral Value;
    FLinearColor Color;

};

struct FMetasoundFrontendGraph
{
    TArray<FMetasoundFrontendNode> Nodes;
    TArray<FMetasoundFrontendEdge> Edges;
    TArray<FMetasoundFrontendVariable> Variables;

};

struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{
    FMetasoundFrontendGraph Graph;
    FMetasoundFrontendGraphClassPresetOptions PresetOptions;

};

struct FMetasoundFrontendGraphClassPresetOptions
{
    bool bIsPreset;
    TSet<FName> InputsInheritingDefault;

};

struct FMetasoundFrontendGraphStyle
{
    bool bIsGraphEditable;
    TArray<FMetasoundFrontendEdgeStyle> EdgeStyles;

};

struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{
    FMetasoundFrontendVersion Version;

};

struct FMetasoundFrontendInterfaceStyle
{
};

struct FMetasoundFrontendLiteral
{
    EMetasoundFrontendLiteralType Type;
    int32 AsNumDefault;
    TArray<bool> AsBoolean;
    TArray<int32> AsInteger;
    TArray<float> AsFloat;
    TArray<FString> AsString;
    TArray<class UObject*> AsUObject;

};

struct FMetasoundFrontendNode
{
    FGuid ID;
    FGuid ClassID;
    FName Name;
    FMetasoundFrontendNodeInterface Interface;
    TArray<FMetasoundFrontendVertexLiteral> InputLiterals;

};

struct FMetasoundFrontendNodeInterface
{
    TArray<FMetasoundFrontendVertex> Inputs;
    TArray<FMetasoundFrontendVertex> Outputs;
    TArray<FMetasoundFrontendVertex> Environment;

};

struct FMetasoundFrontendNodeStyle
{
};

struct FMetasoundFrontendNodeStyleDisplay
{
};

struct FMetasoundFrontendVariable
{
    FName Name;
    FName TypeName;
    FMetasoundFrontendLiteral Literal;
    FGuid ID;
    FGuid VariableNodeID;
    FGuid MutatorNodeID;
    TArray<FGuid> AccessorNodeIDs;
    TArray<FGuid> DeferredAccessorNodeIDs;

};

struct FMetasoundFrontendVersion
{
    FName Name;
    FMetasoundFrontendVersionNumber Number;

};

struct FMetasoundFrontendVersionNumber
{
    int32 Major;
    int32 Minor;

};

struct FMetasoundFrontendVertex
{
    FName Name;
    FName TypeName;
    FGuid VertexID;

};

struct FMetasoundFrontendVertexLiteral
{
    FGuid VertexID;
    FMetasoundFrontendLiteral Value;

};

struct FMetasoundFrontendVertexMetadata
{
};

#endif
