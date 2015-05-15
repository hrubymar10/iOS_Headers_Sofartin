/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying> {
    NSString *_sinkID;
    int _sinkType;
    bool _videoDataDerivedFromPreview;
    bool _videoDataDiscardsLateVideoFrames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sinkID;
@property (nonatomic) int sinkType;
@property (readonly) Class superclass;
@property (nonatomic) bool videoDataDerivedFromPreview;
@property (nonatomic) bool videoDataDiscardsLateVideoFrames;

+ (void)initialize;
+ (int)sinkTypeForString:(id)arg1;
+ (id)stringForSinkType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSinkID:(id)arg1;
- (void)setSinkType:(int)arg1;
- (void)setVideoDataDerivedFromPreview:(bool)arg1;
- (void)setVideoDataDiscardsLateVideoFrames:(bool)arg1;
- (id)sinkID;
- (int)sinkType;
- (bool)videoDataDerivedFromPreview;
- (bool)videoDataDiscardsLateVideoFrames;

@end
