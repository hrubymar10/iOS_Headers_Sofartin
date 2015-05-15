/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {
    bool _didBeginOutput;
    long long _positionOffset;
}

@property (nonatomic) bool didBeginOutput;
@property (nonatomic) long long positionOffset;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)didBeginOutput;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)positionOffset;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setDidBeginOutput:(bool)arg1;
- (void)setForwardDeletionCount:(unsigned long long)arg1;
- (void)setHandwritingStrokesToDelete:(id)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setPositionOffset:(long long)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setTextToCommit:(id)arg1;

@end
