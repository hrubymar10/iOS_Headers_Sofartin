/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOcclusionsStackEntry : NSObject {
    NSString *_key;
    double _level;
    NSSet *_occlusions;
    NSOrderedSet *_orderedOcclusions;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic) double level;
@property (nonatomic, copy) NSSet *occlusions;
@property (nonatomic, readonly, copy) NSOrderedSet *orderedOcclusions;

- (void)dealloc;
- (id)description;
- (id)initWithKey:(id)arg1;
- (id)key;
- (double)level;
- (id)occlusions;
- (id)orderedOcclusions;
- (void)setLevel:(double)arg1;
- (void)setOcclusions:(id)arg1;

@end
