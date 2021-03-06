/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionFragment : NSObject <NSCopying, NSMutableCopying, RCDictionaryPListRepresentationCoding> {
    NSURL *_AVOutputURL;
    double _contentDuration;
    struct { 
        double beginTime; 
        double endTime; 
    } _timeRangeInComposition;
    struct { 
        double beginTime; 
        double endTime; 
    } _timeRangeInContentToUse;
}

@property(assign,retain) NSURL * AVOutputURL;
@property(assign,readwrite) double contentDuration;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) struct { double x1; double x2; } timeRangeInComposition;
@property(assign,readwrite) struct { double x1; double x2; } timeRangeInContentToUse;
@property(assign,readonly) NSURL * waveformURL;

- (void).cxx_destruct;
- (id)AVOutputURL;
- (double)contentDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteFromFilesystem;
- (id)description;
- (id)dictionaryPListRepresentation;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(bool)arg1;
- (id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(struct { double x1; double x2; })arg1;
- (id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(struct { double x1; double x2; })arg3 timeRangeInComposition:(struct { double x1; double x2; })arg4;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (void)moveAssetsToFragment:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAVOutputURL:(id)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setTimeRangeInComposition:(struct { double x1; double x2; })arg1;
- (void)setTimeRangeInContentToUse:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeInComposition;
- (struct { double x1; double x2; })timeRangeInContentToUse;
- (id)waveformURL;

@end
