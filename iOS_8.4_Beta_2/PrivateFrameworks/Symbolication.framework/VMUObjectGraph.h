/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectGraph : VMUDirectedGraph {
    id *_classInfos;
    unsigned int _classInfosCount;
    unsigned int _internalizedCount;
    struct _VMUBlockNode { unsigned long long x1; unsigned int x2 : 3; unsigned int x3 : 36; unsigned int x4 : 25; } *_internalizedNodes;
    id _nodeProvider;
    VMUObjectGraph *_referenceGraph;
    unsigned int _referenceGraphEdgeNamespaceSize;
    unsigned int _referenceGraphNodeNamespaceSize;
    struct _VMUObjectGraphEdge { union { struct { unsigned int x_1_2_1 : 24; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3 : 5; unsigned int x_1_2_4 : 1; } x_1_1_1; struct { unsigned int x_2_2_1 : 31; unsigned int x_2_2_2 : 1; } x_1_1_2; } x1; } *_referenceTable;
    unsigned int _referenceTableCapacity;
    struct _VMUObjectGraphEdgeLarge { unsigned int x1 : 56; unsigned int x2 : 8; unsigned int x3 : 56; unsigned int x4 : 8; } *_referenceTableLarge;
    unsigned int _referenceTableLargeCapacity;
    unsigned int _referenceTableLargeCount;
    int _referencingCount;
}

- (void)_modifyDerivativeGraphCount:(int)arg1;
- (void)_renameWithNodeMap:(unsigned int*)arg1 edgeMap:(unsigned int*)arg2;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(int)arg3 toNode:(unsigned int)arg4 destinationOffset:(unsigned long long)arg5;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)enumerateMarkedObjects:(void*)arg1 withBlock:(id)arg2;
- (unsigned int)enumerateObjectsWithBlock:(id)arg1;
- (unsigned int)enumerateReferencesOfNode:(unsigned int)arg1 withBlock:(id)arg2;
- (unsigned int)enumerateReferencesWithBlock:(id)arg1;
- (id)initWithArchived:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNodes:(unsigned int)arg1 nodeProvider:(id)arg2;
- (void)internalizeNodes;
- (struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })nodeDetails:(unsigned int)arg1;
- (struct { unsigned long long x1; int x2; unsigned long long x3; })referenceInfoWithName:(unsigned int)arg1;

@end