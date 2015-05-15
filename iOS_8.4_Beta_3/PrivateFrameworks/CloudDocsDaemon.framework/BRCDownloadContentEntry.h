/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadContentEntry : BRCDownloadEntry {
    NSIndexSet *_desiredIndices;
    unsigned int _liveDocumentID;
    unsigned long long _liveFileID;
    bool _liveItemIsPackage;
    bool _requiresSecondPhase;
    bool _sharedZone;
}

@property (nonatomic, readonly) NSIndexSet *desiredIndices;
@property (nonatomic, readonly) unsigned int liveDocumentID;
@property (nonatomic, readonly) unsigned long long liveFileID;
@property (nonatomic, readonly) bool liveItemIsPackage;
@property (nonatomic, readonly) bool requiresSecondPhase;

- (void).cxx_destruct;
- (bool)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4;
- (bool)_stageEntryWithSession:(id)arg1 error:(id*)arg2;
- (bool)_stageEntryWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4;
- (id)description;
- (id)desiredIndices;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2;
- (int)kind;
- (unsigned int)liveDocumentID;
- (unsigned long long)liveFileID;
- (bool)liveItemIsPackage;
- (bool)requiresSecondPhase;

@end
